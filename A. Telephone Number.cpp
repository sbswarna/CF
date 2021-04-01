#include<bits/stdc++.h>
using namespace std;
string s;
int tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cin>>s;
        if(n<11)
            cout<<"NO"<<endl;
        else
        {
            int pos=-1;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='8')
                {
                    pos=i;
                    break;
                }
            }
            if(pos==-1)
                cout<<"NO"<<endl;
            else
            {
                if(pos==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    int x=n-(pos+1)+1;
                    if(x>=11)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
