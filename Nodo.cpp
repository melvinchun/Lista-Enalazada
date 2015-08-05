#include "Nodo.hpp"
#include <cstddef>

Nodo::Nodo():value(NULL){}

Nodo::Nodo(int initval):value(initval),next(NULL){}

Nodo::Nodo(int initval, Nodo* initnodo):value(initval),next(initnodo){}

Nodo::Nodo(const Nodo& other):value(other.value),next(other.next){}

Nodo::~Nodo(){
	delete next;
}

const int Nodo::getValue()const{
	return value;
}

void Nodo::setNext(Nodo* n){
	//delete next;
	next=n;
}

Nodo* Nodo::getNext()const{
	return next;
}
