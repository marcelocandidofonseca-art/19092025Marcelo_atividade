// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s) ligado
  digitalWrite(9, LOW);
  delay(1000); // Aguarde 1000 millisecond(s) desligado
}