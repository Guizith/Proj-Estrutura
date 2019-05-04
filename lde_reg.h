#ifndef LDE_REG_H
#define LDE_REG_H
#include<no_lde.h>

//Em Desenvolvimento pois o nó guardara o anterior, prox e o cliente

class LDE_REG {
public:
    No_lde* primeiro;
    int n;

    void insere(int x) {
        No_lde* novo = new No_lde();
        novo->valor = x;
        No_lde* anterior = nullptr;
        No_lde* proximo = primeiro;

        while (proximo && proximo->valor < x) {
            anterior = proximo;
            proximo = proximo->prox;
        }
        if (anterior) {
            anterior->prox = novo;
            novo->prox = proximo;
            n++;
        } else {
            primeiro = novo;
        }
        novo->prox = proximo;
        n++;
    }


    int busca(No_lde* ch) {
        No_lde* atual = primeiro;
        while (atual) {
            if (ch->valor == atual->valor) {
               return atual->valor;
            }
            atual = atual->prox;
        }
        return 0;
    }

};

#endif // LDE_REG_H
