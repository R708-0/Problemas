// Escriba un programa que pida al usuario una cadena, y entregue la cadena invertida:
#include <stdio.h>

int main(void)
{

   char nombre[10];
   printf("Cual es tu nombre?: ");
   scanf("%s", &nombre);

   int n = 0;
   while (nombre[n] != '\0')
   {
      n++;
   }

   printf("%s\n", nombre);
   printf("%d caracteres\n", n);

   char ni[n];
   int y = n - 1;
   for (int i = 0; i <= n; i++)
   {

      ni[i] = nombre[y];
      y--;
   }
   printf("%s", ni);
}