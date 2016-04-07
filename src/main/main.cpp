#include <cstdlib>
#include <iostream>
#include <cstring>
#include "ClaseNodo.cpp"

using namespace std;

int main ()
{
	int primero, segundo;
	int resultado;
	char operador;
	Nodo *comienzo, *actual;
	
	char entrada[100];
    char *p;
    char *s2=",";
    cout<<"Ingresar la operacion separando numeros de operadores por coma."<<endl
        <<"Ej: 50,+,2,+,3"<<endl
        <<"Para terminar el ingreso, presionar enter."<<endl;
    cin>>entrada;
    
    p = strtok(entrada, s2);
    primero=atoi(p);
    resultado=primero;
    
    bool flag=false;
    while((p=strtok(NULL,s2))!=NULL) {
    	
		if (flag==false){
			operador = *p;
			comienzo=new Nodo(primero,operador);
			actual=comienzo;
			flag=true;
		} 
		else{
       		operador=*p;
			actual->set_siguiente(new Nodo(segundo,operador));
			actual=actual->get_siguiente();
		}
		
		p = strtok(NULL, s2);
       	if(p) segundo=atoi(p);
       	else break;
		switch(operador)
	{
		case '+':
			resultado = resultado+segundo;
			break;
		case '-':
			resultado = resultado-segundo;
			break;
		default:
			cout<<"Codigo en proceso";
			break;
	}

   }
   
	actual->set_siguiente(new Nodo(segundo,operador));
	actual=actual->get_siguiente();
	comienzo->show_Expresion(comienzo);
	cout<<resultado<<endl;
	
	return 0;
};
