#include<bits/stdc++.h>
using namespace std;
int n;
char grid[200][200];
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i%2==0&&j%2==0||i%2==1&&j%2==1)
            {
                grid[i][j]='W';
            }
            else
            {
                grid[i][j]='B';
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}
