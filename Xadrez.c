//Desafio Cartas Super Trunfo
//Autor: JHeniffer Xavier De Oliveira
//13/04/2025

//Instruções

#include <stdio.h>

int main(){

  //Declarando Variáveis

  char carta2;
  char estado;
  char codigo;
  char nomedacidade;
  int populacao;
  float area;
  float pib;
  int numerosdepontosturisticos;


  // Inicializando as variáveis

  printf("Digite o estado ");
  scanf("%s", &estado);
  // Resposta - B

  printf("Digite o código: ");
  scanf("%s", &codigo);
  // Resposta - A01

  printf("Digite o nome da cidade: ");
  scanf("%s", &nomedacidade);


  printf("Digite a população: ");
  scanf("%d", &populacao);

  printf("Digite a área (em km²)");
  scanf("%f", &area);

  printf("Digite o PIB (em bilhões de reias)");
  scanf("%f", &pib);

  printf("Digite o números de pontos turísticos: ");
  scanf("%d" , &numerosdepontosturisticos);

// B
// A01
// Salvador
// 14850513
//559.957
// 115.9
// 13


return 0;

}