#include "nomes.hpp"



void FLVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}



void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++){
		cout << l->vet[i].val << endl ;
	    
	}
}
///////////////////////comparatção de variavel 
void Tocompare(Lista *l){
    for (int i=l->first ;i<=l->last; i++ ){
		for(int j =1;j<=l->last;j++){
			if(l->vet[i].val==l->vet[i+j].val){
				l->vet[i+j].val= "\0";
  			}
		}		
	}
}
///////////////////////////////
void Read_arch(Lista *l) {
	ifstream arq;
	Item aux;
	string n;
	arq.open("Lista_nomes.txt");
	if(arq.is_open()){
		while(!arq.eof()){
			getline(arq, n);
			aux.val=n;
			LInsert(l, aux);
		}
	}
}		




