#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
   int i,j,tmp,min,num[5],a;
   for(i=0;i<=4;i++)
   {
   	 scanf("%d",&num[i]);
   	 printf("%d ",num[i]);
   }
   for(i=0;i<4;i++)
   {
   	  min=num[i];
   	  a=i;
   	  tmp =num[i];
   	  for(j=(i+1);j<5;j++)
   	  {
   	  	if(min>num[j])
   	  	{
   	  		min = num[j];
   	  		a=j;
		}
		 }
		 num[i]=num[a];
		 num[a]=tmp;
   }
   printf("\n");
    for(i=0;i<=4;i++)
   {
   	 printf("%d ",num[i]);
   }
   
}
