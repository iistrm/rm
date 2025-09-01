#include<stdio.h>
int swap(int *,int *);
int main()
{
	int a,b;
	printf("enter the value a :");
	scanf("%d"&a);
	printf("enter the value b :");
	scanf("%d"&b);
	printf("before swapping a=%d and b=%d\n ",a,b);
	swap(&a,&b);
	printf("after swapping a=%d and b=%d :",a,b);
	
	
}
int swap(int *p,int*q)
{
	int c;
	c=*p;
	*p=*q;
	*q=c;
}

