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

int main(void) {
    return 0;
}
