#include <stdio.h>

int main() {

  int P01, T02;
  int populacao1, populacao2;
  float Area1, Area2;
  float PIB1, PIB2; 
  int Pontosturisticos1, Pontosturisticos2;
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



  // Área para exibição dos dados da cidade
     printf("\n--- Carta 1 Cadastrada ---\n");
     printf("População: %d\n", populacao1);
     printf("Area: %.2f km²\n", Area1);
     printf("PIB: %.2f bilhões\n", PIB1);
     printf("Pontos Turísticos: %d\n", Pontosturisticos1);

     printf("\n--- Carta 2 Cadastrada ---\n");
     printf("População: %d\n", populacao2);
     printf("Area: %.2f km²\n", Area2);
     printf("PIB: %.2f bilhões\n", PIB2);
     printf("Pontos Turísticos: %d\n", Pontosturisticos2);

return 0;
} 
