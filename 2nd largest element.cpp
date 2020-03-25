#include<stdio.h>
void secondmax(int *a,int n)
{
	int smax=-9999;
	int max,i;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if (max<a[i])
		{
			smax=max;
			max=a[i];
		}
		else if(smax<a[i])
		{
			smax=a[i];
		}
	}
	printf("second max is %d",smax);
}
int main()
{
	int a[]={1,2,3,7,5};
	secondmax(a,sizeof(a)/sizeof(a[0]));
}
