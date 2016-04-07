using namespace std;
class Nodo
{
	private:
		int numero;
		char operador;
		Nodo* siguiente;
	public:
		Nodo(int numero, char operador)
		{
			this->numero=numero;
			this->operador=operador;
		    this->siguiente=NULL;
		};
		void set_siguiente(Nodo* sig)
		{
			siguiente=sig;	
		}
		int get_numero()
		{
			return numero;
		}
		char get_operador()
		{
			return operador;
		}
		Nodo* get_siguiente()
		{
			return siguiente;
		}
		void show_Expresion (Nodo* czo)
		{
			Nodo* actual=czo;
			while(actual->siguiente!=NULL)
			{
				cout<<actual->get_numero()<<" "<<actual->get_operador()<<" ";
				actual=actual->get_siguiente();
			}
			cout<<actual->get_numero()<<" ";
			cout<<" = ";
		}
};

