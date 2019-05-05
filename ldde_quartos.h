#ifndef LDDE_QUARTOS_H
#define LDDE_QUARTOS_H
#include <iostream>
#include "No.h"

using namespace std;

class LDDE{

    private:
        No* primeiro;
        No* ultimo;
        int n;
    public:
        LDDE(): primeiro(NULL), ultimo(NULL), n(0){
        }
    bool insere(int valor){
            No* novo = new No(valor);
            if(!novo)
                return false;
            No* ptrAnterior = NULL;
            No* ptrAtual = primeiro;

            while(ptrAtual && ptrAtual -> valor < valor){
                ptrAnterior = ptrAtual;
                ptrAtual = ptrAtual -> proximo;
            }
            novo -> anterior = ptrAnterior;
            if(ptrAnterior){
                ptrAnterior -> proximo = novo;
            }
            else{
                primeiro = novo;
            }
            novo -> proximo = ptrAtual;
            if(ptrAtual){
                ptrAtual -> anterior = novo;
            }
            else{
                ultimo = novo;
            }
            n++;
            return true;
        }

        void imprime(){
            No* ptr = primeiro;
            while(ptr){
                cout << ptr -> valor << " ";
                ptr = ptr -> proximo;
            }
            cout << endl;
        }

        bool remove(int valor){
            No* ptrAtual = primeiro;
            while(ptrAtual && ptrAtual-> valor < valor){
                ptrAtual = ptrAtual -> proximo;
            }
            if(!ptrAtual || ptrAtual -> valor != valor){
                return false;
            }
            No* ptrAnterior = ptrAtual -> anterior;
            No* ptrProximo = ptrAtual -> proximo;

            if(ptrAnterior)
                ptrAnterior -> proximo = ptrProximo;
            else
                primeiro = ptrProximo;
            if(ptrProximo)
                ptrProximo -> anterior = ptrAnterior;
            else
                ultimo = ptrAnterior;
            delete ptrAtual;
            n--;
            return true;
        }

        No* busca(int x){
            No* ptrAtual = primeiro;
            while(ptrAtual && ptrAtual-> valor < x)
                ptrAtual = ptrAtual->proximo;
            if(ptrAtual && ptrAtual->valor == x)
                return ptrAtual;

        return NULL;
    }
};


#endif

