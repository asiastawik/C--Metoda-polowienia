#include <stdio.h>
#include <math.h>

double funkcja(double x)
{
    return sin(x / 180. * 3.14);
}

int main()
{
    double a, b, c, e;
    a = 30.;
    b = 220.;
    e = 0.001;
    while (b - a >= e)
        {
            c = (b + a) / 2.;
            if (funkcja(a) * funkcja(c) <= 0)
            {
                b = c;
            }
            else if (funkcja(b) * funkcja(c) <= 0)
            {
                a = c;
            }
            else
            {
                printf("W podanym przedziale nie ma miejsc zerowych ");
            }
        }
    printf("%f", c);
    return 0;
}
