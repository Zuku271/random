/**/

#include <iostream>
#include <ctime>


std::ostream &operator<<(std::ostream &stream, const int tab[5])
{
    for (int i = 0; i < 10; ++i)
    {
        stream << tab[i] << ' ';
    }
    stream << '\n';
    return stream;
}

int main()
{
    srand( time( NULL ) );
    
    int aktualne_wypelnienie = 0;
    int i=0;
    int pojemnosc = 10;
    int androidy[10] = {0};

    while (1)
    {
        int android = rand() % 6 + 1;
        if (android < 4 && (aktualne_wypelnienie + android) <= pojemnosc)
        {
            androidy[i] = android;
            i++;
            aktualne_wypelnienie += android;
            if (aktualne_wypelnienie == pojemnosc)
                break;
        }
    }
    std::cout << androidy << '\n';
    return 0;
}