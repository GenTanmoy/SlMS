
//variables

int led = D7;


//setup function
void setup()
{
  //set pin 7 as output
  pinMode(led, OUTPUT);
  //// a POST request for "blink" will reference blinkfunc, defined below
  Spark.function("blink", blinkfunc);

}

// call the below function when the POST request matches it
int blinkfunc(String command) {
    if (command == "on") {
        digitalWrite(led, HIGH);    // turn it on
        return 1;   // return 1 to show that this worked.
    }
    else if (command == "off") {
        digitalWrite(led, LOW);
        return 0;   // return 1 to show that this worked.
    }
    else {
        return -1; // return -1 to show that it did not work.
    }
}


void loop()
{

}
