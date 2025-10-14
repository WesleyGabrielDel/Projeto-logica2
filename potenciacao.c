#include <stdio.h>
#include <math.h>


int main()
{
    int vezes;
    int num;
    int valor;
    
    printf("----------------------------------------------------------------- \n");
    printf("Digite o número que deseja elevar: ");
    scanf("%d", &num);
    printf("Digite o número de vezes que deseja elevar o número %d: ", num);
    scanf("%d", &vezes);
    printf("----------------------------------------------------------------- \n");
    valor = pow(num, vezes);
    
    printf("\nO valor é: %d", valor);
    
    return 0;
}