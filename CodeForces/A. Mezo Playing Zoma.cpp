#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
long long l,r;
int main()
{
    cin>>n;
    cin>>s;
    l=0,r=0;
    for(long long i=0;i<n;i++)
    {
        if(s[i]=='L')
            l++;
        else
            r++;
    }
    cout<<l+r+1<<endl;
    return 0;
}
