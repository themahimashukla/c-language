# include<stdio.h>

void main() {
	int percentage;
	printf("enter percentage =");
	scanf("%d",&percentage);
	
	if(percentage>=90){
		printf("Grade: A+");
	}
	
	else if(percentage>=80 && percentage<90){
		printf("Grade: A");
		
	}
	 
	 else if(percentage>=70 && percentage<80){
	 	printf("Grade: B+");
	 	
	 }
else if(percentage>=60 && percentage<70){
	printf("Grade: B");
	
}
else{
	printf("FAIL");
}	
}
