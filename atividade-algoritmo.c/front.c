#include <stdio.h>
#include "front.h"

void escreveMenu()
{
    printf("Menu:\n");
    printf("1. Cadastrar\n");
    printf("2. Consulta de Estoque\n");
    printf("3. Registro de Vendas\n");
    printf("4. Produtos que precisam de reabastecimento\n");
    printf("5. Entrada de mercadorias\n");
    printf("6. Faturar vendas\n");
    printf("7. Sair\n");
}

int cadastrarProdutos(char nome[10][100], float preco[10], int quant[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Nome: %s\n", nome[i]);
        scanf("%s", nome[i]);

        printf("quantidade %d:\n", i + 1);
        scanf("%d", &quant[i]);

        printf("Preco: %.2f\n", preco[i]);
        scanf("%f", &preco[i]);
    }
    return 0;
}

int consultarEstoque(char nome[10][100], float preco[10], int quant[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Nome: %s\n", nome[i]);
        printf("quantidade %d:\n",quant[i]);
        printf("Preco: %.2f\n", preco[i]);
    }
    return 0;
}

int registrarVendas(char nome[10][100], int quant[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Nome: %s\n", nome[i]);
        printf("quantidade %d:\n", quant[i]);
    }
    return 0;
}

int reposicaoProdutos(char nome[10][100], int quant[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (quant[i] < 5)
        {
            printf("Produto %s precisa de reposicao. Quantidade atual: %d\n", nome[i], quant[i]);
        }
    }
}

int entradaMercadorias(char nome[10][100], int quant[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Nome: %s\n", nome[i]);
        printf("quantidade %d:\n", quant[i]);
        printf("\n");
    }
}

int faturarVendas(char nome[10][100], float preco[10], int quant[10])
{
    float total = 0;
    for (int i = 0; i < 10; i++)
    {
        total = 0;
        total += preco[i] * quant[i];
        printf("produto: %s:", nome[i]);
        printf("Faturamento total: %.2f\n", total);
    }
    return 0;
}