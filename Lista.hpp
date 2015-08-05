#pragma once
#include "Nodo.hpp"

class Lista{
	Nodo* head;
public:
	Lista();
	Lista(Nodo*);
	~Lista();
	void insert(int, int);
 	int find(int);
 	int get(int);
 	void deleteElement(int);
 	void print();
 	int first();
 	int last();
 	int getSize();
};