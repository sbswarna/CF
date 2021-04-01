#include<bits/stdc++.h>
using namespace std;
int n,a[100004],b[100004],tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int dif,cntz=0,cntn=0,cntp=0;
        for(int i=0; i<n; i++)
        {
            dif=b[i]-a[i];
            if(dif==0)
                cntz++;
            else if(dif<0)
                cntn++;
            else
                cntp=dif;
        }
        if(cntz==n)
            cout<<"YES"<<endl;
        else if(cntn>0)
            cout<<"NO"<<endl;
        else
        {
            int cnt=0;
            vector<int>v;
            for(int i=0; i<n; i++)
            {
                if(b[i]-a[i]!=0)
                {
                    a[i]+=cntp;
                    v.push_back(i);
                }
            }
            int f=0;
            for(int i=1; i<v.size(); i++)
            {
                if(v[i]-v[i-1]!=1)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                cout<<"NO"<<endl;
            else
            {
                for(int i=0; i<n; i++)
                {
                    if(a[i]==b[i])
                        cnt++;
                }
                if(cnt==n)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
