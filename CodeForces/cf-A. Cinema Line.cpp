#include<bits/stdc++.h>
using namespace std;
long long nof25,nof50,i,a[100009],n,f;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	nof25=0;
	nof50=0;
	f=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==25)
		{
			nof25++;
		}
		else
		{
			if(a[i]==50)
            {
                if(nof25<1)
                {
                    f=1;
                    break;
                }
                else
                {
                    nof25--;
                    nof50++;
                }
            }
            else if(a[i]==100)
            {
                if(nof50>=1&&nof25<1||nof50==0&&nof25<3)
                   {
                       f=1;
                       break;
                   }
                   else
                    {
                        if(nof50>=1&&nof25>=1)
                        {
                            nof25--;
                            nof50--;
                        }
                        else if(nof25>=3)
                        {
                            nof25=nof25-2;
                        }
                    }
            }
		}
	}
	if(f==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	main();
	return 0;
}
