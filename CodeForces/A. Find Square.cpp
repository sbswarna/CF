#include<bits/stdc++.h>
using namespace std;
string s[200];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    int mnx=999,mny;
    int mxx=-1,mxy;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='B')
            {
                if(i<mnx)
                {
                    mnx=i;
                    mny=j+1;
                }
                if(i>=mxx)
                {
                    mxx=i;
                    mxy=j+1;
                }
            }
        }
    }
    if(mnx==mxx)
        cout<<mnx<<" "<<mny<<endl;
    else
    {
        cout<<mnx+((mxx-mnx)/2)<<" "<<(mny+((mxx-mnx)/2))<<endl;
    }
    return 0;
}
/*
5 7
WWWWWWW
WWWWWWW
WWWBBBW
WWWBBBW
WWWBBBW
*/
