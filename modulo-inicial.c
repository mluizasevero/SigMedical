#include <stdio.h>
#include <stdlib.h>

// módulo de consultas

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

// módulo de estoques

void TelaMenuEstoque() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///          Módulo Estoque          ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///     1. Cadastrar Produto           ///\n");
    printf("///     2. Pesquisar Produto           ///\n");
    printf("///     3. Gerenciar Lotes             ///\n");
    printf("///     4. Movimentar Estoque          ///\n");
    printf("///     5. Gerar Relatórios            ///\n");
    printf("///     0. Voltar ao Menu Principal    ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf(">>> Escolha a opção desejada: ");
}

void TelaCadastrarProduto() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///        Cadastrar Produto         ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    ID do Produto:                  ///\n");
    printf("///    Nome do Produto:                ///\n");
    printf("///    Quantidade:                     ///\n");
    printf("///    Data de Validade:               ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf("\n");
}

void TelaPesquisarProduto() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///       Pesquisar Produto          ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    Informe o ID do produto:        ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf("\n");
}

void TelaAlterarProduto() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///        Alterar Produto           ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    Informe o ID do produto:        ///\n\n");
    printf("///    Novo Nome do Produto:           ///\n");
    printf("///    Nova Quantidade:                ///\n");
    printf("///    Nova Data de Validade:          ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf("\n");
}

void TelaExcluirProduto() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///        Excluir Produto           ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    Informe o ID do produto:        ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf("\n");
}

void TelaConfirmarExclusaoProduto() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///      Confirmar Exclusão?         ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    1. Sim (S/s)                    ///\n");
    printf("///    2. Nao (N/n)                    ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf(">>> Escolha a opção desejada: ");
}

void TelaGerenciarLotes() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///       Gerenciar Lotes          ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    1. Visualizar Lotes             ///\n");
    printf("///    2. Adicionar Lote               ///\n");
    printf("///    3. Remover Lote                 ///\n");
    printf("///    0. Voltar                       ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf(">>> Escolha a opção desejada: ");
}

void TelaMovimentarEstoque() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///      Movimentar Estoque          ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    1. Saída de Material            ///\n");
    printf("///    2. Entrada de Material          ///\n");
    printf("///    0. Voltar                       ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf(">>> Escolha a opção desejada: ");
}

void TelaGerarRelatoriosEstoque() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///       Gerar Relatórios           ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    1. Itens em Falta               ///\n");
    printf("///    2. Itens com Validade Próxima   ///\n");
    printf("///    3. Histórico de Movimentações   ///\n");
    printf("///    0. Voltar                       ///\n");
    printf("///                                    ///\n");
    printf("----------------------------------------\n");
    printf(">>> Escolha a opção desejada: ");
}