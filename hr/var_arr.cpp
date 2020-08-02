#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3

int main() {
    int n = 0;
    int q = 0;
    // cin >> n; 
    // cin >> q;
    scanf("%d", &n);
    scanf("%d", &q);

    int vec_length;
    vector<vector<int>> arr( n , vector<int> (vec_length, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> vec_length;


        for (int j = 0; j < vec_length; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    int x;
    int y;
    for (int w = 0; w < q; w++)
    {
        
        cin >> x;
        cin >> y;
        printf("%d",arr[x][y]);
        // cout << arr[x][y] << endl;
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}