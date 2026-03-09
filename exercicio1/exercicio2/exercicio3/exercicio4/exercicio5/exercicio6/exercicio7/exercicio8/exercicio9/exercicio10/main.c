#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
char nome[100];
int faltas;
float nota;
struct Aluno *prox;
} aluno_t;

int main(){

aluno_t *aluno_root = NULL;
aluno_t *novo;

novo = (aluno_t*) malloc(sizeof(aluno_t));

printf("Digite o nome: ");
scanf("%s", novo->nome);

printf("Digite a nota: ");
scanf("%f", &novo->nota);

printf("Digite as faltas: ");
scanf("%d", &novo->faltas);

novo->prox = NULL;
aluno_root = novo;

printf("\nAluno: %s\n", aluno_root->nome);
printf("Nota: %.2f\n", aluno_root->nota);
printf("Faltas: %d\n", aluno_root->faltas);

if(aluno_root->nota >= 7 && aluno_root->faltas <= 25){
printf("Aprovado\n");
}else{
printf("Reprovado\n");
}

free(novo);

return 0;
}
