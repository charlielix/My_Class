#include <bits/stdc++.h>
using namespace std;
int n=6;
int a[6][6];
int main()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j || i+j==5)
            {
                a[i][j]+=10;
            }
            cout<<setw(2)<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
