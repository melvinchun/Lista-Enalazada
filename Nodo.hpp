#pragma once

class Nodo{
	int value;
	Nodo* next;
public:
	Nodo();
	Nodo(int);
	Nodo(int, Nodo*);
	Nodo(const Nodo&);
	~Nodo();
	const int getValue()const;
	void setNext(Nodo*); 
	Nodo* getNext()const;
};