#include<bits/stdc++.h>
using namespace std;
int tst,sx,sy,ex,ey,fx,fy;
int visited[1002][1002];
int main()
{
    cin>>tst;
    while(tst--)
    {
        getchar();
        cin>>sy>>sx>>ey>>ex>>fy>>fx;
        if(sx==ex)
        {
            if(fx!=sx)
            {
                cout<<abs(sy-ey)<<endl;
            }
            else
            {
                if((sy<ey&&fy>=sy&&fy<=ey)||(sy>ey&&fy>=ey&&fy<=sy))
                    cout<<abs(sy-ey)+2<<endl;
                else
                    cout<<abs(sy-ey)<<endl;
            }
        }
        else if(sy==ey)
        {
            if(fy!=sy)
            {
                cout<<abs(sx-ex)<<endl;
            }
            else
            {
                if((sx<ex&&fx>=sx&&fx<=ex)||(sx>ex&&fx>=ex&&fx<=sx))
                    cout<<abs(sx-ex)+2<<endl;
                else
                    cout<<abs(sx-ex)<<endl;
            }
        }
        else
        {
            cout<<abs(sy-ey)+abs(sx-ex)<<endl;
        }
    }
    return 0;
}
