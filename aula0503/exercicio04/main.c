#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estadoCivil;
    double salario, imposto;
    printf("Digite o valor do salario atual: \n");
    scanf("%lf", &salario);
    __fpurge(stdin); //linux
    printf("Digite o sexo f (feminino) ou m (masculino) \n");
    estadoCivil = getchar();
    switch(estadoCivil){
        case 'f':
        case 'F':
            imposto = salario * 0.10;
            break;
        case 'm':
        case 'M':
            imposto = salario * 0.15;
            break;
        default:
            imposto = 0;
    }
    if(imposto){
        printf("Valor do imposto a pagar: %8.2lf \n", imposto);
    }else{
        printf("Imposto para homens ou mulheres, verifique o sexo...\n");
    }
    return 0;
}
