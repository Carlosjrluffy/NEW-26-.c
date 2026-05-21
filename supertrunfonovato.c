  #include <stdio.h>

int main(){


    char estado1, estado2;
    char codigo1[5], nome1[20], codigo2[5], nome2[20];
    int populacao1, pt1, populacao2, pt2;
    float area1, pib1, area2, pib2;

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

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Area: %f km\n",area1);
    printf("Pib: %f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pt1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Area: %f km\n",area2);
    printf("Pib: %f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pt2);

    return 0;


}

  

