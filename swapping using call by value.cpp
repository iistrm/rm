#include<stdio.h>
int swap(int *,int *);
int main()
{
	int a=2,b=5;
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
