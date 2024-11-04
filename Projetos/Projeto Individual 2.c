#include <stdio.h> //Biblioteca padrão
#include <string.h> // Biblioteca para o uso de strings
#include <stdlib.h>  // Biblioteca para usar o comando exit
#include <locale.h> // Biblioteca para o uso dos acentos


void cadastro_cliente(){ // Função de cadastro do cliente 
    char nome[100], telefone [100], endereco[100]; // variáveis da função

    
    printf("Digite seu nome completo: \n"); // Pega o nome completo do user e armazena
        fgets(nome,100,stdin);
        
    printf("Digite seu número de telefone: \n"); // Pega o telefone do user e armazena 
        fgets(telefone,100,stdin);
        
    printf("Digite seu endereço: "); // Pega o endereço digitado e armazena 
        fgets(endereco,100,stdin);

        system("cls"); // Limpa a tela antes de mostrar os dados

    printf("---------Dados cadastrados---------\n"); // Exibe os dados cadastrados 
    printf("NOME = %s\n", nome);
    printf("TELEFONE = %s\n", telefone);
    printf("ENDEREÇO = %s\n", endereco);
    printf("---------------------------------\n");
    printf("Pressione Enter para voltar ao menu principal...");
    getchar (); // Limpa o buffer de entrada 
}

void compra_carro(){ //Função de compra de carro
    int opcao;
    char cor[30], f_pagamento[30]; // Variávels da função

    printf("*******************************\n");
    printf("** \033[1;34mOpções de carros na loja: \033[0m **\n"); // Faz uma tabela bonitinha com a cor diferente
    printf("*******************************\n");
    printf("1. Corvette C6\n");
    printf("2. Chevrolet Camaro Z-28\n");
    printf("3. Mustang Fastback 1967\n");
    printf("*******************************\n");

    printf("Escolha seu carro: "); //Escaneia a opção e pede pra pessoa escolher
        scanf("%d", &opcao);
        getchar();

        system("cls"); // Limpa a tela 

    printf("Digite a cor desejada do seu carro: \n"); // Guarda a cor 
        fgets(cor,30,stdin);
        
        system("cls"); // Limpa a tela 

    printf("Forma de pagamento: \n"); // Escaneia a forma de pagamento e guarda essa informação
     
        fgets(f_pagamento,30,stdin);

        system("cls"); // Limpa a tela

    printf("-----Registro de Compra-----\n"); // Exibe os dados cadastrados, com a opção de carro escolhida
    switch(opcao){
        case 1:
            printf("SEU CARRO: Corvette C6 \n"); // Se o carro for 1, na impressão aparece o carro escolhido
            break;
        case 2:
            printf("SEU CARRO: Chevrolet Camaro Z-28 \n"); // Se o carro for 2, na impressão aparece o carro escolhido
            break;
        case 3:
            printf("SEU CARRO: Mustang Fastback 1967 \n"); // Se o carro for 3, na impressão aparece o carro escolhido
            break;
            break;
        default:
        printf("Opção de carro indisponível no momento!"); // Caso o user tente escolher outra opção
        


    }

    printf("COR = %s", cor);
    printf("FORMA DE PAGAMENTO = %s\n",f_pagamento); // Imprime o carro e os dados cadastrados
    printf("---------------------------------\n");
    system("pause");

}


void acess(){ // Criei uma função de acessório
    char acess[100]; // Variáveis da função
    int quant;


    printf("Escolha o nome do seu acessório: \n"); // Escolhe o nome do acessório e guarda na memória
        fflush(stdin);
        fgets(acess,100,stdin);
    printf("Escolha a quantidade: "); // Registra a quantidade de acessórios 
        fflush(stdin);
        scanf("%d", &quant);

         system("cls"); //Limpa a tela

    printf("---------Dados cadastrados---------\n"); // Exibe os dois
    printf("ACESSÓRIO = %s\n",acess);
    printf("QUANTIDADE DESEJADA: %d\n", quant);
    printf("---------------------------------\n");
    system("pause");


        
}



int main (){ 
    setlocale(LC_ALL,""); // Suportar acentos
    char senha [4];
    int opcao;

      while (1){ //Criação de uma senha para logar 
      printf("Digite a senha: ");
        fgets(senha,4,stdin);
        senha[strcspn(senha, "\n")] = 0; // Inserir o \n

        if(strcmp(senha, "123") == 0){
            printf("\033[32mSenha Correta!\n\033[0m"); //Caso o usuário digite a senha correta, exibe em verde 
            break;
        }else{
            system("cls");
            printf("\033[31mERRO DE SENHA\033[0m, digite novamente a senha! \n");   // Se digitar a senha errada, exibe em vermelho e pede pra digitar de novo
			    
        }    
    }
    
    while(1){ 

        system ("cls");

        
        printf("\033[32mSenha Correta!\n\033[0m"); // Se digitar a senha correta, entra no programa e exibe Senha correta! em verde
            fflush(stdin);

    printf("\033[33m+-------------------------+\n");  // Amarelo
  printf("|     \033[31m-Menu-\033[33m              |\n"); // Vermelho
  printf("+-------------------------+\n\033[0m"); // Volta à cor padrão
  printf("| 1 - Cadastro de cliente |\n");
  printf("| 2 - Compra de Carro     |\n");
  printf("| 3 - Compra de Acessório|\n");
  printf("| 4 - Sair do Programa    |\n");
  printf("+-------------------------+\n");
  printf("Escolha uma opção: "); // Guarda a opção do usuário para entrar em alguma das funções
    fflush(stdin);
    scanf("%d", &opcao);

        system ("cls"); // Limpa a tela antes de entrar na função
    


    switch(opcao){ //Switch feito para guardar a opção que o user escolher 
        case 1:
            fflush(stdin);
            cadastro_cliente();
        break;
        case 2:
        fflush(stdin);
            compra_carro();
        break;
        case 3:
        fflush(stdin);
            acess();
        break;
        case 4:
            printf("\033[32mPrograma finalizado com sucesso!\033[0m\n"); // Se ele escolher a opção 4, o programa fecha 
            return 0;
        break;
    default:
        printf("Opção Inválida");
        }
    } 
}
