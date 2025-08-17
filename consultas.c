#include <stdio.h>
#include <stdlib.h>

// funções para o Módulo de Consultas

void TelaMenuConsultas() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///           Módulo Consultas         ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///     1. Agendar Nova Consulta       ///\n");
    printf("///     2. Pesquisar Consultas         ///\n");
    printf("///     3. Gerenciar Agendamentos      ///\n");
    printf("///     4. Gerar Relatórios            ///\n");
    printf("///     0. Voltar ao Menu Principal    ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf(">>> Escolha a opção desejada: ");
}

void TelaAgendarNovaConsulta() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///       Agendar Nova Consulta      ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    Nome do Paciente:               ///\n");
    printf("///    CPF do Paciente:                ///\n");
    printf("///    Data (dd/mm/aaaa):              ///\n");
    printf("///    Hora (hh:mm):                   ///\n");
    printf("///    Nome do Medico:                 ///\n");
    printf("///    Especialidade:                  ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf("\n");
}

void TelaGerenciarAgendamentos() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///     Gerenciar Agendamentos       ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    1. Alterar Consulta Agendada    ///\n");
    printf("///    2. Cancelar Consulta            ///\n");
    printf("///    3. Confirmar Presença           ///\n");
    printf("///    0. Voltar                       ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf(">>> Escolha a opção desejada: ");
}

void TelaGerarRelatorios() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///        Gerar Relatórios          ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    1. Consultas por Médico         ///\n");
    printf("///    2. Consultas por Período        ///\n");
    printf("///    3. Consultas Agendadas          ///\n");
    printf("///    4. Consultas Canceladas         ///\n");
    printf("///    0. Voltar                       ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf(">>> Escolha a opção desejada: ");
}

int main() {
    TelaMenuConsultas();
    return 0;
}