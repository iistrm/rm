#include<stdio.h>
int swap(int ,int);

int main ()
{
	int a=2,b=4;
	swap(a,b);
	
	printf("after swapping a and b : %d and %d " a,b);
}
int swap(int c,intd)
{
	int temp ;
	temp=c;
	c=d;
	d=temp;
	return (c,d);
}
