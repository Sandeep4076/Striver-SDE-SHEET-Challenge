#include <bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int x = n - 1; 
    int y = m - 1; 
    int a = 0;     
    int b = 0;     
    int k = 0;
    int res = 0;
    int i = 0;
    int j = 0;
    while (b < x && a < y)

    {

        res = mat[b][a];

        for (i = a + 1; i <= y; i++)

        {

            k = mat[b][i];

            mat[b][i] = res;

            res = k;
        }

        b++;

        for (i = b; i <= x; i++)

        {

            k = mat[i][y];

            mat[i][y] = res;

            res = k;
        }

        y--;

        for (i = y; i >= a; i--)

        {

            k = mat[x][i];

            mat[x][i] = res;

            res = k;
        }

        x--;

        for (i = x; i >= b; i--)

        {

            k = mat[i][a];

            mat[i][a] = res;

            res = k;
        }

        a++;

        mat[b - 1][a - 1] = res;
    }
}
