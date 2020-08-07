 #include <stdio.h>

int main () {
    int ano, idade;
    char mensagem;
    printf("Digite a idade:");
    scanf("%d", &idade);

    ano = 2020 - idade;

    printf("%s %d", mensagem, ano);
}
