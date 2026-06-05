#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // VARIÁVEIS
  /*  ============================
      Variáveis da Carta 1
      ============================*/
  char card1Estado;
  char card1CodigoCarta[4];
  char card1Cidade[50];
  int card1Populacao;
  float card1Area;
  double card1PIB;
  int card1PontosTuristicos;
  /*  ============================
      Variáveis da Carta 2
      ============================*/
  char card2Estado;
  char card2CodigoCarta[4];
  char card2Cidade[50];
  int card2Populacao;
  float card2Area;
  double card2PIB;
  int card2PontosTuristicos;



  // ENTRADA DOS DADOS
  /* ============================
     Entrada de dados da Carta 1
     ============================*/
  printf("=== Cadastro da Carta 1 ===\n");

  // Entrada do Estado
  printf("Estado:\n");
  scanf("%s", &card1Estado);

  // Entrada do Código da Carta
  printf("Código da carta:\n");
  scanf("%s", card1CodigoCarta);

  // Entrada do Nome da Cidade
  printf("Nome da cidade:\n");
  scanf("%s", card1Cidade);

  // Entrada da População
  printf("População:\n");
  scanf("%d", &card1Populacao);

  // Entrada da Área
  printf("Área (km2):\n");
  scanf("%f", &card1Area);

  // Entrada do PIB
  printf("PIB:\n");
  scanf("%lf", &card1PIB);

  // Entrada dos Pontos Turísticos
  printf("Núm. de pontos turísticos:\n");
  scanf("%d", &card1PontosTuristicos);


  /* ============================
     Entrada de dados da Carta 2
     ============================*/
  printf("=== Cadastro da Carta 2 ===\n");

  // Entrada do Estado
  printf("Estado:\n");
  scanf("%s", &card2Estado);

  // Entrada do Código da Carta
  printf("Código da carta:\n");
  scanf("%s", card2CodigoCarta);

  // Entrada do Nome da Cidade
  printf("Nome da cidade:\n");
  scanf("%s", card2Cidade);

  // Entrada da População
  printf("População:\n");
  scanf("%d", &card2Populacao);

  // Entrada da Área
  printf("Área (km2):\n");
  scanf("%f", &card2Area);

  // Entrada do PIB
  printf("PIB:\n");
  scanf("%lf", &card2PIB);

  // Entrada dos Pontos Turísticos
  printf("Núm. de pontos turísticos:\n");
  scanf("%d", &card2PontosTuristicos);



  // SAÍDA DOS DADOS
  /*  =====================
       Exibição da Carta 1
      =====================*/
  printf("=============================\n");
  printf("           CARTA 1           \n");
  printf("=============================\n");
  printf("Estado: %c\n", card1Estado);
  printf("Código: %s\n", card1CodigoCarta);
  printf("Nome da Cidade: %s\n", card1Cidade);
  printf("População: %d\n", card1Populacao);
  printf("Área: %.2f\n", card1Area);
  printf("PIB: %.2f\n", card1PIB);
  printf("Núm. de Pontos Turísticos: %d\n", card1PontosTuristicos);
  printf("\n\n");
  /*  =====================
       Exibição da Carta 2
      =====================*/
  printf("=============================\n");
  printf("           CARTA 2           \n");
  printf("=============================\n");
  printf("Estado: %c\n", card2Estado);
  printf("Código: %s\n", card2CodigoCarta);
  printf("Nome da Cidade: %s\n", card2Cidade);
  printf("População: %d\n", card2Populacao);
  printf("Área: %.2f\n", card2Area);
  printf("PIB: %.2f\n", card2PIB);
  printf("Núm. de Pontos Turísticos: %d\n", card2PontosTuristicos);

  // RETORNO DA FUNÇÃO
  return 0;
} 
