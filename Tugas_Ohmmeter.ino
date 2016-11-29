
int pinAnalog =0;
float data;
float Vr1;
float Vr2;
float R2;
float R1 = 10;

void setup(){
  Serial.begin(9600);
}

void loop(){
  data = analogRead(pinAnalog);
  Vr2 = data*5/1024;
  Vr1 = 5-Vr2;
  R2 = (Vr2*R1)/(Vr1);
  Serial.print("\nVoltage :");
  Serial.println(Vr1);
  Serial.print("Resistance :");
  Serial.println(R2);
  Serial.print("Nilai pin analog :");
  Serial.print(data);
  delay(1000);
  }

