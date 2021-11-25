#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
int main()
{
    int an,am,bn,bm,atot,btot;
    cout << "Enter the number of elements in first matrix"<< endl;
    cin >> atot;
    cout << "Enter the order of matrix(by space)" << endl;
    cin >> an >>  am;
    cout << "Enter the number of elements in second matrix" << endl;
    cin >> btot;
    cout << "Enter the order of matrix(by space)" <<endl;
    cin >> bn >>  bm;
    if(am==bn)
    {
    int a[an][am],b[bn][bm],multiply[an][am];
    cout << "Enter elements for A matrix" << endl;
    for(int i=0;i<an;i++)
    {
        cout << "Enter Elements of" << i << "row" << endl;
        for(int j=0;j<am;j++)
        {
            cin >> a[i][j];
         }
    }
    cout << "Enter elements for B matrix" << endl;
    for(int i=0;i<bn;i++)
    {
        cout << "Enter Elements of" << i << "row" << endl;
        for(int j=0;j<bm;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i=0;i< an;i++)
    {
        for(int j=0;j<bm;j++)
        {
            multiply[i][j]=0;
            for(int k=0;k<bm;k++)
            {
                multiply[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
     for(int i=0;i< an;i++)
        {
            for(int j=0;j< bm;j++)
            {
                cout << multiply[i][j] << " ";
            }
            cout << endl;
        }
     }
    else {
    cout <<"Multiplication of matrix is invalid"<< endl;
    }
    
     
    return 0;
}