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
   // CORREÇÃO: Alterado para long double para maior precisão no Nível Mestre
   long double quantidadeDeHabitantesCarta1, quantidadeDeHabitantesCarta2;

   //Variavel que armazena a area da cidade escolhida
   float areaCarta1, areaCarta2;

   
   //Variavel que armazena o produto interno bruto(PIB) da cidade
   float produtoInternoBrutoCarta1, produtoInternoBrutoCarta2;

   //Quantidade de pontos turisticos da cidade
   int quantidadesPontosTuristicosCarta1, quantidadesPontosTuristicosCarta2;

    // Variáveis Calculadas (Declaração sem inicialização)
    long double produtoInternoBrutoPerCapitaCarta1, produtoInternoBrutoPerCapitaCarta2;
    long double densidadePopulacionalCarta1, densidadePopulacionalCarta2;
    long double superPoderCarta1, superPoderCarta2;


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
   // CORREÇÃO: Usando %Lf para ler long double
   scanf("%Lf", &quantidadeDeHabitantesCarta1);

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
   // CORREÇÃO: Usando %Lf para ler long double
   scanf("%Lf", &quantidadeDeHabitantesCarta2);

   //Solicitacao para que o usuario digite a area da cidade em km²
   printf("\nArea da cidade em km².\nEnvie aqui ");
   scanf("%f", &areaCarta2);

   //Solicitacao para que o usuario digite o produto interno bruto(PIB)
   printf("\nProduto Interno Bruto da cidade %s.\nEnvie aqui: ", nomeDaCidadeCarta2);
   scanf("%f", &produtoInternoBrutoCarta2);

   
   //Solicitacao para que o usuario digite a quantidade de pontos turisticos
   printf("\nQuantidade de pontos turisticos.\nEnvie aqui: ");
   scanf("%d",&quantidadesPontosTuristicosCarta2);

  // Área para cálculo dos dados (Local correto)

   //Variavel que armazena e calcula o (PIB) "Produto Interno Bruto" da carta 1
  produtoInternoBrutoPerCapitaCarta1 = (long double) produtoInternoBrutoCarta1/quantidadeDeHabitantesCarta1;

   //Variavel que armazena e calcula o (PIB) "Produto Interno Bruto" da carta 2
  produtoInternoBrutoPerCapitaCarta2 = (long double) produtoInternoBrutoCarta2/quantidadeDeHabitantesCarta2;

  //Variavel que armazena e calcula a densidade populacional da carta 1
  densidadePopulacionalCarta1 = (long double) quantidadeDeHabitantesCarta1 / areaCarta1;

  //Variavel que armazena e calcula a densidade populacional da carta 2
  densidadePopulacionalCarta2 = (long double) quantidadeDeHabitantesCarta2 / areaCarta2;

  // CORREÇÃO: Variável auxiliar para o Inverso da Densidade
  long double inversoDensidade1 = (densidadePopulacionalCarta1 > 0) ? (1.0L / densidadePopulacionalCarta1) : 0.0L;

  //Variavel responsavel pelo calculo do super poder da carta 1
  superPoderCarta1 =
  (long double) quantidadeDeHabitantesCarta1 + 
  (long double) areaCarta1 +
  (long double) produtoInternoBrutoCarta1 +
  (long double) quantidadesPontosTuristicosCarta1 +
  (long double) produtoInternoBrutoPerCapitaCarta1 +
  inversoDensidade1; // CORREÇÃO: Usando o INVERSO da densidade (1/Densidade)

  // CORREÇÃO: Variável auxiliar para o Inverso da Densidade
  long double inversoDensidade2 = (densidadePopulacionalCarta2 > 0) ? (1.0L / densidadePopulacionalCarta2) : 0.0L;

  //Variavel responsavel pelo calculo do super poder da carta 2
  superPoderCarta2 =
  (long double) quantidadeDeHabitantesCarta2 + 
  (long double) areaCarta2 +
  (long double) produtoInternoBrutoCarta2 +
  (long double) quantidadesPontosTuristicosCarta2 +
  (long double) produtoInternoBrutoPerCapitaCarta2 +
  inversoDensidade2; // CORREÇÃO: Usando o INVERSO da densidade (1/Densidade)


  //Exibicao de dados inseridos pelo usuario para a carta 1
   
   printf("\nCarta1:\n");

   printf("\nEstado: %s", estadoCarta1);

   printf("\nCodigo da carta: %s", codigoCarta1);

   printf("\nCidade: %s", nomeDaCidadeCarta1);

   // CORREÇÃO: Usando %Lf para exibir long double
   printf("\nPopulacao: %.0Lf", quantidadeDeHabitantesCarta1);

   printf("\nArea: %.2fkm²", areaCarta1);

   printf("\nPIB: %.2f", produtoInternoBrutoCarta1);

   printf("\nQuantidade de pontos turisticos: %d",quantidadesPontosTuristicosCarta1);

   // CORREÇÃO: Usando %Lf para exibir long double
   printf("\nDensidade Populacional: %.2Lf", densidadePopulacionalCarta1);

   printf("\nPib per Capita: %.2Lf\n",produtoInternoBrutoPerCapitaCarta1); // CORREÇÃO: Usando variável correta

   printf("\nSuper poder: %.2Lf", superPoderCarta1 );


   //Exibicao de dados inseridos pelo usuario para a carta 2

   printf("\nCarta2:\n");

   printf("\nEstado: %s", estadoCarta2);

   printf("\nCodigo da carta: %s", codigoCarta2);

   printf("\nCidade: %s", nomeDaCidadeCarta2);

   // CORREÇÃO: Usando %Lf para exibir long double
   printf("\nPopulacao: %.0Lf", quantidadeDeHabitantesCarta2);

   printf("\nArea: %.2fkm²", areaCarta2);

   printf("\nPIB: %.2f", produtoInternoBrutoCarta2);

   printf("\nQuantidade de pontos turisticos: %d",quantidadesPontosTuristicosCarta2);

   // CORREÇÃO: Usando %Lf para exibir long double
   printf("\nDensidade Populacional: %.2Lf", densidadePopulacionalCarta2);

   printf("\nPib per Capita: %.2Lf\n",produtoInternoBrutoPerCapitaCarta2); // CORREÇÃO: Usando variável correta

   printf("\nSuper poder: %.2Lf", superPoderCarta2);

   

   //Exibição da comparacao das cartas ditadas pelo usuario

      /*Print que realiza a comparacao das variaveis que armazenam dados acerca das  cartas 1 e 2,
    com um operador ternario para definir o vencedor entre tal comparacao, resultando em 1 (verdadeiro)
    e 0 (falso), caso a comparacao seja falsa o item apos o simbolo "?" sera executada se nao o item apos 
    o simbolo ":" sera executado.
   */

   printf("\n------COMPARACAO DE PONTUACAO (1=C1 vence, 0=C2 vence)------\n");


  //E comparado e validado qual carta possui a maior quantidade de habitantes.
  // CORREÇÃO: O MAIOR vence, e adicionado o formato (1) ou (0)
   int pop_vence = (quantidadeDeHabitantesCarta1 > quantidadeDeHabitantesCarta2);
   printf("Poulacao: %s venceu (%d)\n", pop_vence ? "Carta 1" : "Carta 2", pop_vence);

  //E comparado e validado qual carta possui a maior area.
  // CORREÇÃO: O MAIOR vence, e adicionado o formato (1) ou (0)
   int area_vence = (areaCarta1 > areaCarta2);
   printf("Area: %s venceu (%d)\n", area_vence ? "Carta 1" : "Carta 2", area_vence);

  //E comparado e validado qual carta possui a maior PIB.
  // CORREÇÃO: O MAIOR vence, e adicionado o formato (1) ou (0)
  int pib_vence = (produtoInternoBrutoCarta1 > produtoInternoBrutoCarta2);
  printf("PIB: %s venceu (%d)\n", pib_vence ? "Carta 1" : "Carta 2", pib_vence);

  //E comparado e validado qual carta possui a maior quantidade de pontos turisticos.
  // CORREÇÃO: O MAIOR vence, e adicionado o formato (1) ou (0)
  int pt_vence = (quantidadesPontosTuristicosCarta1 > quantidadesPontosTuristicosCarta2);
  printf("Pontos Turisticos: %s venceu (%d)\n", pt_vence ? "Carta 1" : "Carta 2", pt_vence);

  //E comparado e validado qual carta possui a maior densidade populacional.
  // CORREÇÃO: O MENOR vence (<) e adicionado o formato (1) ou (0)
  int densidade_vence = (densidadePopulacionalCarta1 < densidadePopulacionalCarta2);
  printf("Densidade Populacional: %s venceu (%d)\n", densidade_vence ? "Carta 1" : "Carta 2", densidade_vence);

  //E comparado e validado qual carta possui a maior PIB per capita.
  // CORREÇÃO: O MAIOR vence e adicionado o formato (1) ou (0)
  int pib_pc_vence = (produtoInternoBrutoPerCapitaCarta1 > produtoInternoBrutoPerCapitaCarta2);
  printf("Pib per Capita: %s venceu (%d)\n", pib_pc_vence ? "Carta 1" : "Carta 2", pib_pc_vence);

  //E comparado e validado qual carta possui o "Super Poder" mais alto.
  // CORREÇÃO: O MAIOR vence e usa a variável correta (superPoder)
  int sp_vence = (superPoderCarta1 > superPoderCarta2);
  printf("Super poder: %s venceu (%d)\n", sp_vence ? "Carta 1" : "Carta 2", sp_vence);

return 0;
}