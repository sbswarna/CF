#include<bits/stdc++.h>
using namespace std;
string st;
int a=0,B=0,b=0,u=0,l=0,r=0,s=0;
int main()
{
    cin>>st;
    if(st.size()<9)
        cout<<0<<endl;
    else
    {
        int n=0,flag=0,k;
        for(int i=0; i<st.size(); i++)
        {
            if(st[i]=='B')
                B++;
            else
            {
                if(st[i]=='a')
                    a++;
                else if(st[i]=='b')
                    b++;
                else if(st[i]=='l')
                    l++;
                else if(st[i]=='s')
                    s++;
                else if(st[i]=='r')
                    r++;
                else if(st[i]=='u')
                    u++;
            }
        }
        //cout<<B<<" "<<a<<" "<<b<<" "<<s<<" "<<l<<" "<<r<<" "<<u<<endl;
        for(k=B; k>=1; k--)
        {
            if(a>=2*k&&b>=k&&l>=k&&u>=2*k&&r>=k&&s>=k)
            {
                n++;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
