#include <stdio.h>

int main() {
    //Variables de entrada
    int n, h0, a, c, q;

    //Variables de calculo
    int h1;
    int contTotal = 0;
    int cont = 0;

    //Tomamos los valores ingresado por parametro
    scanf("%d %d %d %d %d", &n, &h0, &a, &c, &q);

    //Iteramos hasta completar la fila
    for (int i = 0; i < n; i++)
    {
        h1 = ((a * h0) + c) % q;
        if (h1 > h0)
        {
            contTotal++;
            contTotal += cont;
        } else
        {
            cont++;
        }
        h0 = h1;
    }

    contTotal += cont;

    printf("%d", contTotal);
    return 0;
}
