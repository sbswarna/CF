#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main()
{
    cin>>n>>k;
    if(n>=k)
        cout<<1<<endl;
    else
    {
        if(k%n==0)
        {
            cout<<k/n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}
