#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 50
int main (void){
        // entendendo a struct
        struct pessoa{
            int idade;
            float peso;
            char nome [TAM];
        };

       typedef struct pessoa  pessoa; // definimos isso para usar só tipo pessoa e não struct tipo pessoa

        pessoa  pes = {0,0.0, "Teste"}; 
    
    // teste das variaveis sem dados
    printf("Inicio: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    
    // teste das variaveis com dados inseridos via codigo
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("ALTERANDO TUDO: \n");
    printf("pes.idade = %d\n", pes.idade);
    printf("pes.peso = %.2f \n", pes.peso);
    printf("pes.nome = %s\n", pes.nome);
    
    // teste com a pessoa inserindo seus dados
    printf("Insira sua idade: \n");
        scanf("%d", &pes.idade);
    printf("Insira seu peso:  \n");
        scanf("%f", &pes.peso);
        printf("Insira seu nome: \n");
            scanf("%s", &pes.nome);
        
        system("cls");
        
        printf("Idade: %d\n", pes.idade);
        printf("Peso: %f\n", pes.peso);
        printf("Nome: %s\n", pes.nome);


}