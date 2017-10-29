/**/

#include <iostream>

int main()
{
    int odleglosci[10] = {5,7,3,11,6,19,17,22,13,8};
    int min, max;

    bool isModified = true;
    int tmp;
    while (isModified)
    {
        isModified = false;
        for (int i = 0; i < 9; ++i)
        {
            if (odleglosci[i] > odleglosci[i+1])
            {
                tmp = odleglosci[i];
                odleglosci[i] = odleglosci[i+1];
                odleglosci[i+1] = tmp;
                isModified = true;
            }
        }
    }
    min = odleglosci[0];
    max = odleglosci[9];

    std::cout << min << ' ' << max << '\n';
    return 0;
}