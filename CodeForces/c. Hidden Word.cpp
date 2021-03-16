#include<bits/stdc++.h>
using namespace std;
string s;
vector<int>v;
vector<char>neibr,neibrgrid;
char grid[5][15];
int freq[30];
int main()
{
    cin>>s;
    memset(freq,0,sizeof(freq));
    memset(grid,0,sizeof(grid));
    v.clear();
    for(int i=0; i<27; i++)
    {
        freq[s[i]-'A']++;
    }
    char ch;
    for(int i=0; i<26; i++)
    {
        if(freq[i]>1)
        {
            ch=i+'A';
        }
    }
    for(int i=0; i<27; i++)
    {
        if(s[i]==ch)
        {
            if(s[i+1]>='A'&&s[i+1]<='Z')
                neibr.push_back(s[i+1]);
            if(s[i-1]>='A'&&s[i-1]<='Z')
                neibr.push_back(s[i-1]);
        }
    }
    //cout<<ch<<endl;
    for(int i=0; i<27; i++)
    {
        if(s[i]==ch)
        {
            v.push_back(i);
        }
    }
    //cout<<v[0]<<" "<<v[1]<<endl;
    int x1=v[0];
    int x2=v[1];
    int x=(abs(v[0]-v[1])-1)/2;
    //cout<<12-x<<endl;
    int y;
    grid[0][12-x]=ch;
    //cout<<grid[0][12-x]<<endl;
    y=13-x;
    //cout<<y<<endl;
    for(int i=y; i<=12; i++)
    {
        //cout<<s[++x1];
        grid[0][i]=s[++x1];
    }
//    for(int i=0; i<13; i++)
//        cout<<grid[0][i];
//    cout<<endl;
    for(int i=y-2; i>=0; i--)
    {
        grid[0][i]=s[++x2];
    }
//    for(int i=0; i<13; i++)
//        cout<<grid[0][i];
//    cout<<endl;
//    cout<<x*2<<endl;
//    cout<<abs(v[0]-v[1])-1<<endl;
    for(int i=12; i>=y; i--)
    {
        grid[1][i]=s[++x1];
    }
//    for(int i=0; i<13; i++)
//        cout<<grid[1][0];
//    cout<<endl;
    if((abs(v[0]-v[1])-1)!=(x*2))
    {
        grid[1][y-1]=s[++x1];
        y=y-1;
    }
    for(int i=y-1; i>=0; i--)
    {
        if(v[0]<0)
        {
            break;
        }
        else
        {
            v[0]--;
            grid[1][i]=s[v[0]];
        }
    }
    //cout<<v[0]<<endl;
    if(v[0]!=0)
    {
        for(int i=1; i; i++)
        {
            //cout<<v[0]<<endl;
            if(v[0]<=0)
            {
                break;
            }
            else
            {
                v[0]--;
                //cout<<s[v[0]]<<endl;
                grid[0][i-1]=s[v[0]];
            }
        }
    }
    for(int i=1; i; i++)
    {
        x2++;
        if(x2>=s.size())
            break;
        else
        {
            grid[1][i-1]=s[x2];
        }
    }
//    for(int i=0; i<13; i++)
//        cout<<grid[1][i];
//    cout<<endl;
//    cout<<"x1="<<x1<<endl;
//    cout<<"x2="<<x2<<endl;
//    cout<<"v[0]="<<v[0]<<endl;
    for(int i=0; i<13; i++)
    {
        if(grid[0][i]==ch)
        {
            if(grid[0][i+1]>='A'&&grid[0][i+1]<='Z')
                neibrgrid.push_back(grid[0][i+1]);
            if(grid[0][i-1]>='A'&&grid[0][i-1]<='Z')
                neibrgrid.push_back(grid[0][i-1]);
            if(grid[1][i+1]>='A'&&grid[1][i+1]<='Z')
                neibrgrid.push_back(grid[1][i+1]);
            if(grid[1][i-1]>='A'&&grid[1][i-1]<='Z')
                neibrgrid.push_back(grid[1][i-1]);
            if(grid[1][i]>='A'&&grid[1][i]<='Z')
                neibrgrid.push_back(grid[1][i]);

        }
    }
    int f=0;
//    cout<<grid[0]<<endl;
//    cout<<grid[1]<<endl;
//    for(int i=0; i<neibr.size(); i++)
//        cout<<neibr[i];
//    cout<<endl;
//    for(int i=0; i<neibrgrid.size(); i++)
//        cout<<neibrgrid[i];
//    cout<<endl;
    for(int i=0; i<neibr.size(); i++)
    {
        for(int j=0; j<neibrgrid.size(); j++)
        {
            if(neibr[i]==neibrgrid[j])
            {
                f++;
                break;
            }
        }
    }
    //cout<<f<<endl;
    if(f==neibr.size())
    {
        cout<<grid[0]<<endl;
        cout<<grid[1]<<endl;
    }
    else
        cout<<"Impossible"<<endl;
    neibr.clear();
    neibrgrid.clear();
    //main();
    return 0;
}
/*
ABCDEFGHIJKLMNOPQRSGTUVWXYZ
UTEDBZRVWLOFUASHCYIPXGJMKNQ
XTSHBGLRJAMDUIPCWYOZVERNKQF
BUVTYZFQSNRIWOXXGJLKACPEMDH
*/
