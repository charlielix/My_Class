#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,x,y;
    cin>>n>>i>>j;
    
    for(x=1,y=i;x<=n;x++)
        cout<<'('<<y<<','<<x<<')'<<' ';
    cout<<endl;
    
    for(y=1,x=j;y<=n;y++)
        cout<<'('<<y<<','<<x<<')'<<' ';
    cout<<endl;
    
    for(y=1,x=j-(i-1);x<=n && y<=n;x++,y++)
    {
        if(x<=0||y<=0)
            continue;
        cout<<'('<<y<<','<<x<<')'<<' ';
    }
    cout<<endl;
    
    for(x=1,y=i+(j-1);x!=0 && y!=0;x++,y--)
    {
        if(x>n||y>n)
            continue;
        cout<<'('<<y<<','<<x<<')'<<' ';
    }
    cout<<endl;
    
    return 0;
}
