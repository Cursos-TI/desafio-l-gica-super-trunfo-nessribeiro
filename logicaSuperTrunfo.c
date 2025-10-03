#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado1[20], Estado2[20];
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("************************************************\n");
    printf("Olá! Seja bem vinda(o) ao Super Trunfo - Cidades \n");
    printf("************************************************\n");

    //Recebendo as informações da primeira carta
    printf("Digite a categoria do Estado (A a H): \n");
    scanf("%s", Estado1);
    
    printf("Digite o código da carta: (primeira letra + dois digitos de 01 a 04)\n");
    scanf("%s", codigoCarta1);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Insira o número populacional: \n");
    scanf("%i", &populacao1);

    printf("Insira a área desta cidade em km: \n");
    scanf("%f", &area1);
    
    printf("Insira o PIB: \n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turisticos que essa cidade tem: \n");
    scanf("%i", &pontosTuristicos1);

    //Recebendo as informações da segunda carta
    printf("Agora insira os dados da 2ª Carta \n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado2);
    
    printf("Digite o código da carta: (primeira letra + dois digitos de 01 a 04)\n");
    scanf("%s", codigoCarta2);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Insira o número populacional: \n");
    scanf("%i", &populacao2);

    printf("Insira a área desta cidade em km: \n");
    scanf("%f", &area2);
    
    printf("Insira o PIB: \n");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turisticos que essa cidade tem: \n");
    scanf("%i", &pontosTuristicos2);

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("Agora iremos comparar a densidade populacional para ver quem vence \n");
    if (densidadePopulacao1 < densidadePopulacao2) {
        printf("%.2f (carta1) vs %.2f (carta2)\n", densidadePopulacao1, densidadePopulacao2);
        printf("Resultado: A carta 1 ganhou!");
        printf("A cidade vencedora é: %s", nomeCidade1);
    } else if (densidadePopulacao1 == densidadePopulacao2) {
        printf("%.2f (carta1) vs %.2f (carta2)\n", densidadePopulacao1, densidadePopulacao2);
        printf("Resultado: Houve empate.");
    } else {
        printf("%.2f (carta1) vs %.2f (carta2)\n", densidadePopulacao1, densidadePopulacao2);
        printf("Resultado: A carta 2 ganhou!");
        printf("A cidade vencedora é: %s", nomeCidade2);
    }

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
     
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
