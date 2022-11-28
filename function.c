#include<stdio.h>
// 1. ###### NO ARGUMENT NO RETURN #######     
//void add(void);
//int main(){
//add();
//printf("\n");
//add();
//return 0;	
//	
//}
//void add(void){
//	int a,b,sum;
//	printf("\n enter the value a=");
//	scanf("%d",&a);
//	printf("\n enter the value b=");
//	scanf("%d",&b);
//	sum=a+b;
//	printf("\naddition=%d",sum);
//}

//2. ####### WITH ARGUMENTS NO RETURN ########
  
  
//  void add(int,int);
//int main()
//{
//	int a,b;
//	printf("\n enter two numbers=");
//	scanf("%d%d",&a,&b);
//	add(a,b);
//	return 0;
//}
//void add(int a,int b){
//	int sum;
//	sum=a+b;
//	printf("\n addtion is %d",sum);
//}


// 3. ######## NO ARGUMENT WITH RETURN #####

//int add(void);
//int main()
//{
//int sum;
//sum=add();
//printf("\n addition=%d",sum);	
//}
//int add(void)
//{
//int a,b,c;
//printf("\n enter two values=");
//scanf("%d%d",&a,&b);
//c=a+b;
//return c;	
//}
 
 //  4.WITH ARGUMENT WITH RETURN
 
// int add(int,int);
// int main()
// {
// int a,b,sum;
// printf("\n enter your two values=");
// scanf("%d%d",&a,&b);
// sum=add(a,b);
// printf("\n addition=%d",sum);
// return 0;	
// }
// int add(int a,int b)
// {
// int c;
// c=a+b;
// return(c);	
// }
   
   
// ######### how to make namaste ########   
   
// void namaste();
// void bonjour();
// int main()
// {
// namaste();	
// namaste();	
// namaste();	
// }
// void namaste()
// {
// 	printf("\n HELLO");
// 	printf("\n my name is mahima shukla");
// 	printf("\n namaste");
// }
 
 
 
 //####### reverse of a number in c using function ########
 
 //void reverse(int);
// int main()
// {
// 	int n;
// 	printf("\n enter number to find reverse=");
// 	scanf("%d",&n);
// 	reverse(n);
// 	return 0;
// }
// void reverse(int n)
// {
// 	int rev=0;
// 	while(n>0){
//	 
// 	rev=(rev*10)+n%10;
// 	n=n/10;
// }
// printf("\n reverse number is=%d",rev);
// }

// ###### prime number program in c using function ######

//void prime(int);
//int main()
//{
//	int n;
//	printf("\n enter the number=");
//	scanf("%d",&n);
//	prime(n);
//	return 0;
//}
//void prime(int n)
//{ 
//int x,count=0;
//for(x=1;x<=n;x++){
//if(n%x==0)
//count++;	
//}
//if(count==2)
//printf("\n prime number");
//else
//printf("\n not a prime number");	
//}

                                              //###### sum of array elements in c ######

// void arrayadd(int[],int);
// int main()
// {
// 	int a[100],size,i;
// 	printf("\n enter the size of array=");
// 	scanf("%d",&size);
// 	for(i=0;i<size;i++)
// 	{
//	 
// 	printf("\n enter number=");
// 	scanf("%d",&a[i]);
// }
// arrayadd(a,size);
// return 0;
//  } 
//  void arrayadd(int a[],int size)
//  {
//  	int sum,i;
//  	for(i=0;i<size;i++)
//  	sum=sum+a[i];
//  	printf("\n sum of array are=%d",sum);
//  }


// ###### sreach the number in array using funtion ######
//void sort(int[],int,int n);
//int main()
//{
//	int a[100],size,i,n;
//	printf("\n enter the size of array=");
//	scanf("%d",&size);
//	for(i=0;i<size;i++){
//		printf("\n enter the elements of arrys=");
//		scanf("%d",&a[i]);
//	}
//	printf("\n enter the number to sreach in array=");
//	scanf("%d",&n);
//	sort( a, size, n);
//}
//  void sort(int a[],int size,int n)
//  {
//  	int i,flag=0,pos;
//  	for(i=0;i<size;i++){
//  		if(a[i]==n)
//  		{
//  			flag=1;
//  			pos=i+1;
//  			break;
//		  }
//		  
//	  }
//	  if(flag==1)
//		  printf("\n number found at %d ",pos);
//		  else
//		  printf("\n sreached number not found ");
//   } 
   
   
   // ################ PROGRAM TO FIND ADDITION AND SUBSTRACTION OF MATRIX USING FUNCTION IN C PROGRAMMIING LANGUAGE #############
   void add(int [][10],int [][10],int,int);
   int main()
   {
   	int a[10][10],b[10][10],row,col,i,j;
   	printf("\n enter the row and column=");
   	scanf("%d%d",&row,&col);
   	for(i=0;i<row;i++)
   	for(j=0;j<col;j++){
   		printf("\n enter number =");
   		scanf("%d",a[i][j]);
	   }
	   for(i=0;i<row;i++)
	   for(j=0;j<col;j++)
	   {
	   	printf("\n enter number for b=");
	   	scanf("%d",b[i][j]);
	   }
	   add(a,b,row , col);
}
void add(int a[][10],b[][10],int row, int col){
int c[10][10],i,j;
	
}

     
