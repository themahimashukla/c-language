#include<stdio.h>
int main()
{
//	char a[50];
//	printf("enter your name=");
//	//scanf("%s",&a);
//	gets(a);
//	//puts(a);
//	printf("your name is=%s",a);
//	return 0;


                                                       // character by character string;
// char a[50];
// int i;
// printf("enter your name=");
// gets(a);
// i=0;
// while(a[i]!='\0'){
// 	printf("\n%c",a[i]);
// 	i++;
// }	
//return 0;	


                                                 //accept a string and count total number of character.........
//char a[50];
//int i;
//printf("enter your name=");
//gets(a);
//i=0;
//while(a[i]!='\0')
//i++;
// printf("\n total number of character=%d",i);
//return 0;



//char a[100];
//int i, word=1;
//printf("enter your name=");
//gets(a);
//i=0;
//while(a[i]!='\0')
//{ 
//if(a[i]==' '&& a[i+1]==' ')
//word++;
//i++;
// 
//}
//printf("total words=%d",word);
//return 0;


                                       //accept a string and count vowels and consonants.........
//char a[50];
//int 1,vol=0,con=0;
//printf("enter the string= ");
//gets(a);
//i=0;
//while(a[i]!='\0')
//{
//	if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
//{ 
//if(a[i]=='a' ||a[i]=='e' || a[o])
//}
 
                                                //########### STRING CONCEPT ###############
  // basic structure of sting........ 
  // char a[30];
   //printf("enter you name=");
   //scanf("%s",&a);
   //gets(a);   // this helps to take whole name or sentense contain space..
   //printf("your name is %s",a);


//######### character by character print string #########
//char a[50];
//int i=0;
//printf("enter your name=");
//gets(a);
//while(a[i]!='\0'){
//	printf("\n %c",a[i]);
//	i++;
//}

// ###### count total number of character ######
//char a[50];
//int i=0;
//printf("enter your name =");
//gets(a);
//while(a[i]!='\0')
//{
//	i++;
//}
//printf("\n total number of character=%d",i);

// ############## count total number of words in case of string #########


//char a[100];
//int i=0,word=1;
//printf("\n enter your name=");
//gets(a);
//while(a[i]!='\0'){
//	if(a[i]==' '&& a[i+1]!=' ')
//	word++;
//	i++;
//}
//printf("\n total number of words used are:%d",word);

// ########## string to find vowels and consonants ###########


//char a[50];
//int i=0,vol=0,cons=0;
//printf("enter your string to find vowels and consonants=");
//gets(a);
//while(a[i]!='\0')
//{
//	if(a[i]>=65&& a[i]<=90 || a[i]>=97&&a[i]<=122)
//	{
//		if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'||
//		a[i]=='A'|| a[i]=='E'|| a[i]=='I'||a[i]=='O'||a[i]=='U')
//		vol++;
//		else
//		cons++;
//		
//
//	}
//	i++;
//}
//printf("\n TOTAL VOWELS=%d and TOTAL CONSONONTS=%d",vol,cons);

  
  // ######## program to copy string ##########


//char a[100],b[100];
//int i=0;
//printf("\n enter your string=");
//gets(a);
//while(a[i]!='\0')
//{
//	b[i]=a[i];
//	i++;
//}
//b[i]='\0';
//printf("\n copied string=%s",b);


// ####### program to concatenate two string into one #####

//char a[50],b[50],c[100];
//int i=0,j=0;
//printf("\n enter your string=");
//gets(a);
//printf("\n enter your string=");
//gets(b);
//while(a[i]!='\0'){
//	c[i]=a[i];
//	i++;
//}
//while(b[j]!='\0'){
//	c[i]=b[j];
//	i++;
//	j++;
//}
//c[i]='\0';
//printf("\n concatenation of strings=%s",c);

// ########### important character function in string ##########
// char ch;
// printf("\n enter any alphabets=");
// scanf("%c",&ch)
// 79 video watch for this one.........
  
// #####built in function in string ########

                   // ######## reverse the string in c programming language ########

// char a[50],b[50];
//int i,j;
//printf("enter your string=");
//gets(a);
//j=0;
//for(i=strlen(a)-1;i>=0;i--)
//{
//	b[j]=a[i];
//	j++;
//}
//b[j]='\0';
//printf("\n REVERSE THE STRING=%s",b);
   
   
  //####### palindrome using string #########  
   
//  char a[50],b[50];
//  int i,j,flag=0;
//  printf("\n enter your string=");
//  gets(a);
//  j=0;
//  for(i=strlen(a)-1;i>=0;i--)
//  {
//  	b[j]=a[i];
//  	j++;
//   }  
//   b[j]='\0';
//   for(i=0;i<=strlen(a);i++){
//   	if(a[i]!=b[i]){
//   		flag=1;
//   		break;
//	   }
//   }
//   if(flag==0)
//   printf("\n given string is palindromic");
//   else
//   printf("\n given string is not palindomic");
   
   // ########## deleting elements from array #########
   
   int a[10],i,j,index,key;
   for(i=0;i<10;i++)
   {
   	printf("enter your array=");
   	scanf("%d",&a[i]);
   }
   printf("\n enter your element to delete from array=");
   scanf("%d",&key);
   index=9;
   for(i=0;i<=index;i++){
   	if(a[i]==key){
   		for(j=i+1;j<=index;j++)
   		a[j-1]=a[j];
   		i--;
   		index--;
	   }
   }
   printf("\n ARRAY AFTER DELETING %d is=",key);
   for(i=0;i<=index;i++)
   printf("%d\t",a[i]);
    }

