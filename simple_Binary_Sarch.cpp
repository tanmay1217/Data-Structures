#include<stdio.h>
void input(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",a+i);
	}
}
void display(int *a,int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
}
int  binarysearch(int*a,int n, int e)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		printf("\n.....mid is%d...",mid);
		if(a[mid]==e)
		{
			return 1;
		}
		if (a[mid]>e)
		{	printf("\nbefore high is %d\n",high);
			high=mid-1;
			printf("\nafter high is %d\n",high);
		}
		else
		{
			printf("\nbefore low is %d\n",low);
			low=mid+1;
			printf("\nafter low is %d\n",low);
		}
	}
	return -1;
}
int main()
{	
	int n,e,y;
	int a[]={2,6,13,21,36,47,63,81,97};
	//printf("enter the no of elements:\t");
	//scanf("%d",&n);
	//printf("enter the array elements:\n");
	//input(a,n);
	//printf("\n..ur array is..\n");
	//display(a,n);
	printf("\nenter a no.uou want to be searched\t");
	scanf("%d",&e);
	
	y=binarysearch(a,9,e);
	if (y==1)
	{
		printf("\nelement foiund");
	}
	else
	printf("\nnot found   %d",y);
	return 0;
}
