#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONSULTAS 100
#define MAX_ESTOQUE 50

// estrutura p/ consultas médicas
struct Consulta {
    char paciente[50];
    char medico[50];
    char data[11];   // dia/mês/ano     
    char horario[6]; // hora:minuto
};

// estrutura p/ itens do estoque
struct Estoque {
    char nome[50];
    int quantidade;
};

struct Estoque estoque[MAX_ESTOQUE];
int total_estoque = 0;

struct Consulta consultas[MAX_CONSULTAS]; // armazenar consultas
int total_consultas = 0; // total de consultas cadastradas

void limpar_tela(void);
void pausar_tela(void);

// interface
void desenhar_cabecalho_base(void);
void renderizar_tela(const char* titulo_tela, const char* opcoes);


// p/ módulo de consultas
void navegar_modulo_consulta(void);
char tela_menu_consulta(void);
void tela_cadastrar_consulta(void);
void tela_pesquisar_consulta(void);

// p/ módulo de estoque
void navegar_modulo_estoque(void);
char tela_menu_estoque(void);
void tela_cadastrar_estoque(void);
void tela_pesquisar_estoque(void);

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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void pausar_tela(void) {
    printf("\n\t\t\t>>> Pressione <ENTER> para continuar...\n");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    getchar();
}

void desenhar_cabecalho_base(void) {
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte (UFRN)          ///\n");
    printf("///               Centro de Ensino Superior do Seridó (CERES)               ///\n");
    printf("///                 Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Projeto sig-medical : Sistema de Gestao de Clinica          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void renderizar_tela(const char* titulo_tela, const char* opcoes) {
    limpar_tela();
    desenhar_cabecalho_base();
    printf("///                                                                         ///\n");
    printf("/// :: %-66s :: ///\n", titulo_tela);
    printf("///                                                                         ///\n");
    if (opcoes) {
        printf("%s", opcoes);
        printf("///                                                                         ///\n");
        printf("///               Escolha a sua opcao: ");
    }
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
    char op;
    const char* opcoes =
        "1. Cadastrar nova consulta.\n"
        "2. Pesquisar consulta.\n"
        "0. Voltar ao menu principal.\n";
    renderizar_tela("Modulo de Consultas", opcoes);
    scanf(" %c", &op);
    getchar();
    return op;

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

void tela_pesquisar_consulta(void) {
    renderizar_tela("Pesquisar Consulta", NULL);
    char busca[50];
    int encontrou = 0;

    printf("\n\tDigite o nome do paciente ou medico para buscar: ");
    fgets(busca, sizeof(busca), stdin);
    busca[strcspn(busca, "\n")] = '\0';

    for (int i = 0; i < total_consultas; i++) {
        if (strstr(consultas[i].paciente, busca) != NULL || strstr(consultas[i].medico, busca) != NULL) {
            printf("\n--- Consulta Encontrada ---\n");
            printf("\tPaciente: %s\n", consultas[i].paciente);
            printf("\tMedico: %s\n", consultas[i].medico);
            printf("\tData: %s\n", consultas[i].data);
            printf("\tHorario: %s\n", consultas[i].horario);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("\n\tNenhuma consulta encontrada com esse nome.\n");
    }

    pausar_tela();
}

// módulo de estoque 

void navegar_modulo_estoque(void) {
    char opcao;
    do {
        opcao = tela_menu_estoque();
        switch (opcao) {
            case '1':
                tela_cadastrar_estoque();
                break;
            case '2':
                tela_pesquisar_estoque();
                break;
            case '0':
                break;
            default:
                printf("\n\tOpção inválida! Tente novamente.\n");
                pausar_tela();
                break;
        }
    } while (opcao != '0');
}

char tela_menu_estoque(void) {
    char op;
    const char* opcoes =
        "1. Cadastrar novo item no estoque.\n"
        "2. Pesquisar item no estoque.\n"
        "0. Voltar ao menu principal.\n";
    renderizar_tela("Modulo de Estoque", opcoes);
    scanf(" %c", &op);
    getchar();
    return op;
}

void tela_cadastrar_estoque(void) {
    if (total_estoque >= MAX_ESTOQUE) {
        printf("\n\tLimite maximo de itens no estoque atingido!\n");
        pausar_tela();
        return;
    }

    renderizar_tela("Cadastrar Item no Estoque", NULL);
    struct Estoque novo;

    printf("\n\tNome do item: ");
    fgets(novo.nome, sizeof(novo.nome), stdin);
    novo.nome[strcspn(novo.nome, "\n")] = '\0';

    printf("\tQuantidade: ");
    scanf("%d", &novo.quantidade);
    getchar();

    estoque[total_estoque++] = novo;
    printf("\n\tItem cadastrado com sucesso!\n");
    pausar_tela();
}

void tela_pesquisar_estoque(void) {
    renderizar_tela("Pesquisar Item no Estoque", NULL);
    char busca[50];
    int encontrou = 0;

    printf("\n\tDigite o nome do item para buscar: ");
    fgets(busca, sizeof(busca), stdin);
    busca[strcspn(busca, "\n")] = '\0';

    for (int i = 0; i < total_estoque; i++) {
        if (strstr(estoque[i].nome, busca) != NULL) {
            printf("\n--- Item Encontrado ---\n");
            printf("\tNome: %s\n", estoque[i].nome);
            printf("\tQuantidade: %d\n", estoque[i].quantidade);
            encontrou = 1;
        }
    }
    
    if (!encontrou) {
        printf("\n\tNenhum item encontrado com esse nome.\n");
    }

    pausar_tela();
}

// módulo de menu

char tela_menu_principal(void) {
    char op;
    const char* opcoes =
        "1. Modulo de Consultas\n"
        "2. Modulo de Estoque\n"
        "                              \n"
        "                              \n"
        "9. Equipe de Desenvolvimento\n"
        "0. Sair\n";

    renderizar_tela("Menu Principal", opcoes);
    scanf(" %c", &op);
    getchar();
    return op;
}

void tela_sobre(void) {
    const char* info =
        "Este programa eh um sistema de gestao para clinicas medicas.\n"
        "Foi desenvolvido como projeto da disciplina de Programação.";
    renderizar_tela("Sobre o Projeto", NULL);
    printf("%s\n", info);
    printf("//////////////////////////////////////////////////////////////\n");
    pausar_tela();
}

void tela_equipe(void) {
    const char* info =
        "///      Desenvolvido por:                                                 ///\n"
        "///      Maria Luíza Severo Lima                                           ///\n"
        "///      maria.severo.063@ufrn.edu.br                                      ///";
    printf("%s\n", info);
    printf("///////////////////////////////////////////////////////////////////////////\n");
    pausar_tela();
}
