#include<stdio.h>


void TOH(int,char,char,char);


int main()
{
	int n;
	printf("enter the number of disk");
	scanf("%d",&n);
	TOH(n,'a','b','c');
}


void TOH(int n,char A,char B,char C)
{
	if(n>=1)
	{
		TOH(n-1,A,C,B);
		printf("%c to %c\n",A,C);

		
		TOH(n-1,B,A,C);
	}
}
