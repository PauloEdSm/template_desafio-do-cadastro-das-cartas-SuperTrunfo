#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Variavel que armazena a sigla do estado escolhido
   char estadoCarta1 [3];
   char estadoCarta2 [3];

   //Variavel que armazena o codigo para identificacao da carta
   char codigoCarta1[5];   
   char codigoCarta2[5];   

   //Variavel que armazena o nome da cidade
   char nomeDaCidadeCarta1[30];
   char nomeDaCidadeCarta2[30];
   
   //Variavel que armazena a quantidade de habitantes da cidade 
   int quantidadeDeHabitantesCarta1;
   int quantidadeDeHabitantesCarta2;

   //Variavel que armazena a area da cidade escolhida
   float areaCarta1;
   float areaCarta2;

   
   //Variavel que armazena o produto interno bruto(PIB) da cidade
   float produtoInternoBrutoCarta1;
   float produtoInternoBrutoCarta2;

   //Quantidade de pontos turisticos da cidade
   int quantidadesPontosTuristicosCarta1;
   int quantidadesPontosTuristicosCarta2;

  // Área para entrada de dados
    //carta 1
  //Solicitacao para que o usuario digite o um estado 

   printf("\nCarta 1:\n");
   printf("Sigla do estado escolhido. \nEnvie aqui:");
   scanf("%s" ,estadoCarta1);

   //Solicitacao para que o usuario digite o um codigo para sua carta
   printf("\nCodigo de forma que seja aparente a sigla do estado e numeracao ex:'ES01'.\nEnvie aqui: ");
   scanf("%s" ,codigoCarta1);

   //Solicitacao para que o usuario digite o nome da cidade 
   printf("\nNome da cidade.\nEnvie aqui: ");
   scanf("%s", nomeDaCidadeCarta1);

   //Solicitacao para que o usuario digite a quantida de habitantes
   printf("\nQuantidade de habitantes.\nEnvie aqui: ");
   scanf("%d", &quantidadeDeHabitantesCarta1);

   //Solicitacao para que o usuario digite a area da cidade em km²
   printf("\nArea da cidade em km².\nEnvie aqui ");
   scanf("%f", &areaCarta1);

   //Solicitacao para que o usuario digite o produto interno bruto(PIB)
   printf("\nProduto Interno Bruto da cidade %s.\nEnvie aqui: ", nomeDaCidadeCarta1);
   scanf("%f", &produtoInternoBrutoCarta1);
  

    //carta 2

   //Solicitacao para que o usuario digite o um estado 
   printf("\nCarta 2:\n");
   printf("\nSigla do estado escolhido. \nEnvie aqui:");
   scanf("%s" ,estadoCarta2);

   //Solicitacao para que o usuario digite o um codigo para sua carta
   printf("\nCodigo de forma que seja aparente a sigla do estado e numeracao ex:'ES01'.\nEnvie aqui: ");
   scanf("%s" ,codigoCarta2);

   //Solicitacao para que o usuario digite o nome da cidade 
   printf("\nNome da cidade.\nEnvie aqui: ");
   scanf("%s", nomeDaCidadeCarta2);

   //Solicitacao para que o usuario digite a quantida de habitantes
   printf("\nQuantidade de habitantes.\nEnvie aqui: ");
   scanf("%d", &quantidadeDeHabitantesCarta2);

   //Solicitacao para que o usuario digite a area da cidade em km²
   printf("\nArea da cidade em km².\nEnvie aqui ");
   scanf("%f", &areaCarta2);

   //Solicitacao para que o usuario digite o produto interno bruto(PIB)
   printf("\nProduto Interno Bruto da cidade %s.\nEnvie aqui: ", nomeDaCidadeCarta2);
   scanf("%f", &produtoInternoBrutoCarta2);

  // Área para exibição dos dados da cidade

  //Exibicao de dados inseridos pelo usuario para a carta 1

   printf("\nQuantidade de pontos turisticos.\nEnvie aqui: ");
   scanf("%d",&quantidadesPontosTuristicosCarta1);
   
   printf("\nCarta1:\n");

   printf("\nEstado: %s", estadoCarta1);

   printf("\nCodigo da carta: %s", codigoCarta1);

   printf("\nCidade: %s", nomeDaCidadeCarta1);

   printf("\nPopulacao: %d", quantidadeDeHabitantesCarta1);

   printf("\nArea: %.2fkm²", areaCarta1);

   printf("\nPIB: %.2f\n", produtoInternoBrutoCarta1);

   
   //Exibicao de dados inseridos pelo usuario para a carta 2

   printf("\nCarta2:\n");

   printf("\nEstado: %s", estadoCarta2);

   printf("\nCodigo da carta: %s", codigoCarta2);

   printf("\nCidade: %s", nomeDaCidadeCarta2);

   printf("\nPopulacao: %d", quantidadeDeHabitantesCarta2);

   printf("\nArea: %.2fkm²", areaCarta2);

   printf("\nPIB: %.2f\n", produtoInternoBrutoCarta2);


return 0;
} 
