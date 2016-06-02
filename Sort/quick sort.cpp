#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b);
void quicksort(int num[],int left,int right)
{
	int i;
	int x=left+1;
	int y =right;
	int mid,a=num[left];
	if(left>=right)
	   return;
	while(1)
	{
		while(x<=right)
		{  
           if(a<num[x]) 
		     break;	
		   x++;
   		}
   		while(y>left)
   		{
   		  if(a>num[y])
   		   break;
   		   y--;
		} 
		if(x>y)
		   break;
		swap(&num[x],&num[y]); 
		
	}
	swap(&num[left],&num[y]);
	quicksort(num,left,y-1);
	quicksort(num,y+1,right);
}
void swap(int *a,int *b)
{
	int tmp;
	tmp  = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int num[9]={5,9,4,6,3,7,2,1,8},i;
	quicksort(num,0,8);
	for(int i=0;i<=8;i++)
	{
		printf("%d ",num[i]);
	}
	
}
