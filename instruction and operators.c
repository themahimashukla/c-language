#include<stdio.h>

void main()
{
                                   //	type declaration instructions
	
//int a=22;// declared the variable .......
//int b=a;//used the variable.......
//int c=b*6;
//int d=1,e;
//
//
//int oldage=22;
//int years=2;
//int newage=oldage+years;	
	
//	always declare the variable first before using the variable .........


                                       //Arithmetic Instructions


// +,-,*,/ (divide),%
// always always take single variable on left hand side example: a=b+c....correct , b+c=a not correct
//to use power in c program = pow() is used
//example : a= pow(b,c) where b ki power c hoga .
// to use power we will use #include<math.h>
  
                               // modular operator(%)

//it will give us reminder of our divided value

//  printf("%d",16% 10);
 // modular opeartor always work on integers only
 //if the vaue is negative than the reminder is also in negative 

//printf("%d",-8%3);


//int a= (int)1.999999;
//printf("%d",a);

                                          //  operator precedence

//BODMAS RULE IS APPLIED IN THIS PRECEDENCE
//int a=4+9*10;
//printf("%d",a);

                                        //associativity instructions
//this applied when both sign in question are given same example ;


//RULE IS LEFT TO RIGHT MOVE
                   //int a= 4*3/6*2;
                   //printf("%d",a);

                                    //QUEATIONS TO PRACTICE

//QUESTION : 1

int a=5*2-2*3;
printf("%d\n",a);

int b=5*2/2*3;
printf("%d\n",b);

int c=5*(2/2)*3;// in case bracket comes then first solve the bracket.....
printf("%d\n",c);

int d=5+2/2*3;
printf("%d\n",d);//semi-colon is a terminator.	
	

                                                      //CONTROL INSTRUCTIONS.........                                    
// determine the flow of program ...



                                                       // relational operators..........                 

//true= 1
//flase= 0
//==
printf("%d\n",4==4);//true

printf("%d\n", 4==3);//flase

//>,<=                                   //= (equal to)

printf("%d\n",4>3);//true

printf("%d\n",3>3);//flase

printf("%d\n",3>=3);//true

printf("%d\n",3>4);//flase

//<,<=

// !=     (not equal to)
  //  FOR TRUE VALUE = 0
   // FOR FLASE VALUE =1

                                                             //logical operators


//&& AND     condition for AND= all the statements should me true
//|| OR
//! NOT


printf("%d\n",4>3 && 5>2);

printf("%d\n",2>3 && 5>2);


printf("%d\n",3>4 || 5>2);


int a1=1;
int b1=1;

c=a1+b1;
printf("%d",c);

int x;
printf("enter number :");

scanf("%d", &x);
printf("%d" , x % 2== 0);



}
