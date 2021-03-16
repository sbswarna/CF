#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long>v;
int main()
{
    cin>>n;
    int cnt=0;
    for(int i=90;i>=1;i--)
    {
        int x=n-i;
        int sum=n-i;
        while(x>0)
        {
            sum+=(x%10);
            x=x/10;
        }
        if(sum==n)
        {
            v.push_back(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
            cout<<n-v[i]<<endl;
        else
            cout<<n-v[i]<<" ";
    }
    v.clear();
    main();
    return 0;
}
