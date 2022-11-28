#include<stdio.h>
int main(){
//int a[3];
//int n=3;
//int i=0;
//
//
//
//for(i=0;i<n;i++){
//	printf("Enter for i =%d ",i);
//	scanf("%d", &a[i]);
//	}
//
//int min=898989;
//for(i=0;i<n;i++){
//if(min>a[i]){
//	min =a[i];
//	
//}
//
//}
//printf("min = %d", min);
//
//}

// TO SEARCH THE GIVEN NUMBER 
//int main()
//{
//	int a[5],i,n;
//	printf("enter the digits=");
//	scanf("%d",&n);
//	printf("enter elements=");
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<n;i++)
//	if(a[i]==n)
//	{
//		printf("\nelement found");
//	}
////	else{
////		printf(" \nelement not found");
////	}

int n,i=1,sum=0,avg;
printf("enter any number=");
scanf("%d",&n);
while(i<=n){
	sum=sum+i;
	avg=sum/n;
	i++;
}
printf("\n average of given number is=%d",avg);
}
