#include<stdio.h>
#include<stdio.h>
int occourence(int*a,int n,int e,bool searchfirst)
{
	int low=0,high=n-1,result=-1,mid;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(a[mid]==e)
		{
			result=mid;
			if(searchfirst)	high=mid-1;
			else low=mid+1;
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
	int a[]={1,1,3,3,5,5,5,5,5,9,9,11};
	int e,first,last;
	scanf("%d",&e);
	first=occourence(a,sizeof(a)/sizeof(a[0]),e,true);	
	if(first==-1)
	{
		printf("count is %d",first);
	}
	else
	{
		last=occourence(a,sizeof(a)/sizeof(a[0]),e,false);
		printf("count is %d",last-first+1);
	}
	
	
}
