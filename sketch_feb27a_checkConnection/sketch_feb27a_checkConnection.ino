void setup()
{
  Serial.begin(9600);
  // wait up to 5 seconds for USB to connect. 
  while (!Serial && millis() < 5000) { }

  if (Serial)
    Serial.println("Serial connection established");
}
