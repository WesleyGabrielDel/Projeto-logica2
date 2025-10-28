#include <stdio.h>
#include <stdbool.h>

int main() {
	bool sair = false;
	float n1;
	float n2;
	int opcao;
	float operacao;

	while(sair == false)
	{
	    printf("--------------------------------------------------------\n");
		printf("De acordo com a tabela, selecione a operacao desejada:\n");
		printf("--------------------------------------------------------\n");
		printf(" 1 - Soma\n 2 - Subtracao\n 3 - Divisao\n 4 - Multiplicacao\n\nPara fechar o programa digite uma letra\n");
		printf("--------------------------------------------------------\n");
		scanf("%d", &opcao);


		if (opcao == 1)
		{
			printf("Digite o primeiro numero: \n");
			scanf("%f", &n1);
			printf("Digite o segundo numero: \n");
			scanf("%f", &n2);

			operacao = n1 + n2;

			printf("\n");

			printf("--------------------------------------------------------");
			printf("\nA resposta da soma de %.2f e %.2f e de: %.2f\n", n1, n2, operacao);
			printf("--------------------------------------------------------\n");


		}

		else if (opcao == 2)
		{
			printf("Digite o primeiro numero: \n");
			scanf("%f", &n1);
			printf("Digite o segundo numero: \n");
			scanf("%f", &n2);

			operacao = n1 - n2;

			printf("\n");

			printf("--------------------------------------------------------");
			printf("\nA resposta da SubtraC'ao de %.2f e %.2f e de: %.2f\n", n1, n2, operacao);
			printf("--------------------------------------------------------\n");
		}

		else if (opcao == 3)
		{
			printf("Digite o primeiro numero: \n");
			scanf("%f", &n1);
			printf("Digite o segundo numero: \n");
			scanf("%f", &n2);

			operacao = n1 / n2;

			printf("\n");

			printf("--------------------------------------------------------");
			printf("\nA resposta da Divisao de %.2f e %.2f e de: %.2f\n", n1, n2, operacao);
			printf("--------------------------------------------------------\n");
		}

		else if (opcao == 4)
		{
			printf("Digite o primeiro numero: \n");
			scanf("%f", &n1);
			printf("Digite o segundo numero: \n");
			scanf("%f", &n2);

			operacao = n1 * n2;

			printf("\n");

			printf("--------------------------------------------------------");
			printf("\nA resposta da Multiplicacao de %.2f e %.2f e de: %.2f\n", n1, n2, operacao);
			printf("--------------------------------------------------------\n");
		}

		else {
			return 0;
		};

	}

	return 0;
}