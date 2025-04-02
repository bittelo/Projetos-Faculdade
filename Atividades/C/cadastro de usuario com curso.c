#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//TURNO,NOME DO CONCURSO, HORÁRIO, MATRÍCULA, NOME DO CANDIDATO, DUAS NOTAS E MÉDIA
// %c uma letra
// %s varias letras
// %d numero inteiro

char nomedousuario [50], nomedocurso [50];
int matricula, turno;
char horario [20];
float nota1, nota2, media;


int main() {

	setlocale (LC_ALL, "Portuguese");

printf("Digite seu nome completo!: ");
    scanf("%s", &nomedousuario);
    fflush(stdin);
    
    printf("Digite o numero da sua matricula: ");
    scanf("%d", &matricula);
    fflush(stdin);
    
    printf("Curso que está fazendo: ");
    scanf("%s", &nomedocurso);
    fflush(stdin);
    
    
    printf("Selecione seu turno ( 1 - Manhã, 2 - Tarde, 3 - Noite):");
    scanf("%d", &turno);
    
    printf("Qual o horário das suas aulas? ");
    scanf("%s", &horario);
    fflush(stdin);
    system("cls");
    
    printf("Digite sua primeira nota:");
    scanf("%f", &nota1);
    
    printf("Digite sua segunda nota:");
    scanf("%f", &nota2);
    
    media= (nota1+nota2) / 2; 
    system("cls");
    
    printf("Cadastro realizado com sucesso! Aqui está sua ficha \n");
    
    printf("Nome completo: %s\n", nomedousuario);
    printf("Matrícula: %d \n", matricula);
    printf("Curso: %s \n ", nomedocurso);
    printf("Turno ( 1 - Manhã, 2 - Tarde, 3 - Noite): %d \n", turno);
    printf("Horário das aulas: %s \n", horario);
    printf("Média da nota do primeiro semestre: %.2f \n", media);
    

    
    return 0;

	
}
