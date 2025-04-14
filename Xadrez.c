//Desafio Cartas Super Trunfo
//Autor: JHeniffer Xavier De Oliveira
//13/04/2025

//Instruções

#include <stdio.h>

int main(){

  //Declarando Variáveis

  char carta1[10];
  char estado[20];
  char codigo[10];
  char nomedacidade[50];
  int populacao;
  float area;
  float pib;
  int numerosdepontosturisticos;


  // Inicializando as variáveis

  printf("Digite o estado: ");
  scanf("%s", &estado);


  printf("Digite o código: ");
  scanf("%s", &codigo);
  

  printf("Digite o nome da cidade: ");
  scanf("%s", &nomedacidade);


  printf("Digite a população: ");
  scanf("%d", &populacao);

  printf("Digite a área: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o números de pontos turísticos: ");
  scanf("%d" , &numerosdepontosturisticos);

  // Exibindo os dados fornecidos

  printf("Carta1: %s\n", carta1);
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome Da Cidade: %s\n", nomedacidade);
  printf("População: %d\n", populacao);
  printf("Àrea: %.2f km²\n", area);
  printf("PiB: %.2f bilhões de reais\n", pib);
  printf("Números de Pontos Tuísticos: %d\n", numerosdepontosturisticos);

// Para Carta 1

// BA
// A01
// Salvador
// 14850513
// 559.957
// 115.9
// 13

//Para a Carta 2

//TO
//B02
//Palmas
// 1.577.342
// 277.423,62 km²
// 3 080,4
// 7

 // Carta 1 e 2 criada com sucesso.
 // OBS: Ao tentar escrever a outra carta separadamente o programa n\ roda.


return 0;

}