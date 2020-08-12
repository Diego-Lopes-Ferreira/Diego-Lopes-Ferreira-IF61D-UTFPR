/*
Em uma pizzaria, cada tulipa de chopp custa R$ 0,80 e uma pizza mista grande custa R$10,0 mais
R$1,50 por tipo de cobertura pedida (queijo, presunto, banana, etc.). Uma turma vai à pizzaria e pede uma
determinada quantidade de “chopps” e uma pizza grande com uma determinada quantidade de
coberturas. Escreva um programa que calcule e exiba a conta e, sabendo quantas pessoas estão à mesa,
quanto cada um deve pagar (não esqueça os 10% do garçom).


  entradas:
    inteiro quantas pessoas
    
    quantas tulipas
    quantas pizzas
      tipo de cobertura
  saidas:
    quanto de cada produto foi comprado
    preco total
    quanto cada um deve pagar
  processamento:
    enquanto a resposta for diferente de 3:
      perguntar ao usuario o que ele quer, e fazer uma selecao
        case [1] Adicionar pizza
          Perguntar qual o sabor
            case [1] Queijo
            case [2] Presunto
            case [3] Banana
          
        case [2] Adicionar tulipa
          perguntar quantas

        case [3] Finalizar pedido
    
    perguntar quantas pessoas
    calcular o preco total
      valorTotal += nDePizzas * precoPizza;
      valorTotal += (nDeQueijo + nDePresunto + nDeBanana) * precoSabores;
      valorTotal += nDeTulipas * precoTulipas;
    calcular o preco individual (total/nDePessoas)
    mostrar tudo na tela
*/
#include <stdio.h>

int main () {
  printf("====Pizzaria==== \n");

  int nDePizzas = 0, nDeQueijo = 0, nDePresunto = 0, nDeBanana = 0, nDeTulipas = 0, nDePessoas = 0;
  float precoPizza = 10.0, precoTulipas = 0.8, precoSabores = 1.5, valorTotal=0;

  int selecao;
  while (1) {
    printf("Adicionar pedido\n  [1] Adicionar pizza\n  [2] Adicionar tulipas\n  [3] Finalizar pedido \n>>> ");
    scanf("%d", &selecao);

    // Se pizza:
    if (selecao == 1){
      nDePizzas++;
      while (1) {
        selecao = 0;
        printf("Adicionar Pizza \n");
        printf("Selecione o sabor:\n  [1] Queijo\n  [2] Presunto\n  [3] Banana\n  [4] sair da selecao \n>>> ");
        scanf("%d", &selecao);
        if (selecao == 1) {
          nDeQueijo++;
          printf("Sabor escolhido QUEIJO \n");
        } else if (selecao == 2) {
          nDePresunto++;
          printf("Sabor escolhido PRESUNTO \n");
        } else if (selecao == 3) {
          nDeBanana++;
          printf("Sabor escolhido BANANA \n");
        } else if (selecao == 4) {
          break;
        }
      }      
    } else if (selecao == 2){
      int selecaoTulipas = 0;
      printf("Diga a quantidade de TULIPAs \n>>> ");
      scanf("%d", &selecaoTulipas);
      printf("Adicionado %d tulipas \n", selecaoTulipas);
      nDeTulipas += selecaoTulipas;
      selecaoTulipas = 0;
    } else if (selecao == 3){
      break;
    } else {
      printf("Digite um valor valido \n");
    }
  }

  printf("Finalizar compra \n");
  printf("Selecione o n de pessoas \n>>> ");
  scanf("%d", &nDePessoas);
  printf("\n\n\n\n");
  printf("        Pizzaria          \n");
  printf("Rua da Universidade, n 22 \n");
  printf("------------------------- \n");
  printf("       Nota Fiscal        \n");
  printf("------------------------- \n");
  valorTotal += nDePizzas * precoPizza;
  valorTotal += (nDeQueijo + nDePresunto + nDeBanana) * precoSabores;
  valorTotal += nDeTulipas * precoTulipas;
  printf("  Valor total R$ %.2f \n", valorTotal);
  printf("------------------------- \n");
  printf("COD |  NOME  | QTD | R$ \n");
  if (nDePizzas > 0) {
    printf("736 | PIZZA  | %d | %.2f \n", nDePizzas, nDePizzas*precoPizza);
    if (nDeQueijo > 0) {
      printf("  Sabor Queijo QTD: %d, R$ %.2f \n", nDeQueijo, nDeQueijo*precoSabores);
    }
    if (nDePresunto > 0) {
      printf("  Sabor Queijo QTD: %d, R$ %.2f \n", nDePresunto, nDePresunto*precoSabores);
    }
    if (nDeBanana > 0) {
      printf("  Sabor Queijo QTD: %d, R$ %.2f \n", nDeBanana, nDeBanana*precoSabores);
    }
  }
  if (nDeTulipas > 0) {
    printf("282 | TULIPA | %d | %.2f \n", nDeTulipas, nDeTulipas*precoTulipas);
  }
  printf("------------------------- \n");
  printf("Valor por pessoa R$ %.2f \n", valorTotal / nDePessoas);


  
  return 0;
}
