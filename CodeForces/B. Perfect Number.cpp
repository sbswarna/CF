#include<bits/stdc++.h>
using namespace std;
long long n,i,j,k,x;
vector<long long>v;
int main()
{
    k=2;
    for(i=19; i<=10800101; i=i+9)
    {
        stringstream ss;
        ss<<i;
        string s=ss.str();
        long long sum=0;
        for(j=0; j<s.size(); j++)
        {
            sum+=(s[j]-48);
        }
        if(sum==10)
        {
            //cout<<"i="<<i<<endl;
            v.push_back(i);
        }
        else
        {
            long long h=sum-10;
            i=(i-9)+(log10(sum)*h);
        }
    }
    cin>>n;
    cout<<v[n-1]<<endl;
    return 0;
}
