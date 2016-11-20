    #include <stdio.h>
    int main()
    {
    	int n,ar[1000],oar[1000],ear[1000],i,ec=0,oc=0,s;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    		scanf("%d",&ar[i]);
    	for(i=0;i<n;i++)
    		{
    			if(ar[i]%2==0)
    			{
    				ear[ec]=ar[i];ec++;
    			}
    			else
    			{
    				oar[oc]=ar[i];oc++;
    			}
    		}
    	s=0;
    	for(i=0;i<ec;i++)
    		s=s+ear[i];
    	ear[ec]=s;
    	s=0;
    	for(i=0;i<oc;i++)
    		s=s+oar[i];
    	oar[oc]=s;
    	sort(ear,ec+1);
    	sort(oar,oc+1);
    	for(i=0;i<=ec;i++)
    		printf("%d ",ear[i]);
    	for(i=0;i<=oc;i++)
    		printf("%d ",oar[i]);
    	return 0;
    	
    }
     
    int sort(int ar[],int n)
    {
    	int i,j,t;
    	for(i=0;i<n-1;i++)
    	{
    		for(j=i+1;j<n;j++)
    		{
    			if(ar[i]>ar[j])
    			{
    				t=ar[i];
    				ar[i]=ar[j];
    				ar[j]=t;
    			}
    		}
    	}
    }
