#include<iostream>
#include "header.h"

using namespace std;

int main(void){
    int arryDesordenado[10]={10,9,8,7,6,5,4,3,2,1};
    int tamanho=10;
    //organizador(arryDesordenado,tamanho);
    mergeSort(arryDesordenado,0,tamanho-1);


    for(int i:arryDesordenado){
        if(i==arryDesordenado[tamanho-1]){
            cout<< i;
        }
        else{
            cout<<i<<'-';
        }
    }
    cout<<endl;
    return 0;
}