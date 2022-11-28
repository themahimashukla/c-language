#include<stdio.h>
void main()
{ 
//int day;
//printf("enter day(1-7)=");
//scanf("%d",&day);
//
//switch(day){
//	case 1:printf("\n monday");
//	break;
//	case 2:printf("\n tuseday");
//	break;
//	case 3:printf("\n wednesday");
//	break;
//	case 4:printf("\n thrusday");
//	break;
//	case 5:printf("\n friday");
//	break;
//	case 6:printf("\n saturday");
//	break;
//	case 7:printf("\n sunday");
//	break;
//	default:printf("\n not a valid number");
//}

                                                  //NESTED IF STATEMENT .......................                                              
int number;
printf("enter number=");
scanf("%d",&number);
  
  if(number>=0){
  	printf("\npositive number");
  	 
  	 if(number%2==0){ printf("\neven number");
	   }
	   else{printf("\nodd number");
	   }
  }
  else{printf("\nnegative number");
  }
   }
                                              //TERNARY OPERATOR...................  
  
 // marks<=30?printf("\nFAIL"):printf("\nPASS");
 
