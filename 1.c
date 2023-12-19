/*
Q.1 Write a Program to find the cube of a given number using UDF.For example,
Input:
Enter any number: 5

Output:
Cube is: 125
*/
#include<stdio.h>

void het() {
	int a,b;
	printf("enter any value A : ");
	scanf("%d",&a);
	
	b=a*a*a;
	printf(" ans  = %d ",b);
}
main(){
	het();
}
