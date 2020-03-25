#include<stdio.h>
void replaceduplicate(int *a,int n)
{	int i,j;
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=0)
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
			}
		}
	}
	printf("result is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int a[]={1,1,1,2,1,4,9,9};
	replaceduplicate(a,sizeof(a)/sizeof(a[0]));
	return 0;
}
