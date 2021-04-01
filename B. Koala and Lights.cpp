#include<bits/stdc++.h>
using namespace std;
int n,a[105],b[105];
string s;
int main()
{
    cin>>n;
    cin>>s;
    vector<int>v[104];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=500;j++)
        {
            v[i].push_back(0);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=b[i];j<=500;j+=a[i])
        {
            v[i][j]=1;
        }
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<=500;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }*/
    int mx=-1;
    for(int i=0;i<=500;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(v[j][i]==1)
            {
                if(s[j]=='1')
                    s[j]='0';
                else
                {
                    s[j]='1';
                }
            }
        }
        //cout<<s<<endl;
        for(int j=0;j<n;j++)
            if(s[j]=='1')
            cnt++;
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
    return 0;
}
