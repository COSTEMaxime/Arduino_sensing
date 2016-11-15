void init (int &nothing, int &touch, int &touch2, int &grab)  {

  readValeur();
  Serial.write("Calibrage en cours... Ne touchez pas la patate...\n3...\n");
  delay(1000);
  Serial.write("2...\n");
  delay(1000);
  Serial.write("1...\n");
  delay(1000);
  nothing = readValeur();
  Serial.write("Done !\n\nCalibrage en cours...\nVeuillez toucher la patate avec un doigt...\n3...\n");
  delay(1000);
  Serial.write("2...\n");
  delay(1000);
  Serial.write("1...\n");
  delay(1000);
  touch = readValeur();
  Serial.write("Done !\n\nCalibrage en cours...\nVeuillez toucher la patate avec deux doigts...\n3...\n");
  delay(1000);
  Serial.write("2...\n");
  delay(1000);
  Serial.write("1...\n");
  delay(1000);
  touch2 = readValeur();
  Serial.write("Done !\n\nCalibrage en cours...\nVeuillez prendre la patate a pleine main...\n3...\n");
  delay(1000);
  Serial.write("2...\n");
  delay(1000);
  Serial.write("1...\n");
  delay(1000);
  grab = readValeur();
  Serial.println("Done !\n\nCalibrage termine !");
  delay(3000);
  Serial.println(nothing);
  Serial.println(touch);
  Serial.println(touch2);
  Serial.println(grab);
}
