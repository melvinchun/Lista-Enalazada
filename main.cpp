#include "Lista.cpp"
#include "Nodo.cpp"
#include <cstddef>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	try{
		Lista lista=Lista();
		lista.insert(5,0);
		lista.insert(2,0);
		lista.insert(3,1);
		lista.insert(3,1);
		lista.print();
		cout<<"Se busco 3 y se encontro en la posicion "<<lista.find(3)<<endl;
		cout<<"Se busco en la posicion 2 y se encontro el elemento "<<lista.get(2)<<endl;
		cout<<"Se busco el primer elemento "<<lista.first()<<endl;
		cout<<"Se busco el ultimo elemento "<<lista.last()<<endl;
		cout<<"El tamaño es de  "<<lista.getSize()<<endl;
	}catch(char const* e){
		cout<<e<<endl;
	}	
	return 0;
}