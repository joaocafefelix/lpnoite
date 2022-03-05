#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioBruto, impostoPagar;
    char estadoCivil;
    printf("Digite o salario bruto: \n");
    scanf("%lf", &salarioBruto);
    //fflush(stdin) // windows
    __fpurge(stdin); //linux
    printf("Digite c (casado) s (solteiro) ou o (outros) \n");
    estadoCivil = getchar();
    switch(estadoCivil){
        case 's':
        case 'S':
            impostoPagar = salarioBruto * 0.1;
            break;
        case 'c':
        case 'C':
            impostoPagar = salarioBruto * 0.09;
            break;
        default:
            impostoPagar = 0;
    }
    if(impostoPagar){
        printf("Imposto a pagar: %8.2lf \n", impostoPagar);
    }else{
        printf("Calculo de imposto apenas para solteiros ou casados \n");
    }
    return 0;
}
