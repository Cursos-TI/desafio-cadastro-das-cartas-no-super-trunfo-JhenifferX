//Desafio Cartas Super Trunfo
//Autor: JHeniffer Xavier De Oliveira
//13/04/2025

//Instruções

#include <stdio.h>

int main(){

  //Declarando Variáveis

  char carta1;
  char estado;
  char codigo;
  char nomedacidade;
  int populacao;
  float area;
  float pib;
  int numerosdepontosturisticos;


  // Inicializando as variáveis

  printf("Digite o estado: \n");
  scanf("%s", &estado);


  printf("Digite o código: \n");
  scanf("%s", &codigo);
  

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nomedacidade);


  printf("Digite a população: \n");
  scanf("%d", &populacao);

  printf("Digite a área: (em km²)\n");
  scanf("%f", &area);

  printf("Digite o PIB: (em bilhões de reias)\n");
  scanf("%f", &pib);

  printf("Digite o números de pontos turísticos: \n");
  scanf("%d" , &numerosdepontosturisticos);

  printf("Estado: %d");
  printf("Código: %s");
  printf("Nome Da Cidade: %s");
  printf("População: %d");


// B
// A01
// Salvador
// 14850513
//559.957
// 115.9
// 13


return 0;

}