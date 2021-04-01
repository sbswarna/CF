#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,slvd,c,a[1009][5];
    cin>>n;
    slvd=0;
    c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                c++;
            }
        }
        //cout<<c<<endl;
        if(c>=2)
        {
            slvd++;
        }
    }
    cout<<slvd<<endl;
    main();
    return 0;
}
