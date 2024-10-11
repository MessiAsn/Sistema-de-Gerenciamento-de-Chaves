#include <stdio.h>
#include <stdlib.h>

void menu_adm();
void menu_prof();

int main() {
    int op;

    do {
        printf("\n\t\t TELA DE LOGIN");
        printf("\n 1 - Administrador");
        printf("\n 2 - Professor");
        printf("\n 0 - Sair");
        printf("\n\n Selecione a opcao desejada: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                menu_adm();
                break;
            case 2:
                menu_prof();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("\n Opcao invalida. Tente novamente.\n");
                break;
        }
    } while(op != 0);

    return 0;
}

void menu_adm() {
    int senha = 12345;
    int op;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if(senha ==12345){
        system("cls");
        printf("\n\t\t MENU ADMINISTRADOR");
        printf("\n 1 - Cadastro");
        printf("\n 2 - Revisao");
        printf("\n 0 - Sair");
        printf("\n\n Selecione a opcao desejada: ");
        scanf("%d", &op);
    }else{
    printf("\nSenha incorreta");
    }

}

void menu_prof() {
    int senha = 12345;
    int op;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if(senha == 12345){
        system("cls");
        printf("\n\t\t MENU PROFESSORES");
        printf("\n 1 - Retirar chave");
        printf("\n 2 - Devolver chave");
        printf("\n 3 - Reservar chave");
        printf("\n 0 - Sair");
        printf("\n\n Selecione a opcao desejada: ");
        scanf("%d", &op);
    }else{
    printf("\nSenha incorreta");
    }
}

