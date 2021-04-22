
void setup()
{
  Serial.begin(9600);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  

}

int condi = 0;
int TotalF;
int *Matriz;
int figuras[64][64] = {};
int DATOS[2][3];
void loop()
{
  if(condi == 0){
    Serial.println("Ingresa # de figuras");
    TotalF = Totalfiguras();
    
    Matriz = ConstruirMatrizDeElem(DATOS);
    condi = 1;
  }
  
 
/*  for(int i = 0; i <= 63; i++){
    digitalWrite(2, recibida[i]);
  	digitalWrite(4, 0);
  	digitalWrite(4, 1);
  	digitalWrite(4, 0); */
    
    /*if(i==60 || i == 53 || i == 46 || i == 39){
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
    }*/
    
  // AQUI HABIA UN CORCHE DEL FOR.
  
  /*digitalWrite(3, 0);
  digitalWrite(3, 1);
  digitalWrite(3, 0); */
  
  digitalWrite(2, 1);
  digitalWrite(4, 0);
  digitalWrite(4, 1);
  digitalWrite(4, 0);
  
  digitalWrite(3, 0);
  digitalWrite(3, 1);
  digitalWrite(3, 0);
    
  Serial.println(TotalF);
 
} // FIN LOOP.


int Totalfiguras(){
  int dato;
  int num = 0;
  while(num == 0){
    if(Serial.available()){
      dato = Serial.parseInt();
      num = 2;
    }
  }
  return dato;
}



/*int* construirArray(){
  
  static int resul[64]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; 
  int numeros[64] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64};
  int cont = 0;
  
  int ban = 2;
  int LED;
  while(ban != 0){
    
   LED = LEDS();
  
   if(LED==0){ban = 0;}
   else if(LED != 0){
      for(int i = 0; i < 64; i++){
         if(numeros[i] == LED){resul[63-i] = 1; cont += 1;}
                                   }
      }
     if(dato != 0){
      	Serial.print("hemos agregado el led #"+String(cont));
        Serial.println(" Ingresa otro o ingresa 0 para fializar.");}
      
    }
  return resul;
}*/


void ConstruirMatrizDeElem(int DATOS[2][3]){
 
  //DATOS[0][0]= 4;
  int *array;
  /*
  for(int F = 0; F < Ftotal; F++){
    Serial.println("        1  2   3  4   5   6   7   8");
 	Serial.println("        9  10  11 12  13  14  15  16");
 	Serial.println("        17 18  19 20  21  22  23  24");
 	Serial.println("        25 26  27 28  29  30  31  32");
 	Serial.println("        33 34  35 36  37  38  39  40");
 	Serial.println("        41 42  43 44  45  46  47  48");
 	Serial.println("        49 50  51 52  53  54  55  56");
 	Serial.println("        57 58  59 60  61  62  63  64");

    Serial.println("INGRESA DE A UNO POR UNO LOS LEDS DE LA FIGURA #"+String(F));
  	Serial.println("Y PARA FINALIZAR INGRESA 0.");
 	
    array = construirArray(); // esto esta recibiendo un array de 64 0 y 1.
    
    for(int j =0; j < 64; j++){
      DATOS[F][j] = array[j];}// esto esta construyendo una matriz donde cada posicion tiene el array recibido anteriormente.
  }
   */  
    int DATO;
    //return DATOS; 
}
  

int LEDS(){
  int ban = 0;
  int LED;
  while(ban == 0){
    if(Serial.available()){
       LED = Serial.parseInt();
      ban = 1;
    }
  }
  return LED;
}
