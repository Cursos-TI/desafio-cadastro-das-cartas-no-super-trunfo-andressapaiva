#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n"); //inicializando o jogo
    printf("Começaremos com o cadastro das cartas!\n");

    
        int populacao, pontos_turisticos; //criando as variáveis    
        float area;
        float pib;
        char cidade[20], estado[20];
        int resp;

        printf("Insira o Estado: \n"); //coletando os dados do usuário
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



        printf("\nDados da Carta:\n"); //mostrando ao usuário os dados cadastrados
        printf("Estado: %s \n", estado);
        printf("Cidade: %s \n", cidade);
        printf("População: %d \n", populacao);
        printf("Área: %f \n", area);
        printf("PIB: %f \n", pib);
        printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);


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
