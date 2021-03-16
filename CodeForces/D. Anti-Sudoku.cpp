#include<bits/stdc++.h>
using namespace std;
char a[15][15];
int tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(a[i][j]=='9')
                    a[i][j]='7';
            }
        }
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
