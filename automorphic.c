#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r,m,i=0,j=0,k,x=0;
	scanf("%d",&n);
	m=n*n;
	k=n;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	//printf("%d\n",i);
	n=k;
	while(j<i)
	{
		r=m%10;
		sum=sum*10+r;
		m=m/10;
		j++;
	}
	//printf("%d %d\n",sum,j);
	m=sum;
	while(sum!=0)
	{
		r=sum%10;
		x=x*10+r;
		sum=sum/10;
	}
	//printf("%d",x);
	if(n==x)
		printf("\nautomorphic");
	else
		printf("\nnot");
	getch();
}
