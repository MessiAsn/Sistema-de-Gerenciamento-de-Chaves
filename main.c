#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct{
    char nome;
    int matricula, senha;
}Servidor;

typedef struct{
    int senha
}Administrador;

typedef struct{
    int codigo;
}Chave;

typedef struct{
    int numero;
}Laboratorio;

void menu_adm();
void menu_serv();
void cadastro_adm();
void consulta_adm();
void relatorio_adm();
void checkin_chave();
void checkout_chave();
void reserva_chave();
void gerar_relatorio();


int main() {
	  setlocale(LC_ALL, "Portuguese");
    int op;

    do {
        system("cls");
        printf("\n\t\t TELA DE LOGIN");
        printf("\n 1 - Admnistrador");
        printf("\n 2 - Servidor");
        printf("\n 0 - Sair");
        printf("\n\n Selecione a opção desejada: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                menu_adm();
                break;
            case 2:
                menu_serv();
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\n Opção inválida. Tente novamente.\n\n");
                system("pause");
                break;
        }
    } while(op != 0);

    return 0;
}

void menu_adm() {
    int op;

    Servidor serv;


    printf("\nDigite sua matrícula: ");
    scanf("%d", &serv.matricula);

    printf("\nDigite sua senha: ");
    scanf("%d", &serv.senha);

    if(serv.senha == 12345){
        system("cls");
        printf("\n\t\t MENU ADMINISTRADOR");
        printf("\n 1 - Cadastro");
        printf("\n 2 - Consulta");
        printf("\n 3 - Gerar Relatório");
        printf("\n 0 - Sair");
        printf("\n\n Selecione a opcao desejada: ");
        scanf("%d", &op);
    }else{
    printf("\nSenha incorreta\n\n");
    system("pause");
    }
            switch(op) {
            case 1:
                cadastro_adm();
                break;
            case 2:
                consulta_adm();
                break;
            case 3:
                relatorio_adm();
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\n Opção inválida. Tente novamente.\n\n");
                system("pause");
                break;
        }
}

void menu_serv() {
    int senha = 12345;
    int op;

    printf("\nDigite a senha: ");
    scanf("%d", &senha);

    if(senha == 12345){
        system("cls");
        printf("\n\t\t MENU SERVIDORES");
        printf("\n 1 - Check-In de chave");
        printf("\n 2 - Check-Out de chave");
        printf("\n 3 - Reserva de chave");
        printf("\n 0 - Sair");
        printf("\n\n Selecione a opcao desejada: ");
        scanf("%d", &op);
    }else{
    printf("\nSenha incorreta\n\n");
    system("pause");
    }
            switch(op) {
            case 1:
                checkin_chave();
                break;
            case 2:
                checkout_chave();
                break;
            case 3:
                reserva_chave();
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\n Opção inválida. Tente novamente.\n\n");
                system("pause");
                break;
        }
}

