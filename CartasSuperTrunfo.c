#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int CodCidade, populacao, area, npturisticos;
    //IDENTIFICAÇÃO CodCidade= Código da Cidade, npturisticos= Número de pontos turísticos.
    char cidade[20];
    float PIB;     
    //FIM DA DEFINIÇÃO DE VARIAVEIS

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Olá, seja bem vindo ao desafio, insira por favor o nome da cidade \n");
    scanf("%s", &cidade);
    //FIM DA CHAMADA PARA DEFINIÇÃO DA CIDADE

    printf("Defina por favor a população da sua cidade \n");
    scanf("%d", &populacao);
    printf("Defina por favor a area da sua cidade \n");
    scanf("%d", &area);
    printf("Defina por favor a Número de pontos turísticos da sua cidade \n");
    scanf("%d", &npturisticos);
    //FIM DA CHAMADA PARA DEFINIÇÃO DOS NÚMEROS DA CIDADE

    printf("Informe o PIB da sua cidade \n");
    scanf("%f", &PIB);
    //FIM DA CHAMADA PARA DEFINIÇÃO DO PIB FLOAT
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Sua cidade é: %s - Com total de %d habitantes \n", cidade, populacao);
    printf("O PIB de %s é de %f, com área de %d \n", cidade, PIB, area);
    printf("%s tem um total de %d pontos turísticos \n", cidade, npturisticos);
    //FIM DA CHAMADA PARA INFORMAÇÕES, CIDADE, POPULAÇÃO, PIB, AREA E PONTOS TURÍSTICOS

    return 0;
}
