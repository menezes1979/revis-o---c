#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
char nome[100];
int faltas;
float nota;
} aluno_t;

int main(){

aluno_t *aluno;

aluno = (aluno_t*) malloc(sizeof(aluno_t));

printf("Digite o nome: ");
scanf("%s", aluno->nome);

printf("Digite a nota: ");
scanf("%f", &aluno->nota);

printf("Digite as faltas: ");
scanf("%d", &aluno->faltas);

printf("Nome: %s\n", aluno->nome);
printf("Nota: %.2f\n", aluno->nota);
printf("Faltas: %d\n", aluno->faltas);

if(aluno->nota >= 7 && aluno->faltas <= 25){
printf("Aprovado\n");
}else{
printf("Reprovado\n");
}

free(aluno);

return 0;
}
