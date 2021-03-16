#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=sqrt(n)+1;i>=0;i--)
    {
        if(n%i==0)
        {
            cout<<min(i,n/i)<<" "<<max(i,n/i)<<endl;
            break;
        }
    }
    return 0;
}
