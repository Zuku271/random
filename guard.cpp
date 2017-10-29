/**/

#include <iostream>

int main()
{
    int x = 5;
    int hegexy[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, x};
    bool znaleziono = false;
    
    hegexy[10] = 5;
    /*
    for (int i=0; i< 10; ++i)
    {
        if (hegexy[i] == 5)
        {
            znaleziono = true;
            break;
        }
        else
            znaleziono = false;
    }
    */
    int i = 0;
    while (1)
    {
        if (hegexy[i] == 5)
        {
            znaleziono = (i == 10) ? false : true;
            break;
        }
        else
            znaleziono = false;
        i++;
    }
    std::cout << znaleziono << '\n';
    return 0;
}