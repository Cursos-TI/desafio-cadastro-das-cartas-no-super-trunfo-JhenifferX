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

  printf("Estado: %d\n");
  printf("Código: %s\n");
  printf("Nome Da Cidade: %s\n");
  printf("População: %d\n");
  printf("Àrea: %f\n (em km²)");
  printf("PiB: %f\n (em bilhões de reais)");
  printf("Números de Pontos Tuísticos: %d\n");



// B
// A01
// Salvador
// 14850513
//559.957
// 115.9
// 13


return 0;

}