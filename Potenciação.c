/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int vezes;
int num;
int valor;

int main()
{
    
    printf("----------------------------------------------------------------- \n");
    printf("CAUCULADORA DE POTENCIACAO\n");
    printf("----------------------------------------------------------------- \n");
    printf("Digite o número que deseja elevar:\n");
    scanf("%d", &num);

    printf("Digite o número de vezes que deseja elevar o número:\n");
    scanf("%d", &vezes);
    
    
    printf("----------------------------------------------------------------- \n");
    valor = pow(num, vezes);
    
    printf("O valor é: %d\n", valor);
    
    printf("----------------------------------------------------------------- \n");
    
    return 0;
}

