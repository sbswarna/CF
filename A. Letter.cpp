#include<bits/stdc++.h>
using namespace std;
string s[90];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int mnx=99;
    int mxy=-1;
    int mny=99,mxx=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='*')
            {
                if(i<mnx)
                    mnx=i;
                if(j<mny)
                    mny=j;
                if(i>mxx)
                    mxx=i;
                if(j>mxy)
                    mxy=j;
            }
        }
    }
//   cout<<mnx<<" "<<mny<<endl;
//   cout<<mxx<<" "<<mxy<<endl;
    for(int i=mnx; i<=mxx; i++)
    {
        for(int j=mny; j<=mxy; j++)
            cout<<s[i][j];
        cout<<endl;
    }
    return 0;
}
