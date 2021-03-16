#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int>two;
int main()
{
    for(int i=1;i;i++)
    {
        int x=pow(2,i);
        if(x<=2000001)
        {
            two.push_back(x);
        }
        else
        {
            break;
        }
    }
    cout<<two.size()<<endl;
    cin>>n>>k;
    return 0;
}
