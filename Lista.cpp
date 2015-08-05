#include "lista.hpp"
#include <iostream>
#include <cstddef>

using namespace std;


Lista::Lista():head(NULL){}

Lista::Lista(Nodo* inicial):head(inicial){}

Lista::~Lista(){
	delete head;
}

void Lista::insert(int elem, int pos){
	int cont=0;
	Nodo* temp=head;
	bool agrego=true;
	do{
		if(pos==0 && cont==0 && temp==NULL){
			head=new Nodo(elem);
			agrego=false;
			temp=head;
		}else if(pos==0 && cont==0){
			head=new Nodo(elem,temp);
			agrego=false;
		}else if ((cont+1)==pos){
			Nodo* temp2=temp->getNext();
			temp->setNext(new Nodo(elem,temp2));
			agrego=false;	
		}
		cont++;
		temp=temp->getNext();
	} while (temp!=NULL && agrego);
	if(agrego)
		throw "No se agrego el elemento";
}

int Lista::find(int elem){
	Nodo* temp=head;
	int cont=0;
	bool encontro=true;
	do{
		if(elem==temp->getValue())
			encontro=false;
		temp=temp->getNext();
		cont++;
	} while (temp!=NULL && encontro);
	if(encontro)
		throw "No se encontro el elemento";
	else
		return cont;
}

int Lista::get(int pos){
	int cont=0;
	Nodo* temp=head;
	Nodo* retorno;
	bool encontro=true;
	do{
		if(pos==cont){
			retorno=temp;
			encontro=false;
		}
		cont++;
		temp=temp->getNext();
	} while (temp!=NULL && encontro);
	if(encontro){
		throw "No se encontro el elemento";
	}else{
		return retorno->getValue();
	}
}

void Lista::deleteElement(int){

}

void Lista::print(){
	Nodo* temp=head;
	do{
		if(head==NULL){
			cout<<"No hay elementos"<<endl;
		}else{
			cout<<temp->getValue()<<endl;
			temp=temp->getNext();
		}
	}while(temp!=NULL);
}

int Lista::first(){
	if(head==NULL)
		throw "No hay elementos";
	else
		return head->getValue();
}

int Lista::last(){
	Nodo* temp=head;
	Nodo* temp2;
	do{
		if(head==NULL)
			temp2=NULL;
		else if(temp->getNext()!= NULL)
			temp2=temp->getNext();
		else if(temp->getNext() == NULL)
			temp2=temp;
		temp=temp->getNext();
	}while(temp!=NULL);
	if(temp2==NULL)
		throw "No hay elementos";
	else
		return temp2->getValue();

}

int Lista::getSize(){
	int cont=0;
	Nodo* temp=head;
	do{
		cont++;
		if(head==NULL)
			cont=0;
		temp=temp->getNext();
	}while(temp!=NULL);
	return cont;
}
