#include<stdio.h>

typedef union ind{
    float IG;
    float IRA;
    float IRT;
}indice;

typedef struct aluno{
    char nome[50];
    int matricula;
    char curso[50];
    indice indice_academico;
}alunos;

int main(void){
    alunos var;
    int op;
    printf("Informe o nome do aluno: ");
    scanf(" %[\n]s", var.nome);
    printf("Informe a matrícula do aluno: ");
    scanf("%d", &var.matricula);
    printf("Informe o curso do aluno: ");
    scanf(" %[\n]s", var.curso);
    printf("Informe um dos índices acadêmicos: ");
    printf("1-Indice Geral(IG): 2-Indice de Rendimento Academico: 3- Indice de Rendimento Tecnico: ");
    scanf("%d", &op);
    if(op==1){
        scanf("%f", &var.indice_academico.IG);
    } if(op==2){
        scanf("%f", &var.indice_academico.IRA);
    } if(op==3){
        scanf("%f", &var.indice_academico.IRT);
    } else{
        printf("ERRO!");
    }
    printf("Informações do aluno:\nNome: %s \nMatricula: %d\nCurso: %s \nIndice Academico: %f", var.nome, var.matricula, var.curso, var.indice_academico.IRA);
    return 0;
}
