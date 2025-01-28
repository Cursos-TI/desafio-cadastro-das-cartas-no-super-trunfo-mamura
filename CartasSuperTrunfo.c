#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//Função para calcular o padding de cada linha:
void printWithPadding(const char* label, const char* value) {
    int labelLen = strlen(label);
    int valueLen = strlen(value);
    int totalLen = labelLen + valueLen;
    int padding = 39 - totalLen;  // Calcula quantos espaços são necessários
    
    printf("%s%s", label, value);
    
    for (int i = 0; i < padding; i++) {
        printf(" ");
    }

    printf("#\n");
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codCidade[3];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    char buffer[100];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("######################################################\n");
    printf("##### Cadastro de cartas - SUPER TRUNFO CIDADES' #####\n");
    printf("######################################################\n\n");
    
    printf("## INSIRA OS DADO DA NOVA CARTA (CIDADE):\n");
    printf("# Código: ");
    scanf("%s", &codCidade);
    printf("\n");

    printf("# Nome: ");
    scanf("%s", &nome);
    printf("\n");

    printf("# População: ");
    scanf("%d", &populacao);
    printf("\n");

    printf("# Área: ");
    scanf("%f", &area);
    printf("\n");

    printf("# PIB: ");
    scanf("%f", &pib);
    printf("\n");

    printf("# Quantidade de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //CABEÇALHO DA CARTA
    printf("########################################\n");
    printf("######### SUPER TRUNFO CIDADES' ########\n");
    printf("########################################\n");
    snprintf(buffer, sizeof(buffer), "%s", codCidade);
    printWithPadding("# CODIGO - ", codCidade);
    printWithPadding("# NOME - ", nome);

    snprintf(buffer, sizeof(buffer), "%d", populacao);
    printWithPadding("# POPULACAO - ", buffer);

    snprintf(buffer, sizeof(buffer), "%.2f", area);
    printWithPadding("# AREA - ", buffer);

    snprintf(buffer, sizeof(buffer), "%.2f", pib);
    printWithPadding("# PIB - ", buffer);

    snprintf(buffer, sizeof(buffer), "%d", numPontosTuristicos);
    printWithPadding("# PONTOS TURISTICOS - ", buffer);
    printf("########################################\n");
    printf("########################################\n");


    return 0;
}

