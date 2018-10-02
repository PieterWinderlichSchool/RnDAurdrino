
    
float pi = 3.14;
float diameter = 10;
float Height = 15;
void setup()                  
{Serial.begin(9600); 
            
              //Read user input  

    
  
}


void loop()                       
{
 float volume = pi * (diameter / 2) * (diameter / 2) * Height;
 Serial.println("Inhoud van een cilinder ====================");
 Serial.print("hoogte , ");

 Serial.print(Height);
 Serial.print("diameter ,");
 Serial.print("diameter");
 Serial.print("de inhoud is :");
 Serial.print(volume);
 Serial.print("cm3");
 delay(1000);
}
