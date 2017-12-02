#include <stdio.h>
#include<math.h>
int numdig(int num);
int main()
{
	int test,i,j,max,dig1,dig2,sum=0,k,lump=0;
	scanf("%d",&test);
	int d[test];
	k=test;
	while(k!=0)
		{	int num1,num2;
			scanf("%d %d",&num1,&num2);
			dig1=numdig(num1);
			dig2=numdig(num2);
			if (dig1>dig2)
				max=dig1;
			else
				max=dig2;
			int a[max],b[max],c[max];
			for(j=0;j<max;j++)
				{
					a[j]=0;
					b[j]=0;
					c[j]=0;
				}
			i=0;
			j=max;
			while(j!=0)
				{
					a[i]=num1%10;
					b[i]=num2%10;
					num1/=10;
					num2/=10;
					i++;
					j--;
				}sum=0;
			for(i=0;i<max;i++)
				{
					c[i]=((a[i]+b[i])%10);
					sum+=(c[i]*pow(10,i));
				}
				
				d[lump]=sum;
				lump++;
				k--;
				
		}
		for(i=0;i<test;i++)
			printf("%d\n",d[i]);
	return 0;
}
int numdig(int num)
{
	int i=0;
	while(num!=0)
		{
			num/=10;
			i++;
		}
	return i;
}