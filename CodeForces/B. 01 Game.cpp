#include<bits/stdc++.h>
using namespace std;
string s,t;
int tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        int cnt=0,a=0,b=0,f;
        while(true)
        {
            f=0;
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]!=s[i+1])
                {
                    s.erase(i,2);
                    cnt++;
                    f=1;
                    break;
                }
            }
            //cout<<s<<endl;
            //cout<<cnt<<endl;
            if(cnt==0||f==0)
            {
                break;
            }
            if(cnt%2==1)
            {
                a++;
            }
            else
            {
                b++;
            }
            if(s.size()==0)
                break;
        }
        //cout<<a<<" "<<b<<endl;
        if(a>b)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
    return 0;
}
