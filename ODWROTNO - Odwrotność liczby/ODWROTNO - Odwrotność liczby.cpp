#include <iostream>
#include <cstdio>
using namespace std;

struct triple //struktura "trójka"
{
        int d, x, y;
        triple() { } // pusty konstruktor
        triple( int a, int b, int c )
        {
                d = a; x = b; y = c;
        }
};
triple ext_euclid( int a, int b )
{
        if( b == 0 )
                return triple( a, 1, 0 );
        //jeœli b = 0 to gcd( a, b) = a = 1 * a + 0 * b
        triple tmp = ext_euclid( b, a % b );
        //wywo³ujemy to tak jak w zwyk³ym algorytmie euklidesa i budujemy trójkê ( d, x', y')
        triple do_zwrotu(tmp.d, tmp.y, tmp.x - (a / b) * tmp.y);
        //zwracamy trójkê ( d = gcd( a. b ), x, y ) = ( d, y', x' - ( a / b ) * y')
        //x = y' i y = x' - ( a / b) * y' gdy¿ wczeœniej braliœmy modulo i teraz musimy wróciæ piêtro wy¿ej w rekursji
        return do_zwrotu;
}
int main()
{
        triple wynik;
        int a, b, x, y, d;
        scanf("%d %d", &a, &b);
        wynik = ext_euclid( a, b);
        d = wynik.a;
        x = wynik.b;
        y = wynik.c;
        printf("%d = %d * %d + %d * %d\n", d, a, x, b, y);
}
