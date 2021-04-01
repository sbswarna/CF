#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long a,c,n;
char b[50];
pair<long long,pair<long long,string> >p[105];
int main()
{
    cin>>n;
    for(long long i=0; i<n; i++)
    {
        cin>>a;
        getchar();
        cin.getline(b,30);
        cin>>c;
        p[i].first=c*-1;
        p[i].second.first=a;
        p[i].second.second=b;
    }
    sort(p,p+n);
    cout<<"Roll "<<"|"<<" Name       "<<"|"<<" Marks"<<endl<<"-------------------------"<<endl;
    for(long long i=0; i<n; i++)
    {
        long long roll=p[i].second.first;
        string name=p[i].second.second;
        long long marks=p[i].first*-1;
        if(roll<=0&&roll<=9)
            cout<<"    "<<roll<<" | ";
        else if(roll<=10&&roll<=99)
            cout<<"   "<<roll<<" | ";
        else
            cout<<"  "<<roll<<" | ";
        if(name.size()==1)
            cout<<name<<"          | ";
        else if(name.size()==2)
            cout<<name<<"         | ";
        else if(name.size()==3)
            cout<<name<<"        | ";
        else if(name.size()==4)
            cout<<name<<"       | ";
        else if(name.size()==5)
            cout<<name<<"      | ";
        else if(name.size()==6)
            cout<<name<<"     | ";
        else if(name.size()==7)
            cout<<name<<"    | ";
        else if(name.size()==8)
            cout<<name<<"   | ";
        else if(name.size()==9)
            cout<<name<<"  | ";
        else if(name.size()==10)
            cout<<name<<"  | ";
            if(marks<=0&&marks<=9)
            cout<<marks<<"    ";
        else if(marks<=10&&marks<=99)
            cout<<marks<<"   ";
        else
            cout<<marks<<"  ";
            cout<<endl;

    }
    return 0;
}
