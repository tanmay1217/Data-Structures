#include<stdio.h>
void input(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] ",i);
		scanf("%d",p+i);
	}
}
void display(int *p,int n)
{
	for (int i=0;i<n;i++)
	{
		printf("%d  ",*(p+i));
	}
}
int ls(int *a,int n,int e)
{
	int i;
	for(i=0;i<n;i++)
	{
		if (a[i]==e){
			return i;
		}	
	}
	return 0;
}
int main()
{
	int n,e,f;
	
	int a[n];
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter the array elememts\n");
	input(a,n);
	printf("your array elements are\n");
	display(a,n);
	printf("\nenter the no. to be searched\n\n");
	scanf("%d",&e);
	f=ls(a,n,e);
	if (f!=0	)
	printf("found at %d",f);
	else
	printf("not found");
	return 0;
}
