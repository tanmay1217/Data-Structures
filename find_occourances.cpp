#include<stdio.h>
#include<stdlib.h>
void all_occourance(int *a,int n,bool which)
{

	
	int*b;
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}

	b=(int*)calloc(max+1,sizeof(int));
	for(int i=0;i<n;i++)
	{
		++b[a[i]];
	}
	if(which)
	{
		printf("\n\nelements wich occour odd times are:\n");
		for(int i=1;i<=max;i++)
		{	
			if(b[i]!=0)
			{	
				if (b[i]%2!=0)
				{
					
					printf("%d\n",i);
				}
				
			}
			
		}	
	}
	else
	{
		printf("\n\nelements wich occour even times are:\n");
		for(int i=1;i<=max;i++)
		{
			if(b[i]!=0)
			{
				if (b[i]%2==0)
				printf("%d\n",i);
			}
		}
	}
}
int  first_occourance(int* a,int n,bool which)
{
	
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			count++;
		}
		if(which)
		{
			if(count%2!=0)
			return a[i];
		}
		else {
			
			if(count%2==0)
			return a[i];
		}
		
		
	}
}
void input(int *a,int n)
{int i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]\t",i);
		scanf("%d",a+i);
	}
}
void display(int *a,int n)
{int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
}
int main()
{
	int n,num,q1,q2;
	int *a;
	//int a[]={1,2,3,2,1};
	printf("enter size of array:\t");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	input(a,n);
	display(a,n);
	printf("\n1.first_odd_occourance no. \t\t 2.first_even_occourance no.\n");
	scanf("%d",&q1);
	if(q1==1)
	{
	num=first_occourance(a,sizeof(a)/sizeof(a[0]),true);
	printf("\nfirst_odd_occourance is %d\n",num);
	}
	else
	{
		num=first_occourance(a,sizeof(a)/sizeof(a[0]),false);
		printf("\nfirst_even_occourance is %d\n",num);
	}	
	printf("\n1.All_odd_occourance no. \t\t 2.All_even_occourance no.\n");
	scanf("%d",&q2);
	if(q2==1)
	{
		all_occourance(a,n,true);
	}
	else
	{
		all_occourance(a,n,false);
	}
	return 0;
}
