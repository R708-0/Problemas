#include <stdio.h>

int main(void)
{
  // pedir nota c1,c2,nl
  float c1, c2, c3, nl;
  float nc, nf;
  printf("Ingrese las notas c1: ");
  scanf("%f", &c1);
  printf("Ingrese las notas c2: ");
  scanf("%f", &c2);
  printf("Ingrese las notas nl: ");
  scanf("%f", &nl);
  // calcular promedios
  c3 = 0;
  nc = (c1 + c2 + c3) / 3;
  nf = nc * 0.7 + nl * 0.3;
  // calcular nota deseada
  while (nf < 59.5)
  {
    c3 += 1;
    nc = (c1 + c2 + c3) / 3;
    nf = nc * 0.7 + nl * 0.3;
  }

  // imprimir respuesta
  printf("La nota necesaria en tu siguiente examen para aprobar es: %.1f", c3);
}