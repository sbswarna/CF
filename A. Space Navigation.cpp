#include<bits/stdc++.h>
using namespace std;
int tst,ex,ey;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>ex>>ey;
        cin>>s;
        int p,q,mnx=abs(ex-0),mny=abs(ey-0),x=0,y=0,difx,dify,f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U')
            {
                p=x,q=y+1;
            }
            else if(s[i]=='D')
            {
                p=x,q=y-1;
            }
            else if(s[i]=='L')
            {
                p=x-1,q=y;
            }
            else
            {
                p=x+1,q=y;
            }
            difx=abs(ex-p);
            dify=abs(ey-q);
            if(difx<=mnx&&dify<=mny)
            {
                x=p,y=q;
                mnx=difx,mny=dify;
            }
            //cout<<x<<" "<<y<<endl;
            if(x==ex&&y==ey)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
