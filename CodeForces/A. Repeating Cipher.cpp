#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
int main()
{
    cin>>n;
    cin>>s;
    int p=0;
    for(int i=1; i<=n; i=i+p)
    {
        t.push_back(s[i-1]);
        p++;
    }
    cout<<t<<endl;
    return 0;
}
