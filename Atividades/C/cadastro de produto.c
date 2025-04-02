#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "");
	int i,qtd; 
	char pessoa[50][50], produto[50][50];
	float preco[100], total;
	
	
printf("Digite a quantidade de produtos a serem cadastrados: ");
	scanf("%i", &qtd);
	
	for(i=0; i<qtd; i++){
		printf("Digite o nome do produto: ", i+1);
		fflush(stdin);
		gets(produto[i]);
		printf("Digite o nome da pessoa que irá receber: ");
		fflush(stdin);
		gets(pessoa[i]);
		printf("Digite o preço: ");
		scanf("%f", &preco[i]);
		
		total = total + preco[i];
		system("cls");
	}
	
	printf("------------------------------ \n");
	printf("NOTA FISCAL \n");
	
	for (i=0; i<qtd; i++){
			
	
		printf("------------------------------ \n");
		printf("NOME DO PRODUTO: %s \n", produto[i]);
		printf("Presente feito pra: %s \n ", pessoa[i]);
		printf("Preço total = R$ %.2f \n", total);
		
	}

}

