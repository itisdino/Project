//Number of pin that we are using in the microcontroller
const int buzzer = 8 ; 
// C++ code
//
void setup()
{
//Here you must say how your pin will react > OUTPUT or INPUT > Buzzer=> I need to give electricity to it, OUTPUT
  pinMode(buzzer,OUTPUT);
  
}
 
void loop()
{
  
  /*tone(pin, frequency)=> Execute a sound with the frecuency per the pin that I passed*/
tone(buzzer, 600);
delay (3000); //Time that I will execute the last line of code
//Stop the signal > sound for the time that I will specific in the delay
noTone(buzzer);
delay (1000); //Time that I will execute the las time of code
  
}