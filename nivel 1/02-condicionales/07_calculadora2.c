#include <stdio.h>
#include <stdlib.h>

// declarar funciones
int validar_dato(char *s, void *n);
int validar_operacion(char *c);
void limpiar_buffer();

int main(void)
{

    float n1, n2;
    // numero1
    do
    {

        printf("Dame un numero: ");

    } while (validar_dato("%f", &n1));

    // operaciones
    char operacion;
    do
    {

        printf("Escoge la operacion (/,x,+,-): ");
        scanf("%s", &operacion);

    } while (validar_operacion(operacion));

    // numero2
    do
    {
        printf("Dame otro numero: ");

    } while (validar_dato("%f", &n2));

    // resultado
    if (operacion == '/')
    {
        printf("%.1f / %.1f = %.1f", n1, n2, (n1 / n2));
    }
    if (operacion == 'x')
    {
        printf("%.1f x %.1f = %.1f", n1, n2, (n1 * n2));
    }
    if (operacion == '+')
    {
        printf("%.1f + %.1f = %.1f", n1, n2, (n1 + n2));
    }
    if (operacion == '-')
    {
        printf("%.1f - %.1f = %.1f", n1, n2, (n1 - n2));
    }
}

// funcion para validar el tipo de dato
int validar_dato(char *s, void *n)
{
    if (scanf(s, n) == 1)
    {
        limpiar_buffer();
        return 0;
    }
    else
    {
        limpiar_buffer();
        return 1;
    }
}

int validar_operacion(char *c)
{
    if (c == '/')
    {
        limpiar_buffer();
        return 0;
    }

    else if (c == 'x')
    {
        limpiar_buffer();
        return 0;
    }

    else if (c == '+')
    {
        limpiar_buffer();
        return 0;
    }

    else if (c == '-')
    {
        limpiar_buffer();
        return 0;
    }
    else
    {
        limpiar_buffer();
        return 1;
    }
}
void limpiar_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}