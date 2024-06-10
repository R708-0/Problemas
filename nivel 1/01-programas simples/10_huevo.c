#include <stdio.h>
#include <math.h>

int main(void)
{
    // declarar variables constantes
    double m = 47;
    double p = 1.038;
    double c = 3.7;
    double k = 5.4e-3;
    double tw = 100.0;
    double ty = 69.0;
    double pi = 3.14159265358979323846;
    // pedir temperatura inicial
    double to;
    printf("Temperatura inicial del huevo en °C: ");
    scanf("%lf", &to);

    // formula del huevo
    double ti = log(0.76 * (to - tw) / (ty - tw));
    double t = (pow(m, 2.0 / 3.0) * c * pow(p, 1.0 / 3.0)) / (k * pow(pi, 2.0) * pow((4 * pi / 3.0), 2.0 / 3.0) * ti);

    // devolver el tiempos
    printf("El huevo tiene que hervir %lf segundos (%.2lf minutos) para quedar cocido a la copa", t, t / 60);
}