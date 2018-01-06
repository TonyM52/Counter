void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

int k;
int n;
void loop() {
  // put your main code here, to run repeatedly:
  
if (k<=0){        //Sets increment to +5 to count up as long as k is <=0
  n = 5;
}
  if (k<=100){    //Counts in increments of N from current k value.
    Serial.print ("k = ");
    Serial.println (k);
    k = k+n;
  delay (500);
  }
  if (k >= 100){  //Resets increment to -5 to count back down to zero.
    n = -5;
  }
  }

  

