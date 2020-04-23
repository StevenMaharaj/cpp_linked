// 8a3+15a2+6a−27b2c=1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int lhs(int a, int b, int c)
{
    return 8 * a * a * a + 15 * a * a + 6 * a - 27 * b * b * c;
}

void find_n_ct(int count)
{
    int n = 0;
    for (int a = 0; a < count; a++)
    {
        for (int b = 0; b < count; b++)
        {
            for (int c = 0; c < count; c++)
            {
                if ((a + b + c <= count) && (lhs(a, b, c) == 1))
                {
                    ++n;
                }
            }
        }
    }
    printf("%d\n", n);
}

int main()
{
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int n;
        scanf("%d", &n);
        find_n_ct(n);
    }

    return 0;
}
