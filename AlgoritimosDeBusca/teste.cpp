#include<iostream>
#include "header.h"
using namespace std;

int main(void){
    int tamanho=10;
    int arryDesordenado[10]={10,9,8,7,6,5,4,3,2,1};
    int arryOrdenado[10]={1,2,3,4,5,7,8,9,10,11};
    cout<<pegador(arryOrdenado,tamanho,6)<<endl;

    return 0;
}