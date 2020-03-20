#include<stdio.h>
int recbinsearch(int *a,int low,int high,int e)
{
	int i,mid;
	if(low>high)
		return 0;
	mid=(low+high)/2;
	if(a[mid] ==e)
	return 1;
	else if (a[mid]<e)
	{
		recbinsearch(a,mid+1,high,e);
	}
	else
		{
		recbinsearch(a,low,mid-1,e);
	}
	
}

int main()
{
	int a[]={2,6,13,21,36,47,63,81,97};
	int e,y;
	scanf("%d",&e);
	y=recbinsearch(a,0,9,e);
	if (y==1)
	{
		printf("elements found");
	}
	else
	printf("enelenet not dofund");
	return 0;
}
