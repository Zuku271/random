/**/

#include <iostream>

std::ostream &operator<<(std::ostream &stream, const int tab[5])
{
    for (int i = 0; i < 5; ++i)
    {
        stream << tab[i] << ' ';
    }
    stream << '\n';
    return stream;
}

int main()
{
    int nr_seryjne[10] = {5,3,2,5,7,1,9,7,6,12};
    int p[5] = {0};
    int z = 0;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (nr_seryjne[i] == nr_seryjne[j])
            {
                p[z] = nr_seryjne[i];
                z += 1;
            }
        }
    }
    std::cout << p << '\n';
    return 0;
}