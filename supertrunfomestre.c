#include <stdio.h>

int main(){


    char estado1, estado2;
    char codigo1[5], nome1[20], codigo2[5], nome2[20];
    int populacao1, pt1, populacao2, pt2;
    float area1, pib1, dp1, ppc1, area2, pib2, dp2, ppc2;
    float sp1,sp2;
    int Rpopulação, Rarea, Rpib, Rpt, Rdensidade, Rppc, Rsuper;
    

    //desafio super trunfo nivel novato
    //será feito apenas o cadastro das cartas e suas caracteristicas
    
    printf("Estado : \n");
    scanf("%c", &estado1);

    printf("Codigo: \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &nome1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Area: \n");
    scanf("%f", &area1);

    printf("Pib: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pt1);

    //Separação de colhimento de dados das cartas
    
    printf("\nEstado : \n");
    scanf(" %c", &estado2);

    printf("Codigo: \n");
    scanf("%s", &codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", &nome2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("Pib: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pt2);

    dp1= (populacao1/area1);
    dp2= (populacao2/area2);
    ppc1= (pib1/populacao1);
    ppc2= (pib2/populacao2);
    sp1=(populacao1+area1+pib1+pt1+ppc1-dp1);
    sp2=(populacao2+area2+pib2+pt2+ppc2-dp2);
    Rpopulação = (populacao1>populacao2);
    Rarea = (area1>area2);
    Rpib = (pib1>pib2);
    Rpt = (pt1>pt2);
    Rdensidade = (dp1>dp2);
    Rppc = (ppc1>ppc2);
    Rsuper = (sp1>sp2);

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Area: %f km\n",area1);
    printf("Pib: %f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pt1);
    printf("Densidade populacional: %f\n",dp1);
    printf("Pib per capita: %f\n", ppc1);
    printf("Super poder: %.2f\n", sp1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Area: %f km\n",area2);
    printf("Pib: %f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pt2);
    printf("Densidade populacional: %f\n",dp2);
    printf("Pib per capita: %f\n", ppc2);
    printf("Super poder: %.2f\n", sp2);

    //impressão da impressão dos resultados por atributos
    printf("\n*** Duelo ***\n");
    printf("Quando o resulto for 1 a carta 1 será a vitoriosa e quando o resultado for 0 a carta 2 ganhará...\n");
    printf("População: %d\n", Rpopulação);
    printf("Area: %d\n", Rarea);
    printf("Pib: %d\n", Rpib);
    printf("Pontos turisticos: %d\n", Rpt);
    printf("Densidade populacional: %d\n", Rdensidade);
    printf("Pib per capita: %d\n", Rppc);
    printf("Super poder: %d\n", Rsuper);


    return 0;




}
