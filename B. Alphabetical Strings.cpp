#include<bits/stdc++.h>
using namespace std;
int tst;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        int n=s.size(),f=0;
        string t1="a",t2="a",t3;
        int k=1;
        while(true)
        {
            if(t1==s||t2==s)
            {
                break;
            }
            //cout<<t1<<" "<<t2<<" "<<t3<<endl;
            t3="\0";
            if(s.find(t1)==string::npos)
            {
                if(s.find(t2)==string::npos)
                {
                    f=1;
                    break;
                }
                else
                {
                    if(t1==s||t2==s)
                    {
                        break;
                    }
                    t3.push_back(k+'a');
                    t3+=t2;
                    t1=t3;
                    t2.push_back(k+'a');
                }
            }
            else
            {

                t3.push_back(k+'a');
                t3+=t1;
                t2=t3;
                t1.push_back(k+'a');
            }
            k++;
        }
        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
