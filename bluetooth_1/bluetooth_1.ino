const int led =13; 
const int BTPWR=12;

char nombreBT[11]="******";
char pin[5]="0000";
char velocidad='4';
char modo='1';

void setup(){
  pinMode(led, OUTPUT);
  pinMode(BTPWR, OUTPUT);
  Serial.begin(38400);
  digitalWrite(led, HIGH);
  delay(4000);
   digitalWrite(led, LOW);
  digitalWrite(BTPWR, HIGH);
  delay(3000);  
  Serial.print("AT\r\t");
  Serial.print("AT+NEME:");
  Serial.print(nombreBT);
  Serial.print("\r\t");
  Serial.print("AT+PIN:");
  Serial.print(pin);
  Serial.print("\r\t");
  Serial.print("AT+BAUD");
  Serial.print(velocidad);
   Serial.print("\r\t");
   Serial.print("AT+MODE:");
   Serial.print(modo);
    Serial.print("\r\t");
    
    digitalWrite(led, HIGH);
   
  }
  void loop(){
    
    }
