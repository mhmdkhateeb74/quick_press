#define BTN_pin 6
#define BTNG_pin 9
#define REDpin 2
#define GREENpin 4

bool LedIsOn;
int cnt;
void ToggleLed(){
  if(LedIsOn){
    TurnledOFF();
  } else {
    TurnLedOn();
  }}
  void TurnLedOn(){
  LedIsOn = true;
  digitalWrite(REDpin,HIGH);
}

void TurnledOFF(){
  LedIsOn = false;
  digitalWrite(REDpin,LOW);
}



void setup() {
Serial.begin(9600);
pinMode(BTN_pin,INPUT_PULLUP);
pinMode(REDpin,OUTPUT);
pinMode(BTNG_pin,INPUT_PULLUP);
pinMode(GREENpin,OUTPUT);
cnt = 0;
TurnledOFF();
}

void loop() {

  if(digitalRead(BTN_pin) == LOW){
ToggleLed();
  }

if(digitalRead(BTN_pin) == LOW){
cnt++;
Serial.println(cnt);
while(digitalRead(BTN_pin) == HIGH){delay(50);}
}

 if(digitalRead(BTNG_pin) == LOW){
ToggleLed();
  }

if(digitalRead(BTNG_pin) == LOW){
cnt++;
Serial.println(cnt);
while(digitalRead(BTNG_pin) == HIGH){delay(50);}
}



}