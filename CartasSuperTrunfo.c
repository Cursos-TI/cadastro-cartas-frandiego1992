#include <stdio.h>

int main() {

  int P01, T02;
  int populacao1, populacao2;
  float Area1, Area2;
  float PIB1, PIB2; 
  int Pontosturisticos1, Pontosturisticos2;
  float Densidade_populacional1, Densidade_populacional2;
  float PIB_per_capita1, PIB_per_capita2;
  float Super_Poder_P01, Super_PoderT02;

// P01 - PARA, T02 - TOCANTINS;

     // CARTA 01 , P01;
     printf("populacao1:\n");
     scanf("%d", &populacao1);
     

     printf("Area1:\n");
     scanf("%f", &Area1);

     printf("PIB1:\n");
     scanf("%f", &PIB1);
    

     printf("pontosturisticos1:");
     scanf("%d", &Pontosturisticos1);
     
     // CARTA 02, T02:

     printf("populacao2:\n");
     scanf("%d", &populacao2);
     

     printf("Area2:\n");
     scanf("%f", &Area2);

     printf("PIB2:\n");
     scanf("%f", &PIB2);
    

     printf("pontosturisticos2:");
     scanf("%d", &Pontosturisticos2);

  // calculo da carta P01;
  Densidade_populacional1 = (float) populacao1 / Area1;
  PIB_per_capita1 = PIB1 / (float)populacao1;
  Super_Poder_P01 = populacao1 + Area1 + PIB1 + PIB_per_capita1 + Pontosturisticos1 + (1.0f/ Densidade_populacional1);


  //calculo da carta T02;
   Densidade_populacional2 = (float) populacao2 / Area2;
  PIB_per_capita2 = PIB2 / (float)populacao2;
  Super_PoderT02 = populacao2 + Area2 + PIB2 + PIB_per_capita2 + Pontosturisticos2 + (1.0f/ Densidade_populacional2);


  // Área para exibição dos dados da cidade
     printf("\n--- Carta 1 Cadastrada ---\n");
     printf("População: %d\n", populacao1);
     printf("Area: %.2f km²\n", Area1);
     printf("PIB: %.2f bilhões\n", PIB1);
     printf("Pontos Turísticos: %d\n", Pontosturisticos1);
     printf("densidade populacional:%.2f hab/km \n", Densidade_populacional1);
     printf("PIB por Capita: R$ %.2f\n", PIB_per_capita1);
     printf("Super Poder: %.2f\n", Super_Poder_P01);

     printf("\n--- Carta 2 Cadastrada ---\n");
     printf("População: %d\n", populacao2);
     printf("Area: %.2f km²\n", Area2);
     printf("PIB: %.2f bilhões\n", PIB2);
     printf("Pontos Turísticos: %d\n", Pontosturisticos2);
     printf("densidade populacional:%.2f hab/km \n", Densidade_populacional2);
     printf("PIB por Capita: R$ %.2f\n", PIB_per_capita2);
     printf("Super Poder: %.2f\n", Super_PoderT02);

     // Comparação das cartas

     printf("-----RESULTADO DA COMPARAÇÃO\n");

     // Atributo 1 (maior vence)
     printf("População:\n");
     printf("Carta 01 vence: %d\n", (populacao1 > populacao2));
     printf("Carta 02 vence %d\n", (populacao1 < populacao2));

     // Atributo 2 (maior vence)
     printf("Area:\n");
     printf("Carta 01 vence: %d\n", (Area1 > Area2));
     printf("Carta 02 vence %d\n", (Area1 < Area2));

     // Atributo 3 (maior vence)
     printf("PIB:\n");
     printf("Carta 01 vence: %d\n", (PIB1 > PIB2) );
     printf("Carta 02 vence: %d\n", (PIB1 < PIB2) );


     // Atributo 4 (maior vence)
     printf("Pontos Turisticos\n");
     printf("Carta 01 vence: %d\n", (Pontosturisticos1 > Pontosturisticos2) );
     printf("Carta 02 vence: %d\n", (Pontosturisticos1 < Pontosturisticos2) );
     
     // Atributo 5 (menor vence)
     printf("Densidade:\n");
     printf("Carta 01 vence: %d\n", (Densidade_populacional1 < Densidade_populacional2));
     printf("Carta 02 vence: %d\n", (Densidade_populacional1 > Densidade_populacional2));

     // Atributo 6 ( maior vence)
     printf("Pib_per_capita:\n");
     printf("Carta 01 vence: %d\n", (PIB_per_capita1 > PIB_per_capita2) );
     printf("Carta 02 vence: %d\n", (PIB_per_capita1 < PIB_per_capita2) );

     // Atributo 7 (maior vence)

     printf("Super_Poder:\n");
     printf("Carta 01 vence: %d\n", (Super_Poder_P01 > Super_PoderT02) );
     printf("Carta 02 vence: %d\n", (Super_Poder_P01 < Super_PoderT02) );

     





     

return 0;
} 