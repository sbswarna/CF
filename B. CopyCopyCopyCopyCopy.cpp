#include<bits/stdc++.h>
using namespace std;
long long tst,a,n;
set<long long>st;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
           st.insert(a);
        }
        cout<<st.size()<<endl;
        st.clear();
    }
}
