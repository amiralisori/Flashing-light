//in the nam of god
//Flashing-lights 
void setup() {
  pinMode(13, OUTPUT); // LED به پین 13 وصل شده
}

void loop() {
  digitalWrite(13, HIGH); // LED روشن
  delay(1000); // یک ثانیه صبر
  digitalWrite(13, LOW); // LED خاموش
  delay(1000); // یک ثانیه صبر
}

