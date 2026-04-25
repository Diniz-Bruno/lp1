#include <array>
#include "header.h"

int pegador(int arr[], int tamanho,int alvo){
    for(int i=0;i<=tamanho;i++){
        if(alvo==arr[i]){
            return i;
        }
    }
    return -1;

}