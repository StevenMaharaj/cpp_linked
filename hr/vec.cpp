#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int q;
    int k;
    scanf("%d %d", &n, &q);
    vector<int> *a[n];
    // read in 
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> temp[j];
        }
        a[i] = &temp;
    }
    // quiy
    int i;
    int j;
    vector<int> t;
    for (int s = 0; s < q; s++)         
    {
        scanf("%d %d",&i,&j);
        t = *a[i];
        printf("%d",t[j]);
    }
    
    return 0;
}