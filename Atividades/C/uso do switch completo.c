#include <stdio.h>
#include <locale.h>
int num;
char telefone [11], nome, endereco, email, nomepai, nomemae;
main(void){
	setlocale(LC_ALL,"Portuguese");
	printf("Escolha um curso: \n (1) ADS \n (2) E.S \n (3) C.C \n");
	scanf("%i", &num);
	fflush(stdin);
	system("cls");
	
	switch(num){
		case 1:
			printf("Voc� escolheu ads! \n");
			printf("Digite seu nome:");
			scanf("%s", &nome);
			printf("Digite seu telefone:");
			scanf("%s", &telefone);
			printf("Digite seu endere�o:");
			scanf("%s", &endereco);
			break;
			
			case 2:
				printf("Voc� escolheu Engenharia de Software! \n");
				printf("Digite seu nome:");
				scanf("%s", &nome);
					printf("Digite seu email:");
			        scanf("%s", &email);
			        	printf("Digite seu telefone (com o DDD):");
			scanf("%s", &telefone);
				break;
			
		case 3:
			printf("Voc� escolheu Ci�ncia da Computa��o! \n");
			printf("Digite seu nome:");
				scanf("%s", &nome);
				printf("Digite o nome do seu pai:");
				scanf("%s", &nomepai);
				printf("Digite o nome da sua m�e:");
				scanf("%s", &nomemae);
				break;
	default:
		printf("Escolha uma op��o v�lida!");
	}
}
