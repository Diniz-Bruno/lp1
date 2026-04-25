#include<array>

#include "header.h"

void organizador(int arr[],int tamanho){
    for(int i = 0; i < tamanho-1; i++){
        int menorValor=i;
        for (int j= i+1; j <tamanho; j++){
            if(arr[menorValor]>arr[j]){
                menorValor=j;
            }
        } 
        if (menorValor != i){
                int temp=arr[i];
                arr[i]=arr[menorValor];
                arr[menorValor]=temp;
            }
    }
}