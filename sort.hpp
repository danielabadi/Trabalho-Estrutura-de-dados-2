#include "planetas.hpp"
void merge(Planeta* planetas[], int esquerda, int meio, int direita){
	int tamanho_subvetor_1 = meio - esquerda + 1;
	int tamanho_subvetor_2 = direita - meio;
	
	Planeta* vetor_esquerda[tamanho_subvetor_1];
	Planeta* vetor_direita[tamanho_subvetor_2];
	
	int auxiliar;
	for(auxiliar = 0; auxiliar < tamanho_subvetor_1; auxiliar++){
		vetor_esquerda[auxiliar] = planetas[esquerda + auxiliar];
	}
	
	for(auxiliar = 0; auxiliar < tamanho_subvetor_2; auxiliar++){
		vetor_direita[auxiliar] = planetas[meio + 1 + auxiliar];
	}
	
	int i = 0;
	int j = 0;
	auxiliar = esquerda;
	
	while (i < tamanho_subvetor_1 && j < tamanho_subvetor_2){ 
        if (vetor_esquerda[i]->tempo <= vetor_direita[j]->tempo){ 
            planetas[auxiliar] = vetor_esquerda[i]; 
            i++; 
        } 
        else{ 
            planetas[auxiliar] = vetor_direita[j];
            j++; 
        } 
        auxiliar++; 
    }
	
	while (i < tamanho_subvetor_1){ 
		planetas[auxiliar] = vetor_esquerda[i];
		i++; 
		auxiliar++; 
	}
	
	while (j < tamanho_subvetor_2){ 
		planetas[auxiliar] = vetor_direita[j];
		j++; 
		auxiliar++; 
	}
}

void mergeSort(Planeta* planetas[], int esquerda, int direita){
	if(esquerda < direita){
		int meio = esquerda + (direita - esquerda)/2;
		mergeSort(planetas, esquerda, meio);
		mergeSort(planetas, meio + 1, direita);
		
		merge(planetas, esquerda, meio, direita);
	}
}