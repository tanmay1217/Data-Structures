#include<stdio.h>
int searchfirstoccourence(int*a,int n,int e)
{
	int low=0,high=n-1,result=-1,mid;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(a[mid]==e)
		{
			result=mid;
			high=mid-1;
		}
		else if (a[mid]<e)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return result;
}

int searchlastoccourence(int*a,int n,int e)
{
	int low=0,high=n-1,result=-1,mid;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(a[mid]==e)
		{
			result=mid;
			low=mid+1;
		}
		else if (a[mid]<e)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return result;
}

int main()
{
	int a[]={2,4,10,10,10,18,20};
	int e,y,o;
	scanf("%d",&e);
	printf("enter 1 to find 1st occourance \t enter 2 to find last occourance");
	scanf("%d",&o);
	if(o==1)
	{	
		y=searchfirstoccourence(a,9,e);
		if (y!=-1)
		{
			printf("no.found at %d",y);
		}
		else
		printf("no not found");
	}
	else
	{
		y=searchlastoccourence(a,9,e);	
		if (y!=-1)
		{
			printf("no.found at %d",y);
		}
		else
		printf("no not found");
	}
	
}
