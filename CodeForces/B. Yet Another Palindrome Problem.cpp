#include<bits/stdc++.h>
using namespace std;
int tst,a[5003],n;
vector<int>v;
int main()
{
    cin>>tst;
    while(tst--)
    {
        v.clear();
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int f1=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                int f=0;
                v.push_back(a[j]);
                if(v.size()>=3)
                {
                    /*for(int k=0;k<v.size();k++)
                        cout<<v[k]<<" ";
                    cout<<endl;*/
                    for(int k=0,l=v.size()-1; k<v.size(),l>=0; k++,l--)
                    {
                        if(v[k]!=v[l])
                        {
                            f=1;
                            break;
                        }
                    }
                    if(f==0)
                    {
                        f1=1;
                        break;
                    }
                }
            }
            if(f1==1)
                break;
            v.clear();
        }
        if(f1==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
