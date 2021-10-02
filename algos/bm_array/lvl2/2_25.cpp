//Spirally traversing a matrix
//Given a matrix of size r*c. Traverse the matrix in spiral form.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    vector<int> spiralTraverse(vector<vector<int>> matrix, int r, int c)
    {
        vector<int> res;
        int top = 0;
        int bottom = r - 1;
        int left = 0;
        int right = c - 1;
        int dir = 0;
        while (top <= bottom && left <= right)
        {
            if (dir == 0)
            {
                //traverse (->) top row
                for (int i = left; i <= right; i++)
                {
                    res.push_back(matrix[top][i]);
                }
                top++;
                dir = 1;
            }
            else if (dir == 1)
            {
                //traverse (|)
                //traverse (V) right column
                for (int i = top; i <= bottom; i++)
                {
                    res.push_back(matrix[i][right]);
                }
                right--;
                dir = 2;
            }
            else if (dir == 2)
            {
                //traverse (<-) bottom row
                for (int i = right; i >= left; i--)
                {
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
                dir = 3;
            }
            else if (dir == 3)
            {
                //traverse (∧) left column
                //traverse (|)
                for (int i = bottom; i >= top; i--)
                {
                    res.push_back(matrix[i][left]);
                }
                left++;
                dir = 0;
            }
        }
        return res;
    }
};
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r);
    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    solution ob;
    vector<int> res = ob.spiralTraverse(matrix, r, c);
    for (const auto &e : res)
    {
        cout << e << " ";
    }
    return 0;
}