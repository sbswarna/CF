#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>n>>k;
    if(k==0)
    {
        cout<<n<<endl;
        for(int i=1;i<=n;i++)
        {
            if(i!=n)
                cout<<i<<" ";
            else
                cout<<i<<endl;
        }
    }
    else
    {
        cout<<n/k<<endl;

    }
}
