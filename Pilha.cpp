#include <iostream>
#define tamanho 5
using namespace std;


typedef struct{
      int topo = 0;
      int item [tamanho] ;
} PILHA;

bool pilhaVazia(PILHA p){
    if(p.topo == 0) {
        return true;
    } else {
        return false;
    }
}

bool pilhaCheia(PILHA p) {
	int tam = sizeof(p.item)/sizeof(int); 
	
    if (p.topo < tam) {
        return false;
    } else {
        return true;
    }
}

void empilha(PILHA &p, int x){
    p.item[p.topo++]=x;
}

int desempilha(PILHA &p){
    return (p.item[--p.topo]) ;
}

void mostraPilha(PILHA p) {
	cout << "Valores da pilha: ";
	for (int i = 0; i < p.topo; i++) {
		cout << p.item[i] << " ";
	}
	cout << "\n";
}

int main(){
    PILHA s; //criar a pilha
    
    if(pilhaVazia(s)) {
        cout<<"A pilha está vazia."<<endl;
    } else {
        cout<<"A pilha não está vazia."<<endl;
    }
    

    empilha(s,10);
    if(pilhaVazia(s)) {
        cout<<"A pilha está vazia."<<endl;
    } else {
        cout<<"A pilha não está vazia."<<endl;
    }
    
    empilha(s,20);
    empilha(s,30);
    empilha(s,40);

    mostraPilha(s);
    
    if(pilhaCheia(s)) {
        cout<<"A pilha está cheia."<<endl;
    } else {
        cout<<"A pilha não está cheia."<<endl;
    }
    
    empilha(s,50);
    mostraPilha(s);
    if(pilhaCheia(s)) {
        cout<<"A pilha está cheia."<<endl;
    } else {
        cout<<"A pilha não está cheia."<<endl;
    }
    
    cout<<"Valor desempilhado: "<< desempilha(s) <<endl;

	mostraPilha(s);
	
    return 0;
}
