#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario;
    printf("Digite o valor atual do ordenado anual \n");
    scanf("%lf", &salario);
    salario *= salario > 1000 ? 1.05 : 1.07;
    printf("Novo ordenado anual: %8.2lf \n", salario);
    return 0;
}
