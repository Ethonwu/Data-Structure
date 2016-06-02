#include<iostream>
using namespace std;
int main()
{
	int a[8]={2,2,2,1,10,9,9,9},num[8];
	int i,j,flag=0,max,b=0,d=0;
	max = a[0];
	for(i=0;i<8;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
     for(i=0;i<8;i++)
     {
     	if(max<a[i])
     	   max = a[i];
	 }
	int c[max+1]={0};
	for(i=0;i<8;i++)
	{
		c[a[i]]+=1;
	}
    for(i=0;i<=max;i++)
	{
	   printf("%d ",c[i]);
	}
	printf("\n");
	for(i=1;i<=max;i++)
	{
		c[i]+=c[i-1];
	//	printf("%d ",c[i]);
	}
	for(i=0;i<8;i++)
	{
		num[c[a[i]]-- -1]=a[i];
	}
	for(i=0;i<8;i++)
	{
		a[i] = num[i];
		printf("%d ",a[i]);
	}
}
