#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k,p;
	int c;
	k=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	/*
	for(i=n;i>=0;i--)
		{
			c=1;
			for(j=i;j>0;j--)
				{
					printf("%d\t",c);
					c++;
				}
			printf("\n");
		}  */
	for(i=1;i<=n;i++)
		{
			c=n;
			for(j=1;j<=i;j++)
				{
					printf("%d\t",c);
					c--;
				}
			printf("\n");
		}
		printf("\n\n");
	for(i=1;i<=n;i++)
		{
			k=k+i;
			printf("%d\t",k);
			p=k;
			for(j=i;j<n-1;j++)
				{
					p=p+j;
					printf("%d\t",p);
				}
			printf("\n\n");
		}
	getch();
	return 0;
}
