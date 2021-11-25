#include <iostream>
#include <vector>
using namespace :: std;
int main()
{
    int n,row,col;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    cout  << "Enter the order of matrix " << endl;
    cin >> row >> col;
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j< col;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i < col;i++)
    {
        for(int j=0;j< row;j++)
        {
            cout  << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}