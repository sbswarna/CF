#include<bits/stdc++.h>
using namespace std;
long long a,i,n;
int main()
{
    cin>>n;
    long long odd=0;
    long long even=0,s=0;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        s=s+a;
        if(s%2==1)
            odd=1;
    }
    if(odd)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    return 0;
}

