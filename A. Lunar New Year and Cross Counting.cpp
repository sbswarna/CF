#include<bits/stdc++.h>
using namespace std;
int n;
char s[550][550];
int main()
{
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        cin.getline(s[i],550);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]==s[i-1][j-1]&&s[i][j]==s[i-1][j+1]&&s[i][j]==s[i+1][j-1]&&s[i][j]==s[i+1][j+1]&&s[i][j]=='X')
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    //main();
    return 0;
}
