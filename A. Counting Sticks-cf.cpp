#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,i,j,p,a[5],d,c;
    char s[450];
    cin>>s;
    l=strlen(s);
    d=0;
    for(i=0;i<l;i=j+1)
    {
        c=0;
        for(j=i;j<l;j++)
        {
        if(s[j]=='|')
        {
            c++;

        }
        else if(s[j]=='='||s[j]=='+')
        {

            break;
        }
        }
        a[d]=c;
        c=0;
            d++;
    }
    a[3]=a[0]+a[1];
    p=abs(a[3]-a[2]);
    if(p==2)
        {
        if(a[2]<a[3])
        {
            if(a[0]==1)
            {
            	cout<<s[0]<<s[1];
            	for(i=2;i<l;i++)
            	{
            		if(s[i+1]=='=')
            		continue;
            		else
            		cout<<s[i];
				}
				
				cout<<'|'<<endl;
			}
			else if(a[1]==1)
			{
				for(i=0;i<l;i++)
				{
					if(s[i+1]=='+')
					{
						continue;
					}
					else
					{
						cout<<s[i];
					}
				}
				cout<<'|'<<endl;
			}
			else
			{
				for(i=1;i<l;i++)
				{
					cout<<s[i];
				}
				cout<<'|'<<endl;
			}
        }
        else
        {
        	for(i=0;i<l-1;i++)
        	{
        		if(s[i+1]=='=')
        		{
        			cout<<s[i]<<'|';
				}
				else
				{
					cout<<s[i];
				}
			}
			cout<<endl;
        }
    }
    else if(p==0)
    {
    	cout<<s<<endl;
	}
	else
	{
		cout<<"Impossible"<<endl;
	}
	main();
    return 0;
}
