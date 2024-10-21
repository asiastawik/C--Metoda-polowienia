#include <math.h>
#include <stdio.h>

double my_sin(double x)  //musi byc my_sin zamiast sin bo wtedy funkcja wywo³uje sam¹ siebie
{
    return sin(x / 180. * 3.14);
    // x to tylko nazwa, tak nazywa ja pracownik (funkcja), pracodawca (main) ma to w dupie
}

//pojawia sie polowienie w funkcji sin wiec program sprawdza to nizej (glowna funkcja)

double polowienie(double a, double b, double E) //tu bez poczatkowych deklaracji wartosci jak a=5, jezyk c na to nie pozwala

{
    double c;  //inne c, nie to co w funkcji main

    //wersja z metoda polowienia z uzyciem dwoch funkcji

    while ( b - a > E )
    {
         c = ( a + b ) / 2;

        if ( my_sin(c) == 0.0 )
            return c;

        if ( my_sin(a) * my_sin(c) < 0 )  //jesli jest mniejsza od 0 to chodzi nam o ten przedzial
            b = c;                  // od teraz b jest c (zmniejszony przedzial) i patrzymy na przedzial ac
        else
            a = c;                  //jesli jest wieksze od 0 (wyzej) to bierzemy pod uwage drugi przedzial czyli bc
    }
    return c = ( a + b ) / 2; //zwraca c do main

    //wersja rekurencyjna

  /*  c = (a+b)/2;

    if (b-a <= E)
        return c;

   if ( my_sin(a) * my_sin(c) < 0 )
    return polowienie(a, c, E);
else
    return polowienie(c, b, E);*/
}

int main() //wszystkie funkcje mysin i polowienie musza byc zadeklarowane przed main
            //cala funkcja main wykonuje sie najpierw
{
    //podanie wartosci vv

    /*double z;

z = polowienie(1.0, 5.0, 0.0001);  //nadanie wartosci a, b, E funkcji polowienie */

 // podanie wartosci przez uzytkownika

double a, b, z;
printf("Podaj a ");
scanf("%lf", &a);  //long float, bo double jest w scanf
printf("Podaj b ");
scanf("%lf", &b);
z = polowienie(a, b, 0.00000001);


// dotad jest wykonywane najpierw ^^^

//czwarty krok vvv

printf("Miejscem zerowym funkcji jest %f\n", z); //dla double jest %f
return 0;
}
