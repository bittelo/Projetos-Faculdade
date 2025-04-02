
float n1,n2,media;


void ler_nota(){
  
    printf("Digite sua primeira nota: \n");
        scanf("%f", &n1);
    printf("Digite sua segunda nota: \n");
        scanf("%f", &n2);

        if(n1 > 10){
            printf("Nota N1 Inválida! Digite N1 novamente: \n");
                scanf("%f", &n1);
        }
        if(n2 > 10){
            printf("Nota N2 Inválida! Digite N2 novamente: \n");
                scanf("%f", &n2); 
        }
       
} 

void calcula_media(){
    
    media = (n1 + n2) / 2;

}

void exibe_resultado(){
    printf("Nota 1 = %.2f \n", n1);
     printf("Nota 2 = %.2f \n", n2);
    printf("Média: %.2f \n", media);
}

void pausa (){
    system ("pause");
}

void limpar(){
    system("cls");
}