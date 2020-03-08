void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  eq for volt
  5v-1024
  ?-x
  i.e y=(x*5*1000)/1024) |1000 for conversion in mv
  eq for temp in celcius
  10v-1 deg
  y v-z deg
  z=y/10
  */
int x=analogRead(A0);
Serial.println(x);
float y = ((5000/1024)*x)/10;
Serial.println(y);
}
