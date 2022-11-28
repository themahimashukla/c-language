//#include<stdio.h>
                                             // 1. NO ARGUMENT NO RETURN
//void add();
//int main(){
//add();
//return 0;	
//}
//void add(){
//	int a,b,sum;
//	printf("\n enter the two number=");
//	scanf("%d%d",&a,&b);
//	sum=a+b;
//	printf("\n addition=%d",sum);
//}

                                            // 2. with argument no return
//void add(int,int);
//int main()
//{ 
//int a,b;
//printf("\n enter the two value=");
//scanf("%d%d",&a,&b);
//add(a,b);
//return 0;
//} 
//void add(int a, int b){
//	int sum;
//	sum=a+b;
//	printf("\n addition=%d",sum);
//}


                                                     // 3. NO ARGUMENT WITH RETURN
//int add();
//int main()
//{
//	int sum;
//	sum=add();
//	printf("\n addition=%d",sum);
//	return 0;
//}
//int add(){
//	int a,b,c;
//	printf("\n enter the two value=");
//	scanf("%d%d",&a,&b);
//	c=a+b;
//	return(c);
//}

                                                                 //  4.with argumnt with return..
//int add(int,int);
//int main()
//{
//	int a,b,sum;
//	printf("\n enter the two value=");
//	scanf("%d%d",&a,&b);
//	sum=add(a,b);
//	printf("\n Addition=%d",sum);
//	return 0;
//}
//int add(int a,int b)
//{
//	int c;
//	c=a+b;
//	return(c);
//}
 
 
                                                      //  PRACTISE!! PRACTISE!! PRACTISE!!
//1.
//   void printtable(int n);
//   int main(){
//   	int n;
//   	printf("\n enter any number to find the table=");
//   	scanf("%d",&n);
//   	printtable(n);
//   	return 0;
//   }                                                   
//void printtable(int n)
//{
//	for(int i=1; i<=10; i++){
//	
//	printf("%d\n",i*n);
//}
//}

//2.
//void calculateprice(float value);
//int main()
//{
//float value;
//printf("\n enter the price of goods="); 
//scanf("%f",&value);     
////float value=100.0;
//calculateprice(value); // passing arguments / actual value....
//printf("\n value is=%f",value);
//return 0;
//	
//}
//void calculateprice(float value) // passing parameters/ formal value......
//{ 
//
//value=value+(0.18*value);v
//printf("\n total price=%f",value);	
//}

//3.

#include<math.h>
int main()
{
	int n;
	printf("enter eny number=");
	scanf("%d",&n);
	printf("%f\n",pow(n,2));
}

