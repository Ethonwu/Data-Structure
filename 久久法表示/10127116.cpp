#include<stdio.h>
#include<stdlib.h>
int ans(int,int,int);
int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("mt(%d,%d,%d)",a,b,c);
	printf("\n");
	ans(a,b,c);
}
int ans(int x,int y,int z)
{
		int i=1,j=1,flag=0,m,n,k=x;
		int s,t;
		s = z / x;
		t = z%x;
	    if(x==z)
	    {
	    	  for(i=1;i<=y;i++)
			{
				for(m=1;m<=z;m++)
				{
					printf("%d*%d=%2d ",m,i,i*m);
				}
				printf("\n");
			}
		}
		else
		{
		
	while(k>0)
	{
	   
	  	if(k>z)
	  	{
	  		
			  for(i=1;i<=y;i++)
			{
				for(m=1;m<=z;m++)
				{
					printf("%d*%d=%2d ",m,i,i*m);
				}
				printf("\n");
			}
		  	 
		 printf("\n");
		 // k = k -z; 
		}
		else if(k==z)
		{
			for(i=1;i<=y;i++)
			{
				for(m=1;m<=z;m++)
				{
					printf("%d*%d=%2d ",m,i,i*m);
				}
				printf("\n");
			}
		}
		else
		{
			for(i=1;i<=y;i++)
			{
				for(j=m;j<=x;j++)
				{
					printf("%d*%d=%2d ",j,i,i*j);
				}
				printf("\n");
			}
		
		}
	//	 printf("\n");
	     flag++;
	     k = k -z; 
	     printf("%d\n",i);
	}
	  //printf("%d",flag);
       }   
}

