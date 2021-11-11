#include <iostream>

using namespace std;

int main()
{
    int tab[ 10 ] = { 6, 35, 32, 75, 6, 27, 55, 9, 6, 79 };
   
    cout << "Wyszukanie MIN i MAX elementu w tablicy oraz jego indexu.\n" << endl;
    int minn, maks = tab[ 0 ];
    int index = 0;
    for( int i = 1; i < sizeof( tab ) / sizeof( int ); i++ )
    {
        if( tab[ i ] <= minn )
        {
            minn = tab[ i ];
            index = i;
        }
        else if( tab[ i ] >= maks )
        {
            maks = tab[ i ];
            index = i;
        }
    }
    
    for( int i = 0; i <= sizeof( tab ) / sizeof( int ); i++ )
    {
        if( tab[ i ] == minn )
        {
            i == index;
            cout << "Najmniejsza wartosc w tablicy to: " << minn << " indeksy: " << i << endl;
        }
        if( tab[ i ] == maks )
        {
            i == index;
            cout << "Najwieksza wartosc w tablicy to: " << maks << " indeksy: " << i << endl;
        }
    }
    return 0;
}