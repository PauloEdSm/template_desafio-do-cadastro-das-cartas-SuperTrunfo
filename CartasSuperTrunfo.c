#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    long float pontosTotais1, pontosTotais2;
    //Variavel que armazena a escolha dos atributos,que ha de ser comparado entre as cartas
    int atributoEscolhido1,atributoEscolhido2 ;

    //Variavel que armazena a sigla do estado escolhido
   char paisCarta1 [3], paisCarta2 [3];

   //Variavel que armazena o codigo para identificacao da carta
   char codigoCarta1[5], codigoCarta2[5];   

   //Variavel que armazena o nome da cidade
   char nomeDoPaisCarta1[30], nomeDoPaisCarta2[30];
   
   //Variavel que armazena a quantidade de habitantes da cidade 
   int quantidadeDeHabitantesCarta1, quantidadeDeHabitantesCarta2;

   //Variavel que armazena a area da cidade escolhida
   float areaCarta1, areaCarta2;
   
   //Variavel que armazena o produto interno bruto(PIB) da cidade
   float produtoInternoBrutoCarta1, produtoInternoBrutoCarta2;

   //Quantidade de pontos turisticos da cidade
   int quantidadeDePontosTuristicosCarta1, quantidadeDePontosTuristicosCarta2;

    // Variáveis Calculadas (Declaração sem inicialização)
    long double produtoInternoBrutoPerCapitaCarta1, produtoInternoBrutoPerCapitaCarta2;
    long double densidadePopulacionalCarta1, densidadePopulacionalCarta2;
    long double superPoderCarta1, superPoderCarta2;


  // Área para entrada de dados

    //carta 1
  //Solicitacao para que o usuario digite o um estado 

   printf("\nCarta 1:\n");
   printf("Sigla do estado escolhido. \nEnvie aqui:");
   scanf("%s" ,paisCarta1);

   //Solicitacao para que o usuario digite o um codigo para sua carta
   printf("\nCodigo de forma que seja aparente a sigla do estado e numeracao ex:'ES01'.\nEnvie aqui: ");
   scanf("%s" ,codigoCarta1);

   //Solicitacao para que o usuario digite o nome da cidade 
   printf("\nNome da cidade.\nEnvie aqui: ");
   scanf("%s", nomeDoPaisCarta1);

   //Solicitacao para que o usuario digite a quantida de habitantes
   printf("\nQuantidade de habitantes.\nEnvie aqui: ");
   scanf(" %d", &quantidadeDeHabitantesCarta1);

   //Solicitacao para que o usuario digite a area da cidade em km²
   printf("\nArea da cidade em km².\nEnvie aqui ");
   scanf("%f", &areaCarta1);

   //Solicitacao para que o usuario digite o produto interno bruto(PIB)
   printf("\nProduto Interno Bruto da cidade %s.\nEnvie aqui: ", nomeDoPaisCarta1);
   scanf("%f", &produtoInternoBrutoCarta1);


  //Solicitacao para que o usuario digite a quantidade de pontos turisticos
  printf("\nQuantidade de pontos turisticos.\nEnvie aqui: ");
  scanf("%d",&quantidadeDePontosTuristicosCarta1);

    //carta 2

   //Solicitacao para que o usuario digite o um estado 
   printf("\nCarta 2:\n");
   printf("\nSigla do estado escolhido. \nEnvie aqui:");
   scanf("%s" ,paisCarta2);

   //Solicitacao para que o usuario digite o um codigo para sua carta
   printf("\nCodigo de forma que seja aparente a sigla do estado e numeracao ex:'ES01'.\nEnvie aqui: ");
   scanf("%s" ,codigoCarta2);

   //Solicitacao para que o usuario digite o nome da cidade 
   printf("\nNome da cidade.\nEnvie aqui: ");
   scanf("%s", nomeDoPaisCarta2);

   //Solicitacao para que o usuario digite a quantida de habitantes
   printf("\nQuantidade de habitantes.\nEnvie aqui: ");
   scanf(" %d", &quantidadeDeHabitantesCarta2);

   //Solicitacao para que o usuario digite a area da cidade em km²
   printf("\nArea da cidade em km².\nEnvie aqui ");
   scanf("%f", &areaCarta2);

   //Solicitacao para que o usuario digite o produto interno bruto(PIB)
   printf("\nProduto Interno Bruto da cidade %s.\nEnvie aqui: ", nomeDoPaisCarta2);
   scanf("%f", &produtoInternoBrutoCarta2);

   
   //Solicitacao para que o usuario digite a quantidade de pontos turisticos
   printf("\nQuantidade de pontos turisticos.\nEnvie aqui: ");
   scanf("%d",&quantidadeDePontosTuristicosCarta2);

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
  (long double) quantidadeDePontosTuristicosCarta1 +
  (long double) produtoInternoBrutoPerCapitaCarta1 +
  inversoDensidade1; // CORREÇÃO: Usando o INVERSO da densidade (1/Densidade)

  //Variável auxiliar para o Inverso da Densidade
  long double inversoDensidade2 = (densidadePopulacionalCarta2 > 0) ? (1.0L / densidadePopulacionalCarta2) : 0.0L;

  //Variavel responsavel pelo calculo do super poder da carta 2
  superPoderCarta2 =
  (long double) quantidadeDeHabitantesCarta2 + 
  (long double) areaCarta2 +
  (long double) produtoInternoBrutoCarta2 +
  (long double) quantidadeDePontosTuristicosCarta2 +
  (long double) produtoInternoBrutoPerCapitaCarta2 +
  inversoDensidade2; // CORREÇÃO: Usando o INVERSO da densidade (1/Densidade)


  //Exibicao de dados inseridos pelo usuario para a carta 1
   
   printf("\nCarta1:\n");

   printf("\nEstado: %s", paisCarta1);

   printf("\nCodigo da carta: %s", codigoCarta1);

   printf("\nCidade: %s", nomeDoPaisCarta1);

   printf("\nPopulacao: %d", quantidadeDeHabitantesCarta1);

   printf("\nArea: %.2fkm²", areaCarta1);

   printf("\nPIB: %.2f", produtoInternoBrutoCarta1);

   printf("\nQuantidade de pontos turisticos: %d",quantidadeDePontosTuristicosCarta1);

   // CORREÇÃO: Usando %Lf para exibir long double
   printf("\nDensidade Populacional: %.2Lf", densidadePopulacionalCarta1);

   printf("\nPib per Capita: %.2Lf",produtoInternoBrutoPerCapitaCarta1); // CORREÇÃO: Usando variável correta

   printf("\nSuper poder: %.2Lf\n", superPoderCarta1 );


   //Exibicao de dados inseridos pelo usuario para a carta 2

   printf("\nCarta2:\n");

   printf("\nEstado: %s", paisCarta2);

   printf("\nCodigo da carta: %s", codigoCarta2);

   printf("\nCidade: %s", nomeDoPaisCarta2);

   printf("\nPopulacao: %d", quantidadeDeHabitantesCarta2);

   printf("\nArea: %.2fkm²", areaCarta2);

   printf("\nPIB: %.2f", produtoInternoBrutoCarta2);

   printf("\nQuantidade de pontos turisticos: %d",quantidadeDePontosTuristicosCarta2);

   printf("\nDensidade Populacional: %.2Lf", densidadePopulacionalCarta2);

   printf("\nPib per Capita: %.2Lf",produtoInternoBrutoPerCapitaCarta2); // CORREÇÃO: Usando variável correta

   printf("\nSuper poder: %.2Lf\n", superPoderCarta2);


  printf("\nCarta 1 - %s (%s): %Lf" ,nomeDoPaisCarta1 , paisCarta1, superPoderCarta1);
  printf("Carta 2 - %s (%s): %Lf\n" ,nomeDoPaisCarta2 , paisCarta2, superPoderCarta2);

  //Digitando o primeiro atributo escolhido
  printf("\nEscolha o atributo para comparar as cartas (Digite o numero correspondente): \n");
  printf("----------------------------------------------------\n");
  printf(
    "1 - População \n 2 - Area \n 3 - PIB \n 4-  Numero de Pontos Turisticos \n 5 - Densidade Demografica "
  );
    printf("->");
  
    printf("%s\n%s\n%s\n%s\n" , 
    (atributoEscolhido1 == 1) ? "1 - População" : "2 - Area"  ,
    (atributoEscolhido1 == 2 ) ? "2 - Area" : "1 - População"  , 
    (atributoEscolhido1 == 3) ? "3 - PIB" : "2 - Area", 
    (atributoEscolhido1 == 4) ? "4-  Numero de Pontos Turisticos" : "5 - Densidade Demografica "
    );
    printf("->");
    scanf("%d", &atributoEscolhido1);


  
  printf("\n----------------------------------------------------\n");

  printf("Resultado: "); 
  //Comparando o primeiro atributo escolhido
  
  switch (atributoEscolhido1 )
  {
  //Comparando a "quantidadeDeHabitantesCarta1" com a "quantidadeDeHabitantesCarta2".
  case 1:
    if (quantidadeDeHabitantesCarta1 == quantidadeDeHabitantesCarta2) {
      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);

    }else if (quantidadeDeHabitantesCarta1 > quantidadeDeHabitantesCarta2) {
    
      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (quantidadeDeHabitantesCarta1 < quantidadeDeHabitantesCarta2) {
    
    printf("Vencedor: %s", nomeDoPaisCarta2);

    }
    break;

      //Comparando "areaCarta1" com a "areaCarta2"
    case 2: 
    if (areaCarta1 == areaCarta2){

      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);
    
    }else if (areaCarta1 > areaCarta2) {

      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (areaCarta1 < areaCarta2)
    {

    printf("Vencedor: %s", nomeDoPaisCarta2);
    
    }
    break;
  
    //Comparando "produtoInternoBrutoCarta1" com a "produtoInternoBrutoCarta1"
  case 3: 
    if (produtoInternoBrutoCarta1== produtoInternoBrutoCarta2){

      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);
    
    }else if (produtoInternoBrutoCarta1 > produtoInternoBrutoCarta2) {

      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (produtoInternoBrutoCarta1 < produtoInternoBrutoCarta2)
    {

    printf("Vencedor: %s", nomeDoPaisCarta2);
    
    }
    break;

  //Comparando a "quantidadeDePontosTuristicosCarta1quantidade" com a "quantidadeDePontosTuristicosCarta1"
  case 4: 
    if (quantidadeDePontosTuristicosCarta1 == quantidadeDePontosTuristicosCarta2 ) {

      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);
    
    }else if (quantidadeDePontosTuristicosCarta1 > quantidadeDePontosTuristicosCarta2) {

      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (quantidadeDePontosTuristicosCarta1 < quantidadeDePontosTuristicosCarta2)
    {

      printf("Vencedor: %s", nomeDoPaisCarta2);
    
    }

    break;

  //Comparando a "densidadePopulacionalCarta1" com a "densidadePopulacionalCarta2"

  case 5: 

    if (densidadePopulacionalCarta1 == densidadePopulacionalCarta2){

      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);
    
    }else if (densidadePopulacionalCarta1 < densidadePopulacionalCarta2) {

      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (densidadePopulacionalCarta1 > densidadePopulacionalCarta2){

    printf("Vencedor: %s", nomeDoPaisCarta2);
    
    }

    break;

  default: 

    printf("Opção inválida!");

    break;

  }

  //Comparando o segundo atributo escolhido
  
