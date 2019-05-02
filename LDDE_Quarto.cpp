#include "LDDE.hpp"
#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    LDDE<float> l;
    l.insere(2.5);
    l.insere(0);
    l.insere(1);
    l.insere(3);
    l.insere(4);
    l.insere(5);
    l.imprime();
    l.remove(5);
    l.imprime();
 	cout << l.busca(5)->valor << endl;
    
    
	system("pause");
	return 0;
}
