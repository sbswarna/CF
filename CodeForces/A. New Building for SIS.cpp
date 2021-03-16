#include<bits/stdc++.h>
using namespace std;
long long n,h,a,b,k,fa,ta,fb,tb,x;
int main()
{
    cin>>n>>h>>a>>b>>k;
    for(long long i=1; i<=k; i++)
    {
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb&&fa==fb)
            cout<<0<<endl;
        else
        {
        if(fa<=b&&fa>=a||fb<=b&&fb>=a)
        {
            cout<<abs(ta-tb)+abs(fa-fb)<<endl;
        }
        else
        {
            if(abs(fa-a)<abs(fa-b))
                x=a;
            else
                x=b;
            cout<<abs(ta-tb)+min(abs(fa-a),abs(fa-b))+abs(x-fb)<<endl;
        }
        }
    }
    //main();
    return 0;
}
