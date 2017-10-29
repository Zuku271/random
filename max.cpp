/**/

#include <iostream>

int main()
{
    int ilosc_Polimer_NEX[40] = {0};
    int lab = 0;
    int max = ilosc_Polimer_NEX[0];

    for (int i = 1; i < 40; ++i)
    {
        if (ilosc_Polimer_NEX[i] > max)
        {
            max = ilosc_Polimer_NEX[i];
            lab = i;
        }
    }

    return 0;
}