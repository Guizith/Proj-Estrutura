#include <iostream>
#include <cstdlib>
#include <iostream>
#define MAX 10

using namespace std;


class Fila{
 public:
  int i;
  int f;
  int v[MAX];

  Fila(): i(0), f(0){}
  bool enfileira(int x){

   if( ((f+1) % MAX) == i  ){
    return false;
   }else{
    v[f] = x;
    f = (f+1) % MAX;  // sempre que o numero estiver antes do %, vai ser sempre o proprio numero
    return true;
   }
  }

  bool desenfileira(int *x = NULL){ //FIFO
   if(i==f)
    return false;
   if(x!=NULL)
    *x = v[i];
   i = (i+1) % MAX;
   return true;

  }

  void imprime(){
   int x;
   for(x = i; (x+1) % MAX != f; x++){
	cout << v[x] << " ";
   }
   cout << endl;
  }

};

