#include<iostream>
using namespace std;
void bubblesort(int num[])
{
	int len=sizeof(num)+1;
       int i,j,tmp;
       printf("len=%d\n",len);
   for(i=0;i<len;i++)
   {
      for(j=i;j<len;j++)
      {
         if(num[i]>num[j])
         {
             tmp=num[i];
             num[i]=num[j];
             num[j]=tmp;               
         }                  
      }                  
   }

}
int main()
{
	int num[] = {12,53,49,51,88,6,35,67,74};
	int n = sizeof(num)/4,flag=0;
	int a,mid;
	printf("n=%d\n",n);
	bubblesort(num);
	for(int i=0;i<n;i++)
	  printf("%d ",num[i]);
	scanf("%d",&a);
	//printf("%d",n);
     int left=0,right=n-1;
     while(left<=right)
     {
     	mid = (left+right)/2;
     	if(num[mid]>a)
     	{
     		right=mid-1;
     	
		 }
		 else if(num[mid]<a)
		 {
		 	left = mid + 1;
		 }
		 else if(num[mid]==a) 
		 {
		 	printf("§Ú¦b­þ:%d",mid);
		 	break;
		 }				 
	 }
	 for(int i=0;i<n;i++)
	 {
	 	if(num[i]!=a)
	 	  flag++;
	 }
	 if(flag==0)
	 {
	 	printf("no");
	 }
}
