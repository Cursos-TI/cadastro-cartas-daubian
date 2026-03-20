#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  /* =============================================
       Variáveis para a Carta 1 - Fortaleza
       ============================================= */
       char estado1 = 'C';
       char codigo1[] = "AO1";
       char cidade1[]= "Fortaleza";
       int populacao1 = 4000000;
       float area1 = 1340.11;
       float pib1 = 599.28;
       int pontos_turisticos1 = 50;
       float densidade_populacional1;
       float pib_per_capita1;

       /* =============================================
       Variáveis para a Carta 2 - Salvador
       ============================================= */
       char estado2 = 'C';
       char codigo2[] = "A02";
       char cidade2[]= "Salvador";
       int populacao2 = 2000000;
       float area2 = 1520.30;
       float pib2 = 379.40;
       int pontos_turisticos2 = 40;
       float densidade_populacional2;
       float pib_per_capita2;

       /* =============================================
       Cálculos das Cartas
       ============================================= */
       densidade_populacional1 = populacao1 / area1;
       pib_per_capita1 = (pib1 * 1000000000) / populacao1;

       densidade_populacional2 = populacao2 / area2;
       pib_per_capita2 = (pib2 * 1000000000) / populacao2;


       /* =============================================
       Exibição dos dados das cartas cadastradas
       ============================================= */
       printf("====================================\n");
       printf("   SUPER TRUNFO - Cartas Cadastradas\n");
       printf("====================================\n\n");

       printf("Carta1:\n");
       printf("Estado: %c\n", estado1);
       printf("codigo: %s\n", codigo1);
       printf("Nome da Cidade: %s\n", cidade1);
       printf("Populacao: %d\n", populacao1);
       printf("Area: %.2f km²\n", area1);
       printf("PIB: %.2f bilhões de reais\n", pib1);
       printf("Numero de pontos Turísticos: %d\n", pontos_turisticos1);

       printf("\nCarta2:\n");
       printf("Estado: %c\n", estado2);
       printf("codigo: %s\n", codigo2);
       printf("Nome da Cidade: %s\n", cidade2);
       printf("Populacao: %d\n", populacao2);
       printf("Area: %.2f\n", area2);
       printf("Pib: %.2f\n", pib2);
       printf("Numero de pontos Turísticos: %d\n", pontos_turisticos2);

       printf("\n========================================\n");
       printf("   Fim do cadastro!\n");
       printf("========================================\n");

return 0;
} 