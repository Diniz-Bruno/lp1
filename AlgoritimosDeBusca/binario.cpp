#include <array>
#include "header.h"

int pegador(int arr[], int tamanho,int alvo){
    int inicio=0, fim=tamanho-1, meio=(inicio+fim)/2;
        while (inicio <= fim) { 
            if (arr[meio] == alvo){
                return meio;
            }else if(arr[meio] < alvo){
                inicio = meio + 1;
            }else{
                fim = meio - 1;
            }
            meio = (inicio + fim) / 2;
        }
        return -1;

} 