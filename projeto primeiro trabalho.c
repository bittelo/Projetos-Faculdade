//Trabalho realizado por Pedro Hanza Bittencourt



#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h> //biblioteca que diz q esse codígo é pra windows

main(void){
		setlocale(LC_ALL,""); // pra suportar acentos
	
	// variáveis
	int i, qtd;
    float n1[100], n2[100], media[100];
    char sdt[100][100]; 
    
    
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);// muda a cor do printf pra AZUL
printf("---------------------------- \n Cadastro de estudantes \n ---------------------------- \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // muda a cor do printf para a padrão de novo
	printf("Quantos estudantes serão cadastrados?");
	scanf("%i", &qtd);
	

	for( i=0; i<qtd; i++){
	
	printf("Digite o nome do %dº estudante: \n", i + 1);// coloquei i+1 pois no FOR i=0
	scanf("%s", sdt[i]);// usamos sdt[i] pra ele armazenar o primeiro espaço de memoria pra esse estudante


printf("Primeira nota do semestre: \n");
	scanf("%f", &n1[i]);// mesma coisa com o nome do estudante, aqui vai ser a nota desse estudante.
	
	printf("Segunda nota do semestre: \n");
	scanf("%f", &n2[i]);
		
			media[i] = (n1[i] + n2[i])/2;
		
		system ("cls");	// limpar a tela antes de mostrar o cadastro de todos os estudantes
		

}
	for (i = 0; i < qtd; i++) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf("------------------------------------------- \n"); // pra separar bonitinho os cadastros
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // alteramos a cor do cadastro 
		printf("Nome do estudante: %s\n", sdt[i]); // aqui a gente imprime o espaço de memória que foi escrito pelo user lá em cima
        printf("Primeira nota %.2f\n", n1[i]);
        printf("Segunda nota %.2f\n", n2[i]);
        printf("Média: %.2f\n", media[i]);
        if (media[i] >= 7.0){
        	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // trocar a cor pra verde!
			printf("Aprovado! \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);} // dps voltar pra padrão do sistema, pra deixar só o aprovado verde
        	else {
        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);// trocar a cor pra vermelho!
				printf("Reprovado! \n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // dps voltar pra padrão do sistema, pra deixar só o reprovado vermelho
			}
		}
}





 	
