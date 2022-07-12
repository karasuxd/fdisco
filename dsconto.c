#include <stdio.h>
int main ()
{
    float prod, tot1, tot2;

    int desconto, i = 0;
    printf("qual o valor do produto?\n");
    scanf("%f", &prod);
    printf("informe o desconto:\n");
    scanf("%d", &desconto);
    tot1 = desconto * prod / 100;//preço do produto * desconto / 100
    tot2 = prod - desconto * prod / 100;// subtraimos o preço do produto pela multiplicação entre as variaveis de desconto e produto divididos por 100
    for(int a = 0; a <= 14; a++)
        printf("--");

    printf("\no desconto de %d por cento foi de: %.2f", desconto, tot1);
    printf("\nproduto sem desconto: %.2f\nproduto com desconto: %.2f\n", prod, tot2);

     for(int a = 0; a <= 14; a++)
        printf("--");
    printf("\n");
    return 0;

}