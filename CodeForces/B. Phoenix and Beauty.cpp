#include<bits/stdc++.h>
using namespace std;
int tst,n,k,a[105];
set<int>st;
vector<int>v;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        if(k==n)
        {
            cout<<n<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(st.size()>k)
            {
                cout<<-1<<endl;
            }
            else
            {
                set<int>::iterator it;
                int cnt=0;
                for(int i=1;i<=10000;i++)
                {
                    for(it=st.begin(); it!=st.end(); it++)
                    {
                        v.push_back(*it);
                        if(v.size()==10000)
                            break;
                    }
                    if(v.size()==10000)
                        break;
                }
                cout<<v.size()<<endl;
                for(int i=0;i<v.size();i++)
                    cout<<v[i]<<" ";
                cout<<endl;
            }
        }
        st.clear();
        v.clear();
    }
    return 0;
}
