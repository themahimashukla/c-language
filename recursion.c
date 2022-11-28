#include<stdio.h>
//void printHW(int count);
//int main()
//{
//	printHW(5);
//}
//
//void printHW(int count)
//{
//	if(count==0)
//	{
//		return;
//	}
//	printf("Hello\n");
//	printf("My name is Mahima\n");
//	printHW(count-1 );
//}

//int sum(int n);
//int main()
//{
//printf("sum is:%d",sum(10));
//return 0;	
//}
//int sum(int n){
//	if(n==1){
//		return 1;
//	}
//	int sumNm1=sum(n-1);
//	int sumN=sumNm1+n;
//	return sumN;
//}

//int fact(int n);
//int main()
//{
//printf("factorial is:%d",fact(5));
//return 0;	
//}
//int fact(int n)
//{
//	if(n==0){
//		return 1;
//	}
//	int factNm1=fact(n-1);
//	int factN=factNm1*n;
//	return factN;
//}
                                                 // 4.write a program to convert celsius into fehranites.......
float convertTemp(float celsius);
int main()
{
float far=convertTemp(37);
printf("far: %f",far);	
return 0;
}
float convertTemp(float celsius)
{
	float far=celsicus*(9.0/5.0)+32;
	return far;
}
