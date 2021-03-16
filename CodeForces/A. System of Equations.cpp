#include<bits/stdc++.h>
using namespace std;
int n,m,c;
int main()
{
    cin>>n>>m;
    c=0;
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=1000;j++)
        {
            if((i*i)+j==n&&i+(j*j)==m)
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
