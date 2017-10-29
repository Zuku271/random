/**
* Calculates fibonacci sequence.
*/

#include <iostream>

int main()
{

    int n = 10;
    int f7;
    int fn1 = 1, fn2 = 0;
    int fn;

    for (int i = 2; i <= 7; ++i)
    {
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
    }
    
    f7 = fn;
    
    fn1 = 1;
    fn2 = 0;
    for (int i = 2; i <= n; ++i)
    {
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
    }

    std::cout << f7 << ' ' << fn << '\n';
    return 0;
}