#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    double salario;
    printf("Digite o salario atual \n");
    scanf("%lf", &salario);
    fflush(stdin); //windows
    //__fpurge(stdin); //linux
    printf("Digite f (feminino) ou m (masculino) \n");
    sexo = getchar();
    switch(sexo){
        case 'f':
        case 'F':
            salario *= 1.10;
            break;
        default:
            printf("aumento para as mulheres, apenas\n");
    }
    printf("Salario atual: %.2lf \n", salario);
    return 0;
}
