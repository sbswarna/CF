#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s;
    int sum=0;
    for(int i=1; i<=m; i++)
    {
        sum+=9;
    }
    if(sum<s)
        cout<<-1<<" "<<-1<<endl;
    else if(s==0&&m>1||(s==0&&m==0))
        cout<<-1<<" "<<-1<<endl;
    else if(s==0&&m==1)
        cout<<0<<" "<<0<<endl;
    else
    {
        int x=m;
        string ans;
        for(int i=0; i<m; i++)
            ans.push_back('0');
        int x1=m,s1=s,f=0,pos,cnt;
        for(int i=1; i<=m; i++)
        {
            if(f==0)
                cnt=1;
            else
            {
                if(s>=9)
                    cnt=9;
                else
                    cnt=s;
            }
            //cout<<"F="<<f<<endl;
            while(1)
            {
                if(f==0)
                {
                    pos=0;
                }
                else if(f==1)
                {
                    pos=m-1;
                }
                else
                {
                    pos--;
                }
                ans[pos]=cnt+'0';
                //cout<<cnt<<endl;
                //cout<<pos+1<<" "<<ans[pos]<<" "<<ans<<endl;
                s-=cnt;
                x--;
                int y=s,d=0;
                while(y>0)
                {
                    y=y/10;
                    d++;
                }
                if(x<d)
                {
                   // cout<<s<<endl;
                    if(s>=10&&s<=17)
                    {
                        //cout<<"dkfs"<<endl;
                        int ch=(ans[0]-'0')+(s-10+1);
                        ans[0]=ch+'0';
                        f++;
                        s-=s-10+1;
                        cnt=9;
                    }
                    else
                    {
                        ans[pos]=0;
                        x++;
                        s+=cnt;
                        if(f==0)
                            cnt++;
                        else
                            cnt--;
                    }
                }
                else
                {
                    f++;
                    break;
                }
            }
            if(s==0)
                break;
        }
        cout<<ans<<" ";
        ans.clear();
        for(int i=1; i<=m; i++)
        {
            int cnt=9;
            while(1)
            {
                if(cnt<=s1)
                {
                    ans.push_back(cnt+'0');
                    //cout<<ans<<endl;
                    s1-=cnt;
                    x1--;
                    //cout<<s1<<" "<<x<<endl;
                    int y=s1,d=0;
                    while(y>0)
                    {
                        y=y/10;
                        d++;
                    }
                    //cout<<d<<endl;
                    if(x1<d)
                    {
                        ans[pos]='0';
                        x1++;
                        s1+=cnt;
                        cnt--;
                    }
                    else
                    {
                        //cout<<ans<<endl;
                        break;
                    }
                }
                else
                {
                    cnt--;
                }
            }
            if(s1==0)
                break;
        }
        if(ans.size()!=m)
        {
            while(ans.size()!=m)
                ans.push_back('0');
        }
        cout<<ans<<endl;
    }
    return 0;
}
