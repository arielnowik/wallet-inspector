#include <stdio.h>
#include <math.h>

int digitalizador (int a);
int happyNumber (int a);

int main() {
    int a, b;
    int cont = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        cont += happyNumber(i);
    }
    printf("%d", cont);

    return 0;
}


int digitalizador (int a)
{
    int retorno = 0;

    while (a > 0)
    {
        retorno = retorno + pow((a%10), 2);
        a = a/10;
    }

    return retorno;
}

int happyNumber (int a)
{
    int retorno = 0;
    int num = a;
    int i = 0;
    if (a == 1)
    {
        retorno = 1;
    } else
    {
        while (i < 10)
        {
            a = digitalizador(a);
            i++;
            if (a == 1)
            {
                retorno = 1;
                break;
            } else
            {
                if (a == num)
                {
                    break;
                }
            }
        }
    }
    return retorno;
}
