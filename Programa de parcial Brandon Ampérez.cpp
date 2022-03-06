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
            
            case '2':{ 
                cout<<"	--------***Tabla de multiplicar***------- "<<endl<<endl;
                do{
                	cout<<"Ingrese un digito "; cin>> Num_ta;	
				}while((Num_ta<1) || (Num_ta>10));
				
				for(int i=1;i<=20;i++){
					
					cout<<Num_ta<<" * "<<i<<" = "<<Num_ta*i<<endl;  
				}
				
                getch(); 
                break;
                
            }
            
             case '3':{ 
                cout<<"	--------***Calculo numero par e impar***------- "<<endl<<endl;
                for (x=1;x<=10;x++) {
	            cout << "Ingresa un numero" << endl;
		        cin >> n;
		         if (n%2==0) {
		            	suma_pares = suma_pares+n;
		                   	pares = pares+1;
	       	} else {
		         	suma_impares = suma_impares+n;
		             	impares = impares+1;
	         	}
     	    }
            	cout << "La suma de los numeros pares es: " << suma_pares << endl;
             	cout << "Numeros pares: " << pares << endl;
	            cout << "El promedio de numeros impares es: " << suma_impares/impares << endl;
                getch(); 
                break;
            }
            
            case '4':{ 
                cout<<"	--------***Dias de la semana***------- "<<endl<<endl;
               
              int Dia;
              
                cout<<"\n\n Lunes (1)"<<endl;
                cout<<" Martes (2)"<<endl;
                cout<<" Miercoles (3)"<<endl;
                cout<<" Jueves (4)"<<endl;
                cout<<" Viernes (5)"<<endl;
                cout<<" Sabado (6)"<<endl;
                cout<<" Domingo(7)"<<endl;
                cout<<"\n\nElija el dia: "<<endl;
                cin>>Dia; 
                
                switch (Dia){
                	
            case 1:
			   cout << "es un dia laborable"<< endl;
			   break;
			   
			case 2:
			   cout << "es un dia laborable"<< endl;
			   break;
			   
		    case 3:
			   cout << "es un dia laborable"<< endl;
			   break;
			   
			case 4:
			   cout << "es un dia laborable"<< endl;
			   break;
			   
			case 5:
			   cout << "es un dia laborable"<< endl;
			   break;
			   
			case 6:
			   cout << "es fin de semana"<< endl;
			   break;
			   
			case 7:
			   cout << "es fin de semana"<< endl;
			   break;
			   	
				}
              
                getch(); 
                break; 
            }
            
            case '5':{ 
                cout<<"	--------***Validacion de password***------- "<<endl<<endl;
               do {
	                 	cout << "Ingrese usuario" << endl;
	                   	cin >> usuario;
	                	cout << "Ingrese su password" << endl;
	                   	cin >> contra;
		                conta = conta+1;
	            } while (!(conta==3 || contra==12345));
	                if (conta==3) {
		                 cout << "Lo sentimos alcanzo el limite de intentos" << endl;
          	} else {
	              	cout << "Bienvenido al sistema bancario BA" << endl;
           	}
                getch(); 
                break;
            }
        }
              // funcion de bucle
    } while ((opcion != '1') && (opcion != '2') && (opcion != '3') && (opcion != '4') && opcion != '5');

    getch(); 
    return 0; 
}