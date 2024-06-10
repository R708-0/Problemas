#include <stdio.h>
// Para ganar un set, un jugador debe ganar 6 juegos.
// pero además debe haber ganado por lo menos dos juegos más que su rival.
// Si el set está empatado a 5 juegos, el ganador es el primero que llegue a 7.
// Si el set está empatado a 6 juegos, el set se define en un último juego, en cuyo caso el resultado final es 7-6.

int main(void)
{
    // Pedir datos.
    int ja, jb;
    printf("Juegos ganados por A: ");
    scanf("%d", &ja);
    printf("Juegos ganados por B: ");
    scanf("%d", &jb);

    // Para ganar un set, un jugador debe ganar 6 juegos.
    if (ja >= 6 || jb >= 6)
    {
        // pero además debe haber ganado por lo menos dos juegos más que su rival.
        if (ja - jb >= 2)
        {
            printf("Gano A\n");
        }
        else if (jb - ja >= 2)
        {
            printf("Gano B\n");
        }
        else
        {
            printf("Todavia no termina\n");
        }
    }
    else
    {
        printf("Todavia no termina\n");
    }

    // Si el set está empatado a 5 juegos, el ganador es el primero que llegue a 7.

    // Si el set está empatado a 6 juegos, el set se define en un último juego, en cuyo caso el resultado final es 7-6.
}