#include <stdio.h>

int main(){

float nota;
float frequencia;

printf("Digite a nota do aluno: ");
scanf("%f", &nota);

printf("Digite a frequencia do aluno: ");
scanf("%f", &frequencia);

if(nota >= 7 && frequencia >= 75){
    printf("Aluno aprovado");
}else{
    printf("Aluno reprovado");
}

return 0;
}
