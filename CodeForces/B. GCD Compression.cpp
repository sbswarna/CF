#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }
        if(even.size()%2==0)
        {

        }
    }
    return 0;
}
