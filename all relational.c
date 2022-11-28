#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g;
	printf("enter values of a and b=");
	scanf("%d%d",&a,&b);
	c=a<b;
	d=a>b;
	e=a=b;
	f=a<=b;
	g=a>=b;
	printf("\ngreater than=%d",c);
	printf("\nlesser than=%d",d);
	printf("\nequal to=%d",e);
	printf("\ngreater then equal to=%d",f);
	printf("\nlesser than equal to=%d",g);
	
}
