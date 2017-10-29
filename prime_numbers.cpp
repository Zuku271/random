/**/

#include <iostream>

int main()
{
    int pierwsze[5];
    int k = 0;

    for (int i = 3;  i< 15; ++i)
    {
        int dzielnik = 2;
        bool isPrime = true;
        while (i - 1 >= dzielnik)
        {
            if (i % dzielnik == 0)
            {
                isPrime = false;
                break;
            }
            dzielnik += 1;
        }
        if (isPrime)
        {
            pierwsze[k] = i;
            k = (k < 5) ? k+1: 0;
        }
        isPrime = true;
    }
    std::cout << pierwsze[0] << '\n';
    return 0;
}