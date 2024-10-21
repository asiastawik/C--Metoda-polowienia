#include <stdio.h>
int main()
{
    int D[] = {10,9,8,7,6,5,4,3,2,1,0}; //gdy rozmiar tablicy jest okreœlony jako „zmienny” D[N] — nie mo¿na nadawaæ tablicy wartoœci pocz¹tkowych.
    //Zatem albo trzeba „na sztywno” okreœliæ ten rozmiar (D[11]) albo pozostawiæ to miejsce puste
    int n = sizeof( D ) / sizeof( int );
    int X;

    printf("Podaj liczbe od 0 do 10 ktora chcesz wyszukac: ");
    scanf("%d", &X);

    int A, B, C;
    A = 0;
    B = n - 1;

    if (X>B || X<A)
    printf("Nie znaleziono elementu");

    else
    {
        C=(A+B)/2;

        while ( X != D[C])
        {
            if ( X<D[C] )
            A = C+1;
            else
            B = C-1;

            C=(A+B)/2;
        }

    printf("Odnaleziono szukany element %d pod indeksem D[%d]", X, C);
    printf("\n A=%d ; C=%d ; B=%d ; X=%d", A, C, B, X); //to tylko do wyświetlenia wartosci, aby zobaczyc, czy dziala
    }

return 0;
}
