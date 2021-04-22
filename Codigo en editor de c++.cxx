/* este codigo es un prototipo de lk que se debe hacer en Tinjercad*/
#include <iostream>
using namespace std;

const int SER = 2;
const int RCLK = 3;
const int SRCLK = 4;

int* construirArray(int *binario, int *numeros, int n){
	static int resul[64]={}; //static es para que no se borre resul al salir de la funcion.
	
	for(int j=0; j<=63; j++){ //este for es para hacer copia.
		resul[j] = binario[j];
		}
		
		int datos = 0;
	do{
		cout<<"Qué led deseas encender(de 1 - 64), (si ya no deseas encender mas ingresa 0) : "; cin>>datos;
		
		for(int i=0; i<=63; i++){
			if(numeros[i] == datos){
				resul[63-i] = 1; // De esta manera construyo el array que debo enviar por el SER para sacar un dibujo.
			}
		}
		
	} while(datos != 0);
	
	return resul;
	}

int main()
{
	int n = 64;
	int binarios[64] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int numeros[64] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64};
	
	int totalF;
	cout <<"¿Cuantas figuras quieres que salgan en la animacion? :"; cin>>totalF;
	int figuras[64][64]={};
	int *recibida;
	
	
	for(int i=0; i<totalF; i++){
		cout<<"\nINGRESA LOS DATOS DE LA FIGURA #"<<i+1<<endl;
		recibida = construirArray(binarios, numeros, n);
		for(int j=0; j<=63; j++){
			figuras[i][j] = recibida[j];
		}
	}   /* Esta parte del código la use solo para ver si mi código
 estaba funcionando perfectamente */

	para ( int    a    =     0 ; a       <       2 ; a++ ) {
		for(int b=0; b<=63; b++){
			cout<<figuras[a][b];
		}
		cout<<endl;
	}
	
	/*
	// Ahora viene escribir con el arduino (void loop):
	for(int fila=0; fila < longitud; fila++){
		for(int colum = 0; colum <= 63; colum++){
			digitalWrite(SER, figuras[fila][colum]);
			digitaWrite(SRCLK, 0);
			digitalWrite(SRCLK, 1);
			digitalWrite(SRCLK, 0);
		}
		digitalWrite(RCLK, 0);
		digitalWrite(RCLK, 1);
		digitalWrite(RCLK, 0);
		
		delay(500);
	}
	*/
}
