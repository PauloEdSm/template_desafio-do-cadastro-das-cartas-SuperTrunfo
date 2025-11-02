
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Variavel que armazena a sigla do estado escolhido
   char estadoCarta1 [3], estadoCarta2 [3];

   //Variavel que armazena o codigo para identificacao da carta
   char codigoCarta1[5], codigoCarta2[5];   

   //Variavel que armazena o nome da cidade
   char nomeDaCidadeCarta1[30], nomeDaCidadeCarta2[30];
   
   //Variavel que armazena a quantidade de habitantes da cidade 
   int quantidadeDeHabitantesCarta1, quantidadeDeHabitantesCarta2;

   //Variavel que armazena a area da cidade escolhida
   float areaCarta1, areaCarta2;

   
   //Variavel que armazena o produto interno bruto(PIB) da cidade
   float produtoInternoBrutoCarta1, produtoInternoBrutoCarta2;

   //Quantidade de pontos turisticos da cidade
   int quantidadesPontosTuristicosCarta1, quantidadesPontosTuristicosCarta2;

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


  //Solicitacao para que o usuario digite a quantidade de pontos turisticos
  printf("\nQuantidade de pontos turisticos.\nEnvie aqui: ");
  scanf("%d",&quantidadesPontosTuristicosCarta1);

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

   
   //Solicitacao para que o usuario digite a quantidade de pontos turisticos
   printf("\nQuantidade de pontos turisticos.\nEnvie aqui: ");
   scanf("%d",&quantidadesPontosTuristicosCarta2);

  // Área para exibição dos dados da cidade

  //Exibicao de dados inseridos pelo usuario para a carta 1
   
   printf("\nCarta1:\n");

   printf("\nEstado: %s", estadoCarta1);

   printf("\nCodigo da carta: %s", codigoCarta1);

   printf("\nCidade: %s", nomeDaCidadeCarta1);

   printf("\nPopulacao: %d", quantidadeDeHabitantesCarta1);

   printf("\nArea: %.2fkm²", areaCarta1);

   printf("\nPIB: %.2f", produtoInternoBrutoCarta1);

   printf("\nQuantidade de pontos turisticos: %d",quantidadesPontosTuristicosCarta1);

   printf("\nDensidade Populacional: %.2f", quantidadeDeHabitantesCarta1/areaCarta1);

   printf("\nPib per Capita: %.2f\n",(float) produtoInternoBrutoCarta1/quantidadeDeHabitantesCarta1);


   //Exibicao de dados inseridos pelo usuario para a carta 2

   printf("\nCarta2:\n");

   printf("\nEstado: %s", estadoCarta2);

   printf("\nCodigo da carta: %s", codigoCarta2);

   printf("\nCidade: %s", nomeDaCidadeCarta2);

   printf("\nPopulacao: %d", quantidadeDeHabitantesCarta2);

   printf("\nArea: %.2fkm²", areaCarta2);

   printf("\nPIB: %.2f", produtoInternoBrutoCarta2);

   printf("\nQuantidade de pontos turisticos: %d",quantidadesPontosTuristicosCarta2);

   printf("\nDensidade Populacional: %.2f", quantidadeDeHabitantesCarta2/areaCarta2);

   printf("\nPib per Capita: %.2f\n",(float) produtoInternoBrutoCarta2/quantidadeDeHabitantesCarta2);


return 0;
} 