#include<bits/stdc++.h>
using namespace std;
int tst,n;
vector<int>v;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n>45)
            cout<<-1<<endl;
        else
        {
            int i=9;
            if(n<=9)
                cout<<n<<endl;
            else
            {
                while(n>9)
                {
                    v.push_back(i);
                    n-=i;
                    i--;
                }
                if(find(v.begin(),v.end(),n)==v.end())
                {
                    v.push_back(n);
                    for(int i=v.size()-1; i>=0; i--)
                        cout<<v[i];
                    cout<<endl;
                }
                else
                {
                    for(int i=9;i>=1; i--)
                    {
                        if(find(v.begin(),v.end(),i)==v.end())
                        {
                            if(n-i>=0)
                            {
                                n-=i;
                                v.push_back(i);
                            }
                        }
                    }
                    for(int i=v.size()-1; i>=0; i--)
                        cout<<v[i];
                    cout<<endl;
                }
            }
        }
        v.clear();
    }
    return 0;
}
