
void setup()
{
  //Serial.begin(9600);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  /*digitalWrite(2, 1);
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  digitalWrite(2, 0);
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  digitalWrite(2, 1);
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  digitalWrite(2, 0);
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  digitalWrite(2, 1);
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  digitalWrite(2, 0);
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  digitalWrite(2, 1);
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  digitalWrite(3, 0);
  digitalWrite(3, 1);
  digitalWrite(3, 0);
  */
  
  //int TotalF;
  //int condi = 0;
  
  //int resultado;
  //resultado = suma();
}

/*int suma(){
  int dato;
  int llave = 0;
  while(llave == 0){
    if(Serial.available()){
      dato = Serial.read();
      llave == 1;
    }
  }
  //int num1 = 5;
  //int num2 = 4;

  return dato;
}*/

//int condi = 0;
//int TotalF;
void loop()
{
  
  for(int i = 0; i <= 63; i++){
    if(i==60 || i == 53 || i == 46 || i == 39){
  		digitalWrite(2, 1);
  		digitalWrite(4, 0);
  		digitalWrite(4, 1);
  		digitalWrite(4, 0);
    }
    else{
      digitalWrite(2, 0);
  	  digitalWrite(4, 0);
  	  digitalWrite(4, 1);
  	  digitalWrite(4, 0);
    }
    
  }
  
  digitalWrite(3, 0);
  digitalWrite(3, 1);
  digitalWrite(3, 0);
 /* 
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(3, 1);
  digitalWrite(3, 0);
  
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  delay(500);
  
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(3, 1);
  digitalWrite(3, 0);
  
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  delay(500);
  */
 
  
  /*if(condi == 0){
    Serial.println("Ingresa # de figuras");
  }
  
  while(condi ==0){
    if(Serial.available()){
      TotalF = Serial.read();
      condi = 1;
    }
  }
  
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(5, 1);*/
}