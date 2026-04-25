#include"header.h"
#include<array>

void organizador(int arr[],int tamanho){
    bool fezSwap=true;
    do{
        fezSwap=false;
        for (int i = 0; i < tamanho-1; i++){
            if (arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                fezSwap=true;
            }
        }
    }while (fezSwap);
}