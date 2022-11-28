#include<stdio.h>
void main()
{
//	int a;
//	int b;
//	printf("enter the number for a and b=");
//	scanf("%d%d",&a,&b);
//	printf("value of a=%d and value of b=%d",a,b);


// ##### three value greater number by ternany operator  ######.........

//int a,b,c,max;
//printf("enter three number=");
//scanf("%d%d%d",&a,&b,&c);
//max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
//printf("maximum value is=%d",max);


//int a,b,c;
//printf("enter three number=");
//scanf("%d%d%d",&a,&b,&c);
//if(a>b&&a>c)
//{
//	printf("A is the greatest number");
//}else if(b>a&&b>c){
//	printf(" B is the greatest number");
//}else{
//	printf(" C is the greater number");
//}

//int a,b,ch;
//printf("enter two values=");
//scanf("%d%d",&a,&b);
//printf("enter number 1 for addition\n number 2 for substraction\n number 3 for multiplication\n number 4 for division\n");
//scanf("%d",&ch);
//switch(ch)
//{ case 1:printf("addition is=%d",a+b);
//break;
//case 2:printf("substration is=%d",a-b);
//break;
//case 3:printf("multiplication is=%d",a*b);
//break;
//case 4:printf("division is=%d",a/b);
//break;
//default:printf("not valid");
//}


// TABLE USING WHILE.............
//int i=1,n,c;
//printf("enter number to find its table=");
//scanf("%d",&n);
//while(i<=20)
//{
//	c=n*i;
//	printf(" Table= %dX%d=%d\n",n,i,c);
//	i++;
//}

//int i=1,n;
//printf("enter the number=");
//scanf("%d",&n);
//while(i<=n){
//	printf("N number of natural number=%d\n",i);
//	i++;
//}

//int n,i=1,sum=0;
//printf("enter the number=");
//scanf("%d",&n);
//while(i<=n)
//{
//	sum=sum+i;
//	i++;
//	
//}
//printf("sum is=%d",sum);
                                                 //         ####### 2D ARRAY ######
 
 //####### count total number of odd and even in a 3x3 matrix ######
 
//int a[3][3],i,j,odd=0,even=0;
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//{
//	printf("enter values=");
//	scanf("%d",&a[i][j]);
//	
//}
//printf("\n 2D array elements=");
//for(i=0;i<3;i++){
//	printf("\n");
//	for(j=0;j<3;j++)
//	printf("%d\t",a[i][j]);
//}
//for(i=0;i<3;i++)
//for(j=0;j<3;j++){
//	if(a[i][j]%2==0)
//	even++;
//	else
//	odd++;
//}
//printf("\neven number=%d and odd number=%d",even,odd);

// ####### SUM OF ALL 2D ELEMENTS USING ARRAY ########

//int a[3][3],i,j,sum=0;
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//{
//	printf("enter the number=");
//	scanf("%d",&a[i][j]);
//}
//printf("\n 2D ARRAY ELEMENTS ARE=");
//for(i=0;i<3;i++)
//{
//	printf("\n");
//	for(j=0;j<3;j++)
//	printf("%d\t",a[i][j]);
//}
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//sum=sum+a[i][j];
//printf("\nsum of given number=%d",sum);
 
 // ######### sreach elements using 2D array ########
// int a[3][3],i,j,key;
// for(i=0;i<3;i++)
//for(j=0;j<3;j++){
//	printf("enter the values=");
//	scanf("%d",&a[i][j]);
//}
//printf("2D array elements are=");
//
//for(i=0;i<3;i++)
//{
//	printf("\n");
//	for(j=0;j<3;j++)
//		printf("%d\t",a[i][j]);
//	
//} 
//printf("\nenter the elements to sreach=");
//scanf("%d",&key);
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//{
//	if(a[i][j]==key){
//		printf("ELEMENTS FOUND AT a[%d][%d]pos",i,j);
//	return 0;	
//	}
//}
//	
//printf("\n element not found");	
//return 0;


// ######## program to print left and right diagonal element in 2D array ##########

//int a[3][3],i,j;
//for(i=0;i<3;i++)
//for(j=0;j<3;j++){
//	printf("enter the values=");
//	scanf("%d",&a[i][j]);
//	
//}
//printf("\n VALUES OF 2D ARRAY ");
//for(i=0;i<3;i++){
//	printf("\n");
//	for(j=0;j<3;j++)
//		printf("%d\t",a[i][j]);
//	
//}
//printf(" \nvalues of left diagonal in 2D array=");
//for(i=0;i<3;i++)
//for(j=0;j<3;j++){
//	if(i==j)
//	printf("%d\t",a[i][j]);
//}
//printf("\n values of right diagonal in 2D array=");
//for(i=0;i<3;i++)
//for(j=0;j<3;j++){
//	if(i+j==2)
//	printf("%d\t",a[i][j]);
//}	

// ####### find row sum and column sum in 2D array ##########

//int a[3][3],i,j,sum=0;
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//{
//	printf("\n enter numbers for matrix=");
//	scanf("%d",&a[i][j]);
//}
//printf("\n 2D array matrix");
//for(i=0;i<3;i++){
//
//printf("\n");
//for(j=0;j<3;j++)
//printf("%d\t",a[i][j]);
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++)
//		sum=sum+a[i][j];
//		printf("\n sum of row %d is %d",i+1,sum);
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++)
//		sum=sum+a[j][i];
//		printf("\n sum of column %d is %d",i+1,sum);
//}
  
  
  // ####### ADDITION OF TWO MATRIX IN C ######## 
