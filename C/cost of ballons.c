#include<stdio.h>
void main()
{
	int t,n,c,co,i,j,g,p,a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		c=0,co=0;
		scanf("%d %d",&g,&p);
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d %d",&a,&b);
			if(a==1)
			{
				c++;
			}
			if(b==1)
			{
				co++;
			}
		}
		if(g>p)
		{
			if(c<co)
			{
				c=c*g;
				co=co*p;
			}
			else
			{
				c=c*p;
				co=co*g;
			}
		}
		else
		{
			if(c>co)
			{
				c=c*g;
				co=co*p;
			}
			else
			{
				c=c*p;
				co=co*g;
			}
		}
		printf("%d\n",(c+co));		
	}
}