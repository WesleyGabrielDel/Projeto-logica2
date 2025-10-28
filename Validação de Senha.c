#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char senha[50];
    char senha_val[50];
    bool validado = false;
    
    
    printf("--------------------------------------------------\n");
    printf("CADASTRO E VALIDAÇÃO DE SENHA\n");
    printf("--------------------------------------------------\n");
    
    printf("Digite a senha que deseja: \n");
    scanf("%s", senha);
    
    while(validado == false){
        printf("--------------------------------------------------\n");
        printf("Valide sua senha: \n");
        scanf("%s", senha_val);
        
        if (strcmp(senha, senha_val) == 0) {
            printf("\n--------------------------------------------------\n");
            printf("Cadastro completo com sucesso!\n");
            printf("--------------------------------------------------\n");
            validado = true;
            return 0;
        }
        
        else {
            printf("\n--------------------------------------------------\n");
            printf("As senhas não correspondem!\n");
            printf("--------------------------------------------------\n");        
        }
    }
    return 0;
    
}