switch (atributoEscolhido2 )
  {
  //Comparando a "quantidadeDeHabitantesCarta1" com a "quantidadeDeHabitantesCarta2".
  case 1:
    if (quantidadeDeHabitantesCarta1 == quantidadeDeHabitantesCarta2) {
      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);

    }else if (quantidadeDeHabitantesCarta1 > quantidadeDeHabitantesCarta2) {
    
      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (quantidadeDeHabitantesCarta1 < quantidadeDeHabitantesCarta2) {
    
    printf("Vencedor: %s", nomeDoPaisCarta2);

    }
    break;

      //Comparando "areaCarta1" com a "areaCarta2"
    case 2: 
    if (areaCarta1 == areaCarta2){

      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);
    
    }else if (areaCarta1 > areaCarta2) {

      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (areaCarta1 < areaCarta2)
    {

    printf("Vencedor: %s", nomeDoPaisCarta2);
    
    }
    break;
  
    //Comparando "produtoInternoBrutoCarta1" com a "produtoInternoBrutoCarta1"
  case 3: 
    if (produtoInternoBrutoCarta1== produtoInternoBrutoCarta2){

      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);
    
    }else if (produtoInternoBrutoCarta1 > produtoInternoBrutoCarta2) {

      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (produtoInternoBrutoCarta1 < produtoInternoBrutoCarta2)
    {

    printf("Vencedor: %s", nomeDoPaisCarta2);
    
    }
    break;

  //Comparando a "quantidadeDePontosTuristicosCarta1quantidade" com a "quantidadeDePontosTuristicosCarta1"
  case 4: 
    if (quantidadeDePontosTuristicosCarta1 == quantidadeDePontosTuristicosCarta2 ) {

      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);
    
    }else if (quantidadeDePontosTuristicosCarta1 > quantidadeDePontosTuristicosCarta2) {

      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (quantidadeDePontosTuristicosCarta1 < quantidadeDePontosTuristicosCarta2)
    {

      printf("Vencedor: %s", nomeDoPaisCarta2);
    
    }

    break;

  //Comparando a "densidadePopulacionalCarta1" com a "densidadePopulacionalCarta2"

  case 5: 

    if (densidadePopulacionalCarta1 == densidadePopulacionalCarta2){

      printf("Houve um empate entre a cidade %s e %s.", nomeDoPaisCarta1, nomeDoPaisCarta2);
    
    }else if (densidadePopulacionalCarta1 < densidadePopulacionalCarta2) {

      printf("Vencedor: %s", nomeDoPaisCarta1);

    }else if (densidadePopulacionalCarta1 > densidadePopulacionalCarta2){

    printf("Vencedor: %s", nomeDoPaisCarta2);
    
    }

    break;

  default: 

    printf("Opção inválida!");

    break;

  }
  //if`s que faz a soma dos atributos escolhidos populacao sendo um deles
    if (atributoEscolhido1 == 1 || atributoEscolhido1 == 2 &&
        atributoEscolhido2 == 2 || atributoEscolhido2 == 1){

    pontosTotais1 = (long double) quantidadeDeHabitantesCarta1 + areaCarta1;
    pontosTotais2 = (long double) quantidadeDeHabitantesCarta2 + areaCarta2;

    }else if (atributoEscolhido1 == 1 || atributoEscolhido1 ==3 &&
       atributoEscolhido2 == 3 || atributoEscolhido2 == 1){

    pontosTotais1 = (long double) quantidadeDeHabitantesCarta1 + produtoInternoBrutoCarta1;
    pontosTotais2 = (long double) quantidadeDeHabitantesCarta2 + produtoInternoBrutoCarta1;

    }else if (atributoEscolhido1 == 1 || atributoEscolhido1 == 4 &&
       atributoEscolhido2 == 4 || atributoEscolhido2 == 1){

    pontosTotais1 = (long double) quantidadeDeHabitantesCarta1 + quantidadeDePontosTuristicosCarta1;
    pontosTotais2 = (long double) quantidadeDeHabitantesCarta2 + quantidadeDePontosTuristicosCarta2;

    }else if (atributoEscolhido1 == 1 || atributoEscolhido1 == 5 &&
       atributoEscolhido2 == 5 || atributoEscolhido2 == 1){
    
    pontosTotais2 = (long double) quantidadeDeHabitantesCarta1 + densidadePopulacionalCarta1;
    pontosTotais2 = (long double) quantidadeDeHabitantesCarta2 + densidadePopulacionalCarta2;

    }

    //--------------------------------------
  //if`s que faz a soma dos atributos escolhidos area sendo um deles

    if (atributoEscolhido1 == 2 || atributoEscolhido1 == 3 &&
       atributoEscolhido2 == 3 || atributoEscolhido2 == 2){

    pontosTotais1 = (long double) areaCarta1 + produtoInternoBrutoCarta1;
    pontosTotais2 = (long double) areaCarta2 + produtoInternoBrutoCarta2;

       }else if (atributoEscolhido1 == 2 || atributoEscolhido1 == 4 &&
        atributoEscolhido2 == 4 || atributoEscolhido2 == 2){
    
    pontosTotais1 = (long double) areaCarta1 + quantidadeDePontosTuristicosCarta1;
    pontosTotais2 = (long double) areaCarta2 + quantidadeDePontosTuristicosCarta2;

       }else if (atributoEscolhido1 == 2 || atributoEscolhido1 == 5 &&
        atributoEscolhido2 == 5 || atributoEscolhido2 == 2){

    pontosTotais1 = areaCarta1 + densidadePopulacionalCarta1;
    pontosTotais2 = areaCarta2 + densidadePopulacionalCarta2;

        }

        //---------------------------------

    if (atributoEscolhido1 == 3 || atributoEscolhido2 == 4 &&
      atributoEscolhido2 == 4 || atributoEscolhido2 == 3) {

    pontosTotais1 = (long double) produtoInternoBrutoCarta1 + quantidadeDePontosTuristicosCarta1;
    pontosTotais2 = (long double) produtoInternoBrutoCarta2 + quantidadeDePontosTuristicosCarta2;

       }else if (atributoEscolhido1 == 3 || atributoEscolhido1 == 5 &&
        atributoEscolhido2 == 5 || atributoEscolhido2 == 3){

    pontosTotais1 = (long double) produtoInternoBrutoCarta1 + densidadePopulacionalCarta1;
    pontosTotais2 = (long double) produtoInternoBrutoCarta2 + densidadePopulacionalCarta2;
        }


        //----------------
    if (atributoEscolhido1 == 4 || atributoEscolhido2 == 5 &&
      atributoEscolhido2 == 5 || atributoEscolhido2 == 4) {

    pontosTotais1 = (long double) densidadePopulacionalCarta1 + densidadePopulacionalCarta1;
    pontosTotais2 = (long double) densidadePopulacionalCarta2 + densidadePopulacionalCarta2;

      }
      printf("\nPaís: %s pontuação total -> %2.Lf", nomeDoPaisCarta1, pontosTotais1);
      printf("\nPaís: %s pontuação total -> %2.Lf", nomeDoPaisCarta2, pontosTotais2);

return 0;
}