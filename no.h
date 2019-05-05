#ifndef NO_H
#define NO_H
class No{
    public:
        int valor;
        No* proximo;
        No* anterior;
        No(int valor): valor(valor), proximo(NULL), anterior(NULL){
        }
};
#endif // NO_H
