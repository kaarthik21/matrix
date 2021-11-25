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
    cout << "Enter the order of matrix(by space)"<< endl;
    cin >> an >>  am;
    cout << "Enter the number of elements in second matrix"<< endl;
    cin >> btot;
    cout << "Enter the order of matrix(by space)"<< endl;
    cin >> bn >>  bm;
    if(an!=bn||am!=bm)
    {
        cout << "Order is not equal"<< endl;
        exit(0);
    }
    else {
    int a[an][am],b[bn][bm],sum[an][am];
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
            for(int j=0;j< am;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
        for(int i=0;i< an;i++)
        {
            for(int j=0;j< am;j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
     
    return 0;
}