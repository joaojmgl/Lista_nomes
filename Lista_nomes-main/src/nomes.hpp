#ifndef LISTA_H 
#define LISTA_H
#include <fstream>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <iostream>
#include <string>
using namespace std;

#define MAXTAM 100

typedef struct Item{
	string val;
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int to_compere;
	int first;
	int last;
	string Names;
}Lista;


void FLVazia(Lista *l);
void LInsert(Lista *l, Item d);
void LImprime(Lista *l);
void Tocompare(Lista *l);
void Read_arch(Lista *l);

#endif