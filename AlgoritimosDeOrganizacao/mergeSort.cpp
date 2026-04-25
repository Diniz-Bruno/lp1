#include<array>
#include "header.h"


void merge(int arr[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1; // Tamanho do sub-array esquerdo
    int n2 = fim - meio;        // Tamanho do sub-array direito

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários
    for (int i = 0; i < n1; i++) L[i] = arr[inicio + i];
    for (int j = 0; j < n2; j++) R[j] = arr[meio + 1 + j];

    // Índices iniciais dos sub-arrays
    int i = 0, j = 0, k = inicio;

    // Compara e junta de volta no array original
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
} 

void mergeSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        // 1. Encontra o meio
        int meio = inicio + (fim - inicio) / 2;

        // 2. Chama a si mesma para a metade da esquerda
        mergeSort(arr, inicio, meio);

        // 3. Chama a si mesma para a metade da direita
        mergeSort(arr, meio + 1, fim);

        // 4. Aqui entra a parte do 'merge' (que junta tudo de volta ordenado)
        merge(arr, inicio, meio, fim);
    }
}