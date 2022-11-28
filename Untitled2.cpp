#include<stdio.h>
int main(){

int a[5],n=3,i,min;
//printf("enter three digits=");
//scanf("%d",&n);
printf("\n enter elements=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);	
}
min=a[0];
for(i=1;i<n;i++)
{
	if(min>a[i])
	min=a[i];
}
printf("minimum number= %d",min);

}
