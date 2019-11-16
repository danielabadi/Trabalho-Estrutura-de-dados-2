#include "sort.hpp"
#include "radix.hpp"

int main(){
	int tempo_mes;
	int numero_planetas;
	int tamanho_nome;
	
	std::cin >> tempo_mes >> numero_planetas >> tamanho_nome;
	
	Planeta* planetas[numero_planetas];
	
	int contador = 0;
	while(contador < numero_planetas){
		planetas[contador] = new Planeta;
		std::cin >> planetas[contador]->tempo;
		std::cin >> planetas[contador]->nome;
		contador = contador + 1;
	}
	
	mergeSort(planetas, 0, numero_planetas-1);
	
	contador = 0;
	int auxiliar_tempo_mes = tempo_mes;
	int contador_mes = 1;
	int inicio_vetor = 0;
	while(contador < numero_planetas){
		if(auxiliar_tempo_mes - planetas[contador]->tempo >= 0){
			auxiliar_tempo_mes = auxiliar_tempo_mes - planetas[contador]->tempo;
			planetas[contador]->mes = contador_mes;
			contador = contador + 1;
		} else {
			radix(planetas, inicio_vetor, contador, numero_planetas, tamanho_nome);
			inicio_vetor = contador;
			contador_mes = contador_mes + 1;
			auxiliar_tempo_mes = tempo_mes;
			
		}
	}
	
	radix(planetas, inicio_vetor, contador, numero_planetas, tamanho_nome);

	contador = 0;
	while(contador < numero_planetas){
		std::cout << planetas[contador]->mes << " " << planetas[contador]->nome << " " << planetas[contador]->tempo << std::endl;
		contador = contador + 1;
	}
	
	contador = 0;
	while(contador < numero_planetas){
		delete planetas[contador];
		contador = contador + 1;
	}
	return 0;
}