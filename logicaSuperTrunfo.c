
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Variáveis para a carta 1
    char estado1[50];
    char cidade1[50];
    char codigo1[50];
    unsigned int populacao1;
    int pontos1;
    float area1;
    float pib1;
   
    //Variáveis para a carta 2
    char estado2[50];
    char cidade2[50];
    char codigo2[50];
    unsigned int populacao2;
    int pontos2;
    float area2;
    float pib2;

   //ENTRADA DE DADOS DA CARTA 1
    printf("PREENCHA AS INFORMAÇÕES DAS SUAS CARTAS \n");
    printf("-----CARTA 1----- \n" );
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código da carta:");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População:");
    scanf("%u", &populacao1);
    printf("Aréa (km²):");
    scanf("%f", &area1);
    printf("PIB:");
    scanf("%f", &pib1);
    printf("Pontos Turisticos:");
    scanf("%d", &pontos1);
    

    //ENTRADA DE DADOS DA CARTA 2
    printf("-----CARTA 2----- \n" );
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código da carta:");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População:");
    scanf("%u", &populacao2);
    printf("Aréa (km²):");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos:");
    scanf("%d", &pontos2);
   
    
    //VARIAVEIS DEPOIS DA ENTRADA DOS DADOS 
    float pib_per_capita1 = pib1 / populacao1;
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita2 = pib2 / populacao2;
    float densidade_populacional2 = populacao2 / area2 ;

    //ARMAZENAMENTO SUPER TRUNFO - SOMA DO RESULTADO DE CADA CARTA

int super_trunfo1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1;
int super_trunfo2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2;


    //EXIBIÇÃO DAS CARTAS CADASTRADAS
    printf("----CARTAS CADASTRADAS----\n\n");
    
    //CARTA 1

  printf("****CARTA 1****\n\n");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %u\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional:  %.2f hab/km²\n" , densidade_populacional1 );
  printf("PIB PER CAPITA:  %.2f Reais\n\n" , pib_per_capita1 );
  printf("SUPER TRUNFO: %u /n" , super_trunfo1);


  //CARTA 2

  printf("****CARTA 2****\n\n");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %u\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n" , densidade_populacional2 );
  printf("PIB PER CAPITA:  %.2f Reais\n" , pib_per_capita2 );
  printf("SUPER TRUNFO: %u \n" , super_trunfo2);




//COMPARAÇÃO DAS CARTAS - DEFININDO O VENCEDOR COM ESTRUTURA DE DECISÃO

 printf("\n======COMPARAÇÃO DAS CARTAS======\n");
 
 printf("\nATRIBUTO: POPULAÇÃO\n");
 printf("\nCidade 1 %s : %u \n" , cidade1 , populacao1);
 printf("Cidade 2 %s  : %u \n" , cidade2 ,populacao2);

if (populacao1 > populacao2) {
  printf("Cidade 1 tem maior população.\n");
  } else {
  printf("Cidade 2 tem maior população.\n");
  }

  printf("\nATRIBUTO: ÁREA\n");
 printf("\nCidade 1 %s : %f \n" , cidade1 , area1);
 printf("Cidade 2 %s  : %f \n" , cidade2 ,area2);

if (area1 > area2) {
  printf("Cidade 1 tem maior área.\n");
  } else {
  printf("Cidade 2 tem maior área.\n");
  }

  printf("\nATRIBUTO: PIB\n");
 printf("\nCidade 1 %s : %f \n" , cidade1 , pib1);
 printf("Cidade 2 %s  : %f \n" , cidade2 ,pib2);

if (pib1 > pib2) {
  printf("Cidade 1 tem maior PIB.\n");
  } else {
  printf("Cidade 2 tem maior PIB.\n");
  }
printf("\nATRIBUTO: Pontos Turisticos\n");
 printf("\nCidade 1 %s : %d \n" , cidade1 , pontos1);
 printf("Cidade 2 %s  : %d \n" , cidade2 ,pontos2);

if (pontos1 > pontos2) {
  printf("Cidade 1 tem maior pontos turisticos.\n");
  } else {
  printf("Cidade 2 tem maior pontos turisticos.\n");
  }    

printf("\nATRIBUTO: Densidade Populacional\n");
 printf("\nCidade 1 %s : %.2f \n" , cidade1 , densidade_populacional1);
 printf("Cidade 2 %s  : %.2f \n" , cidade2 , densidade_populacional2);

if (densidade_populacional1 < densidade_populacional2) {
  printf("Cidade 1 tem menor Densidade Popupacional.\n");
  } else {
  printf("Cidade 2 tem menor Densidade Populacional.\n");
  }  

printf("\nATRIBUTO: PIP PER CAPITA \n");
 printf("\nCidade 1 %s : %.2f \n" , cidade1 , pib_per_capita1);
 printf("Cidade 2 %s  : %.2f \n" , cidade2 , pib_per_capita2);

if (pib_per_capita1 > pib_per_capita2) {
  printf("Cidade 1 tem maior PIB PER CAPITA.\n");
  } else {
  printf("Cidade 2 tem maior PIB PER CAPITA.\n");
  }
        
  printf("\nATRIBUTO: SUPER TRUFO\n");
 printf("\nCidade 1 %s : %f \n" , cidade1 , super_trunfo1);
 printf("Cidade 2 %s  : %f \n" , cidade2 , super_trunfo2);

if (super_trunfo1 > super_trunfo2) {
  printf("Cidade 1 GANHOU NO SUPER TRUFO.\n");
  } else {
  printf("Cidade 2 GANHOU NO SUPER TRUFO.\n");
  }

return 0;
}  

  

   

   
 
    
   

  

    
