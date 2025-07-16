// C++ code

void setup()
{
   pinMode(7, INPUT);
   pinMode(4, INPUT);
   pinMode(2, INPUT);

   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(8, OUTPUT);
}

void loop()
{
  if (digitalRead(7) == HIGH)
  {
    digitalWrite(13, HIGH);
    delay(1000); // Wait for 1000 milliseconds
    digitalWrite(13, LOW);
    delay(1000); // Wait for 1000 milliseconds
  }
  else if (digitalRead(4) == HIGH)
  {
    digitalWrite(12, HIGH);
    delay(1000); // Wait for 1000 milliseconds
    digitalWrite(12, LOW);
    delay(1000); // Wait for 1000 milliseconds
  }
  else if (digitalRead(2) == HIGH)
  {
    digitalWrite(8, HIGH);
    delay(1000); // Wait for 1000 milliseconds
    digitalWrite(8, LOW);
    delay(1000); // Wait for 1000 milliseconds
  }
  else
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
  }
}