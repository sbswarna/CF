#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[6][6],i,j,p,q;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                p=i;
                q=j;
            }
        }
    }
    cout<<abs(p-2)+abs(q-2)<<endl;
    main();
    return 0;
}
