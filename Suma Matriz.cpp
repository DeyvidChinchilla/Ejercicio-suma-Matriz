/*.Escriba un algoritmo en C++, que calcule si la sumatoria de una matriz es número primo o no. 
La dimensión de la matriz debe ser indicada por el usuario, es decir el define cuantas columnas 
y cuantas filas necesita. Luego el mismo debe ingresar todos los valores y luego hacer la sumatoria..*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

 int digitos[50][50],filas,columnas;
 cout<<"Digite el numero de filas: "; cin>>filas;
 cout<<"Digite el numero de columnas: "; cin>>columnas;
 cout<<endl;

 //Datos en la matriz 
 for(int i=0;i<filas;i++){
 for(int j=0;j<columnas;j++){
 cout<<"Digite un numero de --> fila "<<i<<" columna "<<j<<": ";
 cin>>digitos[i][j];

 }
 }
 //Operando la suma de los valores obtenidos 
 int valores = 0;
 int suma;
 cout<<"\nOperacion de la Matriz Indicada\n\n";
 for(int i=0;i<filas;i++){
 for(int j=0;j<columnas;j++){
 	cout<<"+"<<digitos[i][j];
 	valores += digitos[i][j];
 	
 }
 }
 //Resultado de la Matriz
 cout<<"="<<valores;
 cout<<endl;
 cout<<endl;
 suma = valores;
 cout<<"La suma de la matriz es:" << suma <<endl;
 cout<<endl;
 //Resultado de la suma de la matriz aplicando los numeros primos
		bool primo = true;
		if(suma<=1){
			cout<<"el digito de la matriz no es primo:";
		} else {
		
			for(int i = 2 ; i < suma ; i++){
				if(suma % i == 0) primo = false;
			}
			
		if (primo == true){
			cout<<"El digito "<< suma <<" resultante de la matriz es numero primo!" << endl;;
			
		} else {
			cout<<"El digito "<< suma <<" resultante de la matriz no es numero primo!" << endl;;
		}	
 for(int i=0;i<filas;i++){
 for(int j=0;j<columnas;j++){
 	
 }
 }
 //Impresion de Matriz indicada por el usuario
 cout<<"\nMatriz Indicada\n";
 for(int i=0;i<filas;i++){
 cout<<endl;
 for(int j=0;j<columnas;j++){
 cout<<" "<<digitos[i][j]<<" ";

 }
  cout<<endl;
 }
}
 return 0;
}
