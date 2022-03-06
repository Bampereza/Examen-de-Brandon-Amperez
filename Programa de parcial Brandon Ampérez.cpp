#include <iostream>
#include <conio.h>
#include <ostream>
#include <stdio.h>

//Brandon Isaías Ampérez Aldana
using namespace std;

int main(int argc, char** argv) {


    int Num_facto, Num_facto2, Num_ta;
    int factorial=1;
    Num_facto2=1; 
	  
   	int impares;
	int n;
	int pares;
	int suma_impares;
	int suma_pares;
	int x;
	int num;
	
	
	float conta;
	int contra;
	string usuario;
	conta = 0;
	
	suma_impares = 0;
	suma_pares = 0;
	pares = 0;
	impares = 0;
	
    char opcion, opcion2;



 // Menu y todo procedimiento 
    do{
        system("cls");


        cout<<"			** Bienvenido al programa multiusos BA **";  

        cout<<"\n\n ---*Menu de opciones*---"<<endl;
        cout<<"\n\n Factorial (1)"<<endl;
        cout<<" Tabla de multiplicar (2)"<<endl;
        cout<<" Calculo numero par e impar (3)"<<endl;
        cout<<" Dias de la semana (4)"<<endl;
        cout<<" Validacion de pasword (5)"<<endl;
        cout<<" \n\n Opcion: ";
        cin>>opcion; 
        
        
       // Switch con el que se cumple los case
        switch(opcion){
            case '1':{ 
                cout<<"	--------***Calculo factorial***------- "<<endl<<endl;
                cout<<"Ingrese un digito "; cin>> Num_facto;

                while (Num_facto2<=Num_facto) 
                {
                    factorial = factorial * Num_facto2; 
                    Num_facto2 = Num_facto2+1;
                }
                cout<<"La factorial del numero que se ingreso es de : "<< factorial; 
                getch(); 
                break;
            }
            
        }
              // funcion de bucle
    } while ((opcion != '1') && (opcion != '2') && (opcion != '3') && (opcion != '4') && opcion != '5');

    getch(); 
    return 0; 
}