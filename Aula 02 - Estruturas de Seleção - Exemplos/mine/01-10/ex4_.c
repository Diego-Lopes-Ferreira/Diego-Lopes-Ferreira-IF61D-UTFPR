/*
Escreva um programa que seja capaz de concluir qual dentre os seguintes animais foi escolhido, através
de perguntas e respostas (o programa deve perguntar a classificação do animal e receber como
resposta apenas sim ou não). Animais possíveis: leão, cavalo, homem, macaco, morcego, baleia,
avestruz, pingüim, pato, águia, tartaruga, crocodilo e cobra.

Mamíferos
  Quadrúpedes
    Carnívoro
      Leão
    Herbívoro
      Cavalo
  Bípedes
    Onívoro
      Homem
    Frutíferos
      Macaco
  Voadores
    Morcego
  Aquáticos
    Baleia
Aves
  Não-voadoras
    Tropical
      Avestruz
    Polar
      Pingüim
  Nadadoras
    Pato
  De-rapina
    Águia
Répteis
  Com-casco
    Tartaruga
  Carnívoros
    Crocodilo
  Sem-patas
    Cobra 

  entradas:

  saidas:
  
  processamento:
  
*/
#include <stdio.h>
#include <string.h>

int pergunte(char pergunta[256]) {
  char user[4];
  printf("%s \n>>>", pergunta);
  fflush(stdin);
  gets(user);
  //printf("%s \n", user);
  return (strcmp(strlwr(user), "sim") == 0);
}

void mamiferos() {
  //printf("Mamifero \n");
  if (pergunte("O mamifero e quadrupede?")) {
    if (pergunte("Esse quadrupede e carnivoro?")) printf("Entao e um leao \n");
    else printf("Deve ser um cavalo entao \n");
  } else if (pergunte("O animal e um Bipede?")) {
    if (pergunte("Esse bipede e onivoro?")) printf("E um ser humano \n");
    else printf("Entao deve ser um macaco \n");
  } else if (pergunte("Mas, ele voa?")) printf("Ah, entao e um morcego \n");
  else printf("Entao deve ser uma baleia \n");
}
void aves() {
  //printf("Ave \n");
  if (!pergunte("A ave voa?")) {
    if (pergunte("Ela e tropical?")) printf("E um avestruz \n");
    else printf("Entao deve ser um pinguim \n");
  } else {
    if (pergunte("Ela nada?")) printf("E um pato :) \n");
    else printf("Entao deve ser uma aguia \n");
  }
}
void repteis() {
  //printf("Reptil \n");
  if (pergunte("Esse reptil tem casco?")) printf("O animal e uma tartarga \n");
  else if(pergunte("Ele e carnivoro?")) printf("O animal e um corocodilo \n");
  else printf("O animal deve ser uma cobra \n");
}

int main () {
  printf("Bom dia \n");
  printf("Responda apenas com Sim ou Nao (sem acento) \n");
  char resposta[4];

  if (pergunte("O animal e mamifero?")) mamiferos();
  else if (pergunte("O animal e uma ave?")) aves();
  else if (pergunte("O animal e um reptil")) repteis();
  
  return 0;
}