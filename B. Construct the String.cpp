#include<bits/stdc++.h>
using namespace std;
string s;
int tst,n,a,b;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>a>>b;
        s.clear();
        while(s.size()<n)
        {
            int cnt=0;
            for(int i=1;i<=a;i++)
            {
                s.push_back(cnt+'a');
                cnt++;
                if(cnt==b)
                    cnt=0;
                if(s.size()==n)
                    break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
