#include<bits/stdc++.h>
using namespace std;
int tst,n;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cin>>s;
        if(n==1)
            cout<<-1<<" "<<-1<<endl;
        else
        {
            int f=0,a=0,b=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='a')
                    a++;
                else
                    b++;
                if(a>0&&b>0)
                {
                    f=1;
                    cout<<i+1-min(a,b)<<" "<<i+1<<endl;
                    break;
                }
            }
            if(f==0)
                cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}
