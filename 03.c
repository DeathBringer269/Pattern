/* 
1 2 3 
4 5 6 
7 8 9 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,n;
	//prompt user to enter a number and read input
	printf("Enter a number:");
	scanf("%d",&n);
	//first loop iterates through the rows 
	for(i=1;i<=n;i++)
	{
		//second loop iterates through each coloum in each row
		for(j=1;j<=n;j++)
		{
			//the first number is printed by value of k
			printf("%d\t",k);
			//incrementing k
			k++;
		}
		printf("\n");\
		//here we dont increment value of k
	}
	getch();
	return 0;
}