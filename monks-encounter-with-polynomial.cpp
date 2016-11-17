#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
 
int main()
{
	int t,i;
	long long a,b,c,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
		for(i=0;;i++)
		{
			if(((a*i*i)+(b*i)+c)>=k)
			{
			printf("%d\n",i);
			break;
			}
		}
	}
}
