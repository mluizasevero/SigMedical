#include <stdio.h>
#include <stdlib.h>

void TelaMenuEstoque() {
    system("cls");
    printf("----------------------------------------\n");
    printf("///          Módulo Estoque          ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///     1. Cadastrar Produto           ///\n");
    printf("///     2. Pesquisar Produto           ///\n");
    printf("///     3. Gerenciar Lotes             ///\n\n");
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
    printf("///        Pesquisar Produto         ///\n");
    printf("----------------------------------------\n");
    printf("///                                    ///\n");
    printf("///    1. Pesquisar por ID             ///\n");
    printf("///    2. Pesquisar por Nome           ///\n");
    printf("///    0. Voltar                       ///\n");
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

int main() {
    TelaMenuEstoque();
    return 0;
}