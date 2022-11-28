#include<stdio.h>

int main()
{
int age;
printf("enter age=");
scanf("%d",&age);

if(age>=18 ) { 
printf("adult...\n");
printf("they can drive....\n");
printf("the can vote....\n");

}	
   else if(age>13 && age<18) {
   
   printf("teenage\n");
   printf("they can not vote\n");
   printf("they can not drive\n");
   }
   
   
   
   else { 
   printf("not adult\n");
   }
   printf("THANK YOU");
   	
}
