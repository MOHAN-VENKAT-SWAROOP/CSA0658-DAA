#include<stdio.h>
int main ()
{
	int n1=0,n2=1,n3;
	int i,n;
	printf( "Input 1st number for LCM:");
	scanf("%d",&n1);
	printf( "Input 2nd number for LCM:");
	scanf("%d",&n2);
    for(i=1;i<n2;i++)
	{
		if((n1%i==0) &&(n2%i==0))
		{
			
			n3=i;
		}
		
	}
	n=n1*n2/n3;
	printf ("The LCM of %d  and %d :%d",n1,n2,n);
	return 0;
}
