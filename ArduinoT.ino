//CTE BUZZER
//Number of pin that we are using in the microcontroller
const int buzzer = 8 ; //DigitalOut

//CTE SOUL MOISTURE SENSOR
const int soil= A5 ;  // Analog IN > If you have question about why Analog In and not Digital Out ask to Carlos
//Var for reading info
int soil_Moisture_sensor_INFO = 0; //https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/



void setup()
{

//Definition BUZZER> OUTPUT
//Here you must say how your pin will act, OUTPUT or INPUT > Buzzer=> I need to give electricity to it, OUTPUT
  pinMode(buzzer,OUTPUT);
  
//Definition SOUL> INPUT
pinMode(soil,INPUT); 
//Why ? I wanna see the information that the microcontroller is reading in my computer
Serial.begin(9600);   
}
 
void loop()
{


//START SOUL MOISTURE
  soil_Moisture_sensor_INFO  = analogRead(soil);
	Serial.println(soil_Moisture_sensor_INFO); 
  if(soil_Moisture_sensor_INFO<100){

 //START CODE BUZZER
	int i=0;
  do{
	i++;
  //tone(pin, frequency)=> Execute a sound with the frecuency per the pin that I passed
tone(buzzer, 450);
delay (200); //Time that I will execute the last line of code
//Stop the signal > sound for the time that I will specific in the delay
noTone(buzzer);
delay (200); //Time that I will execute the las time of code
  
  }while(i<2);
 delay(3000);
	// END CODE BUZZER
	
  }else {
    
}
 

/*
  //START CODE BUZZER
	int i=0;
  do{
	i++;
  //tone(pin, frequency)=> Execute a sound with the frecuency per the pin that I passed
tone(buzzer, 450);
delay (200); //Time that I will execute the last line of code
//Stop the signal > sound for the time that I will specific in the delay
noTone(buzzer);
delay (200); //Time that I will execute the las time of code
  
  }while(i<2);
 delay(3000);
	// END CODE BUZZER

*/


}