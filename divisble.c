#include<stdio.h>
// to check a number is divisble by 3 and 5 or by 3 or 5 ?    true==1     flase==0       
void main()
{
	int a;
	printf("enter value for A=");
	scanf("%d",&a);
	printf("\n division of 3 and 5= %d",a%3==0 && a%5==0);
	printf("\n division of 3 or 5= %d",a%3==0 || a%5==0);
} 

	

