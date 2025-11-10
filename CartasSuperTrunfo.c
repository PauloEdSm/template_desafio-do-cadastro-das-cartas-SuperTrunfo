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
   scanf(" %d", &quantidadeDeHabitantesCarta1);

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
   scanf(" %d", &quantidadeDeHabitantesCarta2);

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

   //Variavel que armazena e calcula o (PIB) "Produto Interno Bruto" per Capita da carta 1
   produtoInternoBrutoPerCapitaCarta1 = (long double) produtoInternoBrutoCarta1/quantidadeDeHabitantesCarta1;

   //Variavel que armazena e calcula o (PIB) "Produto Interno Bruto per Capita" da carta 2
  produtoInternoBrutoPerCapitaCarta2 = (long double) produtoInternoBrutoCarta2/quantidadeDeHabitantesCarta2;

  //Variavel que armazena e calcula a densidade populacional da carta 1
  densidadePopulacionalCarta1 = (long double) quantidadeDeHabitantesCarta1 / areaCarta1;

  //Variavel que armazena e calcula a densidade populacional da carta 2
  densidadePopulacionalCarta2 = (long double) quantidadeDeHabitantesCarta2 / areaCarta2;

  // Variável auxiliar para o Inverso da Densidade
  long double inversoDensidade1 = (densidadePopulacionalCarta1 > 0) ? (1.0L / densidadePopulacionalCarta1) : 0.0L;

  //Variavel responsavel pelo calculo do super poder da carta 1
  superPoderCarta1 =
  (long double) quantidadeDeHabitantesCarta1 + 
  (long double) areaCarta1 +
  (long double) produtoInternoBrutoCarta1 +
  (long double) quantidadesPontosTuristicosCarta1 +
  (long double) produtoInternoBrutoPerCapitaCarta1 +
  inversoDensidade1; // CORREÇÃO: Usando o INVERSO da densidade (1/Densidade)

  //Variável auxiliar para o Inverso da Densidade
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

   printf("\nPopulacao: %d", quantidadeDeHabitantesCarta1);

   printf("\nArea: %.2fkm²", areaCarta1);

   printf("\nPIB: %.2f", produtoInternoBrutoCarta1);

   printf("\nQuantidade de pontos turisticos: %d",quantidadesPontosTuristicosCarta1);

   // CORREÇÃO: Usando %Lf para exibir long double
   printf("\nDensidade Populacional: %.2Lf", densidadePopulacionalCarta1);

   printf("\nPib per Capita: %.2Lf",produtoInternoBrutoPerCapitaCarta1); // CORREÇÃO: Usando variável correta

   printf("\nSuper poder: %.2Lf\n", superPoderCarta1 );


   //Exibicao de dados inseridos pelo usuario para a carta 2

   printf("\nCarta2:\n");

   printf("\nEstado: %s", estadoCarta2);

   printf("\nCodigo da carta: %s", codigoCarta2);

   printf("\nCidade: %s", nomeDaCidadeCarta2);

   printf("\nPopulacao: %d", quantidadeDeHabitantesCarta2);

   printf("\nArea: %.2fkm²", areaCarta2);

   printf("\nPIB: %.2f", produtoInternoBrutoCarta2);

   printf("\nQuantidade de pontos turisticos: %d",quantidadesPontosTuristicosCarta2);

   printf("\nDensidade Populacional: %.2Lf", densidadePopulacionalCarta2);

   printf("\nPib per Capita: %.2Lf",produtoInternoBrutoPerCapitaCarta2); // CORREÇÃO: Usando variável correta

   printf("\nSuper poder: %.2Lf\n", superPoderCarta2);

   

   //Exibição da comparacao das cartas ditadas pelo usuario
  //Comparacao feita com if else, em que e determinada qual carta possui o valor mais alto em cada quesito

   printf("\n------ COMPARACAO DE PONTUACAO ------\n");

  //Comparando a "quantidadeDeHabitantesCarta1" com a "quantidadeDeHabitantesCarta2".
  printf("\nPopulacao: ");

  if (quantidadeDeHabitantesCarta1 > quantidadeDeHabitantesCarta2){
    printf("Carta 1 Vence!");
  } else {
    printf("Carta 2 Vence!");
  }
  

  //Comparando a "areaCarta2" com a "areaCarta2".
  printf("\nArea: ");

  if (areaCarta1 > areaCarta2){
    printf("Carta 1 Vence!");
  } else {
    printf("Carta 2 Vence!");
  }


  //Comparando a "produtoInternoBrutoCarta1" com a "produtoInternoBrutoCarta2".
  printf("\nPIB: ");

  if (produtoInternoBrutoCarta1 > produtoInternoBrutoCarta2) {
    printf("Carta 1 Vence!");
  } else {
    printf("Carta 2 Vence!");
  }


  //Comparando a "produtoInternoBrutoCarta1" com a "produtoInternoBrutoCarta2".
  printf("\nNumero de pontos turisticos: ");

   if (quantidadesPontosTuristicosCarta1 > quantidadesPontosTuristicosCarta2){
    printf("Carta 1 Vence!");
  } else {
    printf("Carta 2 Vence!");
  } 

  //Comparando a "densidadePopulacionalCarta1" com a "densidadePopulacionalCarta2".
  printf("\nDensidade populacional: ");

  if (densidadePopulacionalCarta1 > densidadePopulacionalCarta2) { 
    printf("Carta 1 Vence!");
  } else {
    printf("Carta 2 Vence!");
  }  


  //Comparando a "produtoInternoBrutoPerCapitaCarta1" com a "produtoInternoBrutoPerCapitaCarta2".
  printf("\nPib per Capita: ");

  if (produtoInternoBrutoPerCapitaCarta1 > produtoInternoBrutoPerCapitaCarta2){
    printf("Carta 1 Vence!");
  } else {
    printf("Carta 2 Vence!");
  }

  
  //Comparando a "superPoderCarta1" com a "superPoderCarta2".
  printf("\nSuper poder: ");

  if (superPoderCarta1 > superPoderCarta2){
    printf("Carta 1 Vence!");
  } else {
    printf("Carta 2 Vence!");
  }

printf("\nCarta 1 - %s (%s): %Lf" ,nomeDaCidadeCarta1 , estadoCarta1, superPoderCarta1);
printf("Carta 2 - %s (%s): %Lf\n" ,nomeDaCidadeCarta2 , estadoCarta2, superPoderCarta2);

  printf("\n----------------------------------------------------\n");

  printf("Resultado: ");
  
  if (superPoderCarta1 > superPoderCarta2) {
    printf("Carta 1 - %s (%s) venceu!\n\n", nomeDaCidadeCarta1 , estadoCarta1 );
  }else{
    printf("Carta 2 - %s (%s) venceu!\n\n", nomeDaCidadeCarta2 , estadoCarta2 );
  }

return 0;
}