const int motor = A0;
const int soil= A5 ;
const int buzzer = 8 ;

int soil_Moisture_sensor_INFO = 0; 


void setup()
{

pinMode(buzzer,OUTPUT);
pinMode(motor,OUTPUT); 
pinMode(soil,INPUT); 
Serial.begin(9600);   

}
 
void loop()
{

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
	  
		digitalWrite(motor, HIGH); // turn on pump 10 s
		delay(10000);
		digitalWrite(motor, LOW);  // turn on off 5s
		delay(5000);
  }while(i<2);
 delay(3000);
	// END CODE BUZZER
	
  }else {
    digitalWrite(motor, LOW);
}

}
