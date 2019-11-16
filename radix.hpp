#include "planetas.hpp"
void radix(Planeta *planetas[],int inicio, int fim_vetor, int numero_planetas, int tamanho_nome){
	Planeta* temp[numero_planetas];
    for(int i = tamanho_nome - 1; i >= 0; i--)
    {
        int count[27] = {0};
        for(int j = inicio; j < fim_vetor; j++)
            count[static_cast<int>(planetas[j]->nome[i]) - 96]++;
		
        for(int j = 2; j < 26; j++)
            count[j] += count[j - 1];
		
        for(int j = inicio; j < fim_vetor; j++)
            temp[inicio + count[static_cast<int>(planetas[j]->nome[i]) - 97]++] = planetas[j];

        for(int j = inicio; j < fim_vetor; j++)
			planetas[j] = temp[j];

	}
}