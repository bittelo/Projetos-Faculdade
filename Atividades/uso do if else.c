#include <stdio.h>
#include <locale.h>

int idade1, idade2;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
    printf("Informe a idade da primeira pessoa \n");
    scanf("%i", &idade1);

    printf("Informe a idade da segunda pessoa \n");
    scanf("%i", &idade2);

    if (idade1 == idade2){
	printf("As idades s�o iguais");
}else{
    if (idade1 > idade2){

    printf("A primeira pessoa � mais velha");
    }else{
	
    printf("A segunda pessoa � mais velha");
    }
  }
}