//  int a[3][3],b[3][3],c[3][3],i,j;
//  printf("\n enter values of first matrix");
//  	for(i=0;i<3;i++)
//  	for(j=0;j<3;j++)
//  	{
//  		printf("\n enter value for 2D array:");
//  		scanf("%d",&a[i][j]);
//	  }
//	  printf("enter value of second matrix\n");
//	  for(i=0;i<3;i++)
//	  for(j=0;j<3;j++){
//	  	
//	  	printf("\n enter value for 2D array:");
//	  	scanf("%d",&b[i][j]);
//	  }
//	  printf("\n FIRST MATRIX");
//	  for(i=0;i<3;i++){
//	  printf("\n");
//	  for(j=0;j<3;j++)
//	  printf("\t %d",a[i][j]);
//}
// printf("\n SECOND MATRIX");
//	  for(i=0;i<3;i++){
//	  printf("\n");
//	  for(j=0;j<3;j++)
//	  printf("\t %d",b[i][j]);
//}
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//c[i][j]=a[i][j]+b[i][j];
//printf("\n ADDITION OF MATRIX IS:");
//for(i=0;i<3;i++){
//	printf("\n");
//	for(j=0;j<3;j++)
//	printf("\t%d",c[i][j]);
//}


//#### MULTIPLICATION IN 2D ARRAY ####

//int a[3][3],b[3][3],c[3][3],i,j;
//printf("\n enter values for first matrix=");
//for(i=0;i<3;i++)
//for(j=0;j<3;j++){
//	printf("\n 2D ARRAY ELEMENT :");
//	scanf("%d",&a[i][j]);
//}
//printf("\n");
//printf("enter values for second matrix:");
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//{
//	printf("\n 2D ARRAY ELEMENT :");
//	scanf("%d",&b[i][j]);
//}
//printf("\n ## first matrix ##");
//for(i=0;i<3;i++){
//	printf("\n");
//	for(j=0;j<3;j++)
//	printf("\t%d ",a[i][j]);
//}
//printf("\n ## second matrix ##");
//for(i=0;i<3;i++){
//	printf("\n");
//	for(j=0;j<3;j++)
//	printf("\t%d",b[i][j]);
//}
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//c[i][j]=a[i][j]*b[i][j];
//printf("\n MULTIPLICATON OF MATRIX=");
//for(i=0;i<3;i++){
//printf("\n");
//for(j=0;j<3;j++) 
//printf("\t %d",c[i][j]);
//}

// ######## program to check whether two matrix are identical or not #######
//int a[3][3],b[3][3],i,j,flag=0;
//printf("\nenter the values for first matrix:");
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//{
//	printf("\n 2D arrays are :");
//	scanf("%d",&a[i][j]);
//}
//printf("enter the values for second matrix:");
//for(i=0;i<3;i++)
//for(j=0;j<3;j++){
//	printf("\n 2D arrays are :");
//	scanf("%d",&b[i][j]);
//}
//printf("\n first matrix");
//
//for(i=0;i<3;i++){
//	printf("\n");
//	for(j=0;j<3;j++)
//	printf("\t %d",a[i][j]);
//}
//printf("\n second matrix");
//
//for(i=0;i<3;i++){
//	printf("\n");
//	for(j=0;j<3;j++)
//	printf("\t %d",b[i][j]);
//}
//for(i=0;i<3;i++)
//for(j=0;j<3;j++){
//
//if(a[i][j]!=b[i][j])
//flag=1;
//}
//if(flag==0)
//printf("\nthe given matrix is identical");
//else
//printf(" \nthe given matrix is not identical");


// ###### TRANSPOSE OF A MATRIX #########

int a[3][3],i,j;
printf("\n enter values in 2D matrix=");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
	printf("\n 2D array elements are :");
	scanf("%d",&a[i][j]);
}
printf("\n the original matrix");
for(i=0;i<3;i++){
printf("\n");
for(j=0;j<3;j++)
printf("\t %d",a[i][j]);
}
printf("\n TRANSPOSE OF MATRIX");
for(i=0;i<3;i++){
printf("\n");
for(j=0;j<3;j++)

printf("\t %d",a[j][i]);
}
}
