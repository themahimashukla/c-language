#include<stdio.h>
void main()
{
//	int n,i=1,sum=0;
//	printf("enter any number you want=");
//	scanf("%d",&n);
//	while(i<=n){
//		sum=sum+i;
//		i++;
//	}
//	printf("sum is =%d",sum);

//int i,sum=0;
//printf("enter number to find sum of digits=");
//scanf("%d",&i);
//while(i>0){
//	sum=sum+i%10;
//to reverse the value we use formula (rev*10)+i%10;
//	i=i/10;
//	
//}
//printf("sum of given digits=%d",sum);
    
    
//int n,fact=1,i=1;
//printf("enter number=");
//scanf("%d",&n);
//while(i<=n){
//	fact=fact*i;
//	i++;
//}    
//printf("factorial=%d",fact);


//int i,rev=1;
//printf("enter values to reverse=");
//scanf("%d",&i);
//while(i>0){
//	rev=(rev*10)+i%10;
//	i=i/10;
//}
//printf("reverse=%d",rev);
 
 
                     //########### input and output of array#######################
 
int a[10],i;
for(i=0;i<10;i++)
{
	printf("enter the number=");
	scanf("%d",&a[i]);
}
printf("\n array elements are=");
for(i=0;i<10;i++)
printf("\n %d",a[i]);

// ###################### FIND SUM OF NUMBER USING ARRAY #############


//int a[10],i,sum=0;
//for(i=0;i<10;i++){
//	printf("enter number to find sum=");
//	scanf("%d",&a[i]);
//}
//for(i=0;i<10;i++)
//{
//	sum=sum+a[i];
//
//}
//	printf("sum of given number are=%d",sum);


// ################## FIND ODD AND EVEN USING ARRAY #######################


//int a[5],i,even=0,odd=0;
//for(i=0;i<5;i++)
//{
//	printf("enter number=");
//	scanf("%d",&a[i]);
//}
//for(i=0;i<5;i++)
//{
//	if(a[i]%2==0)
//	even++;
//	else
//	odd++;
//}
//printf("even number=%d and odd number=%d",even,odd);


//########### FIND SUM OF EVEN AND PRODUCT OF ODD NUMBER ########

//int a[4],i,sum=0,pro=1;
//for(i=0;i<4;i++)
//{
//	printf("enter number to find sum of even number and product of odd no.=");
//	scanf("%d",&a[i]);
//}
//for(i=0;i<4;i++)
//{
//	if(a[i]%2==0)
//	sum=sum+a[i];
//	else
//	pro=pro*a[i];
//}
//printf("sum of even number=%d and product of odd number=%d",sum,pro);

// ########## PRINT ALTERNATE ARRAY ELEMENTS #############

//int a[6],i;
//for(i=0;i<6;i++)
//{
//	printf("enter number=");
//	scanf("%d",&a[i]);
//}
//for(i=0;i<6;i=i+2)
//printf("alternate value=%d\n",a[i]);

//######## PRINT ARRAY IN THE REVERSE ORDER  ########

//int a[10],i;
//for(i=0;i<10;i++)
//{
//	printf("enter the number to reverse its order=");
//	scanf("%d",&a[i]);
//}
//for(i=9;i>=0;i--)
//printf("reverse order=%d\n",a[i]);

// ######## SEARCH A NUMBER IN THE ARRAY ########

//int a[10],flag=0,key,pos,i;
//for(i=0;i<10;i++)
//{
//	printf("enter number=");
//	scanf("%d",&a[i]);
//	
//}
//printf("...enter number to search=");
//scanf("%d",&key);
//for(i=0;i<10;i++){
//	if(a[i]==key){
//		pos=i+1;
//		flag=1;
//		break;
//	}
//}
//if(flag==1)
//printf("\n number found of %d position",pos);
//else
//printf("\n number not found..");

// ######## PROGRAM TO SEARCH FREQUENCY  A NUMBER IN THE ARRAY #######

//int a[10],i,key,freq=0;
//for(i=0;i<10;i++){
//	printf("enter numbers=");
//	scanf("%d",&a[i]);
//}
//printf("enter to find its frequency=");
//scanf("%d",&key);
//for(i=0;i<10;i++){
//	if(a[i]==key)
//	freq++;
//}
//printf("frequency of %d is given as %d",key,freq);


// ###### program to find max number of the array ######

//int a[10],i,max;
//for(i=0;i<10;i++)
//{
//	printf("enter number to find max no.=");
//	scanf("%d",&a[i]);
//}
//max=a[0];
//for(i=0;i<10;i++)
//{
//	if(a[i]>max)
//	max=a[i];
//}
//printf("maximum number form given array are=%d",max);

// ######## PROGRAM TO SORT THE ARRAY IN ASCENDING ORDER/ DESCENDING ORDER ########

//int a[10],i,j,t;
//for(i=0;i<10;i++)
//{
//	printf("enter number=");
//	scanf("%d",&a[i]);
//}
//for(i=0;i<9;i++)
//for(j=i+1;j<10;j++)
//{
//	if(a[i]>a[j]){
//		t=a[i];
//		a[i]=a[j];
//		a[j]=t;
//	}
//	
//}
//printf("\n elements of array after sorting in given program");
//for(i=0;i<10;i++)
//printf("%d\n",a[i]);

// ##########2D ARRAY IN C INPUT AND OUTPUT#########

//int a[3][3],i,j;
//for(i=0;i<3;i++)
//for(j=0;j<3;j++)
//{
//	printf("enter values for 2D array=");
//	scanf("%d",a[i][j]);
//}
//printf("\n 2D ARRAY ELEMENTS ARE=");
//for(i=0;i<3;i++){
//	printf("\n");
//	for(j=0;j<3;j++)
//	printf("\t%d",a[i][j]);
//}
}
