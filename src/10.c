/*
      *      
    * A *      
  * A * A *    
* A * A * A *     
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			printf("\t");
		}
		for(j=1;j<=2*i-1;j++)
		{
			//here when j is odd we print *
			//when j is even we print A
			if(j%2!=0)
			{
				printf("*\t");
			}
			else
			{
				printf("A\t");
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}