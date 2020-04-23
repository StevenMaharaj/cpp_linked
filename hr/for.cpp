#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    for (int n = a; n < b + 1; n++)
    {
        if (n == 1)
        {
            puts("one");
        }
        else if (n == 2)
        {
            puts("two");
        }
        else if (n == 3)
        {
            puts("three");
        }
        else if (n == 4)
        {
            puts("four");
        }
        else if (n == 5)
        {
            puts("five");
        }
        else if (n == 6)
        {
            puts("six");
        }
        else if (n == 7)
        {
            puts("seven");
        }
        else if (n == 8)
        {
            puts("eight");
        }
        else if (n == 9)
        {
            puts("nine");
        }

        else if ((n > 9) && (n % 2 == 0))
        {
            puts("even");
        }
        else if ((n > 9) && (n % 2 == 1))
        {
            puts("odd");
        }
    }

    return 0;
}