#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[10000],n,i,j,s1=0,s2=0;
	memset(a,0,sizeof(a));
	cin>>n;
	s1=0;
	s2=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i=i+1)
    {
        //printf("%lld %lld\n",a[i],a[n-i+1]);
        if(n%2!=0)
        {
            if(i!=(n/2)+1)
            {
                if(a[i]>a[n-i+1])
                {
                    s1=s1+a[i];
                    a[i]=0;
                    s2=s2+a[n-i+1];
                    a[n-i+1]=0;
                }
                else
                {
                    s1=s1+a[n-i+1];
                    a[n-i+1]=0;
                    s2=s2+a[i];
                    a[i]=0;
                }

                //printf("s1=%lld s2=%lld\n",s1,s2);
            }
            else
                s1=s1+a[(n+1)/2];
                            printf("s1=%lld s2=%lld\n",s1,s2);

        }
            else
            {
                if(a[i]>a[n-i+1])
                {
                    s1=s1+a[i];
                    a[i]=0;
                    s2=s2+a[n-i+1];
                    a[n-i+1]=0;
                }
                else
                {
                    s1=s1+a[n-i+1];
                    a[n-i+1]=0;
                    s2=s2+a[i];
                    a[i]=0;
                }
            }

    }
        cout<<s1<<" "<<s2<<endl;

		main();

	return 0;
}
