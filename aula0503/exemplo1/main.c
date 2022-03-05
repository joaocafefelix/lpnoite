#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario;
    printf("Digite o valor do salario \n");
    scanf("%lf", &salario);
    salario *= salario<=1000 ? 1.1 : 1.08;
    printf("Novo salario com aumento: %.2lf \n", salario);
    return 0;
}
