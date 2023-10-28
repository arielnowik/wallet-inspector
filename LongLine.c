#include <stdio.h>

int main() {
    //Variables de entrada
    int n, h0, a, c, q;

    //Variables de calculo
    int h1;
    int contTotal = 0;
    int cont = 0;
    int j;


    //Tomamos los valores ingresado por parametro
    scanf("%d %d %d %d %d", &n, &h0, &a, &c, &q);

    j = h0;

    //Iteramos hasta completar la fila o cuando rompamos una restriccion
    for (int i = 0; i < n - 1; i++)
    {
        h1 = ((a * h0) + c) % q;


        if (h1 > h0)
        {
            if (j < h1)
            {
                j = h1;
            }
            contTotal++;
            cont = 0;
        } else
        {
            cont++;
            contTotal += cont;
        }
        h0 = h1;
    }

    printf("%d", contTotal);
    return 0;
}
