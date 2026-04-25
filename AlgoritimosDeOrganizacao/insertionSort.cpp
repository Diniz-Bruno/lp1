#include<array>

#include "header.h"

void organizador(int arr[],int tamanho){
    for (int i = 1; i < tamanho; i++) {
        int numeroQcolocara = arr[i]; 
        int posiçaoAnterior = i - 1;
        
        while (posiçaoAnterior >= 0 && arr[posiçaoAnterior] > numeroQcolocara) {
            arr[posiçaoAnterior + 1] = arr[posiçaoAnterior]; 
            posiçaoAnterior--;                 
        }
        arr[posiçaoAnterior + 1] = numeroQcolocara;
    }
}
