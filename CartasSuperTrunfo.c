#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdlib.h>

int main()
{
    
    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n"); //inicializando o jogo
    printf("Começaremos com o cadastro das cartas2!\n");

    
        int populacao, pontos_turisticos; //criando as variáveis    
        float area;
        float pib;
        char cidade[20], estado[20];
        int resp;
        float densidade_populacional;
        float pib_per_capta;
        char id[3];

        printf("Insira o ID da carta: \n"); //coletando os dados da carta do usuário
        scanf("%s", &id);

        printf("Insira o Estado: \n"); //coletando os dados da carta do usuário
        scanf("%s", &estado);

        printf("Insira a cidade: \n");
        scanf("%s", &cidade);

        printf("Insira a população: \n");
        scanf("%d", &populacao);

        printf("Insira a área: \n");
        scanf("%f", &area);

        printf("Insira o PIB: \n");
        scanf("%f", &pib);

        printf("Insira o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos);



        printf("\nDados da Carta:%s \n", id); //mostrando ao usuário os dados cadastrados
        printf("Estado: %s \n", estado);
        printf("Cidade: %s \n", cidade);
        printf("População: %d pessoas\n", populacao);
        printf("Área: %.3f km²\n", area);
        printf("PIB: R$ %.3f\n", pib);
        printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

        densidade_populacional = populacao / area; // calculando a densidade populacional e exibindo
        printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional);

        pib_per_capta = pib / populacao; // calculando o pib per capta e exibindo
        printf("PIB per capta: R$ %.2f \n", pib_per_capta);

        //CADASTRO DA CARTA 02

        int populacao2, pontos_turisticos2; //criando as variáveis    
        float area2;
        float pib2;
        char cidade2[20], estado2[20];
        int resp2;
        float densidade_populacional2;
        float pib_per_capta2;
        char id2[3];

        printf("Insira o ID da carta 02: \n"); //coletando os dados da carta do usuário
        scanf("%s", &id2);

        printf("Insira o Estado: \n"); //coletando os dados da carta do usuário
        scanf("%s", &estado2);

        printf("Insira a cidade: \n");
        scanf("%s", &cidade2);

        printf("Insira a população: \n");
        scanf("%d", &populacao2);

        printf("Insira a área: \n");
        scanf("%f", &area2);

        printf("Insira o PIB: \n");
        scanf("%f", &pib2);

        printf("Insira o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos2);


        printf("\nDados da Carta:%s \n", id2); //mostrando ao usuário os dados cadastrados
        printf("Estado: %s \n", estado2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d pessoas\n", populacao2);
        printf("Área: %.3f km²\n", area2);
        printf("PIB: R$ %.3f\n", pib2);
        printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

        densidade_populacional2 = populacao2 / area2; // calculando a densidade populacional e exibindo
        printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional2);

        pib_per_capta2 = pib2 / populacao2; // calculando o pib per capta e exibindo
        printf("PIB per capta: R$ %.2f \n", pib_per_capta2);

        if (densidade_populacional2 > densidade_populacional)
            printf("A carta A02 ganhou esta batalha.");
        else
            if (densidade_populacional>densidade_populacional2)
            printf("A carta A01 ganhou esta batalha.");

            else
            printf("Esta batalha empatou.");
                 
        
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
