#ifndef LES_USERS_H
#define LES_USERS_H
#include <cstdlib>
#include <iostream>

#define MAX 20
using namespace std;

class LES{
    public:
        int n;
        string user[MAX];
        string password[MAX];

        LES(){
            n=1;
            user[0]="admin";
            password[0] = "1234";
             }


        bool inserePassword(string x){
            if(n==MAX)
                return false;
            password[n]= x;
            return true;
        }
        bool insereUser(string x){
            if(n==MAX)
                return false;
            user[n]= x;
            n++;
            return true;
        }

};

#endif // LES_USERS_H
