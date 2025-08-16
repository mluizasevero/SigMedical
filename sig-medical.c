#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONSULTAS 100

// informações
struct Consulta {
    char paciente[50];
    char medico[50];
    char data[11];   // dia/mês/ano     
    char horario[6]; // hora:minuto
};

struct Consulta consultas[MAX_CONSULTAS]; // armazenar consultas
int total_consultas = 0; // total de consultas cadastradas

void limpar_tela(void);
void pausar_tela(void);

// interface
void renderizar_tela(const char* titulo_tela, const char* opcoes);


// p/ módulo de consultas
void navegar_modulo_consulta(void);
char tela_menu_consulta(void);
void tela_cadastrar_consulta(void);
void tela_pesquisar_consulta(void);

// p/ tela principal
char tela_menu_principal(void);
void tela_sobre(void);
void tela_equipe(void);


int main() {
    // estrutura consulta
    char opcao;
    do {
        opcao = tela_menu_principal();
        switch (opcao) {
        case '1':
            navegar_modulo_consulta(); 
            break;
        case '2':
            tela_sobre(); 
            break;
        case '3':
            tela_equipe();
            break; 
        case '0':
            printf("Encerrando programa...\n");
            break;
        default:
            printf("Opção inválida\n");
            pausar_tela();

        }
    } while (opcao != '0');
    

    return 0;
}

// complementar

void limpar_tela(void) {
    printf("Pressione ENTER para continuar...\n");
    getchar();
}

void renderizar_tela(const char* titulo_tela, const char* opcoes) {
    limpar_tela();

    printf("========================================\n");
    printf(" %s\n", titulo_tela);
    printf("========================================\n");

    if (opcoes != NULL) {
        printf("%s\n", opcoes);
    }

    printf("========================================\n");
    printf("Escolha uma opção: ");
}

// modulo de consultas

void navegar_modulo_consulta(void) {
    char opcao;
    do {
        opcao = tela_menu_consulta();
        switch (opcao) {
        case '1':
            tela_cadastrar_consulta();
            break;
        case '2':
            tela_pesquisar_consulta();
            break;
        case '0':
            printf("Retornando ao menu principal...\n");
            pausar_tela(); 
            break;
        default:
            printf("Opção inválida\n");
            pausar_tela();

        }
    } while (opcao != '0');
}

char tela_menu_consulta(void) {
    renderizar_tela(
        "Menu de consultas",
        "1 - Cadastrar consulta\n"
        "2 - Buscar consulta\n"
        "0 - Voltar"
    );

char opcao;
scanf(" %c", &opcao);
getchar(); 
return opcao;

}

void tela_cadastrar_consulta(void) {
    if (total_consultas >= MAX_CONSULTAS) {
        printf("Limite máximo de consultas! Por favor, esvazie um horário.\n");
        pausar_tela();
        return;
    }

    renderizar_tela("Cadastrar consulta", NULL);

    struct Consulta nova; 
    printf("Nome do paciente:");
    fgets(nova.paciente, sizeof(nova.paciente), stdin);
    nova.paciente[strcspn(nova.paciente, "\n")] = '\0';

    printf("Nome do médico:");
    fgets(nova.medico, sizeof(nova.medico), stdin);
    nova.medico[strcspn(nova.medico, "\n")] = '\0';

    printf("Data (dia/mês/ano): ");
    fgets(nova.data, sizeof(nova.data), stdin);
    nova.data[strcspn(nova.data, "\n")] = '\0';

    printf("Horário (hora:minuto): ");
    fgets(nova.horario, sizeof(nova.horario), stdin);
    nova.horario[strcspn(nova.horario, "\n")] = '0';

    consultas[total_consultas++] = nova;

    printf("Consulta cadastrada com sucesso!\n");
    pausar_tela();

}