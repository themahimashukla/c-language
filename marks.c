#include<stdio.h>

void main(){
	int eng,biology,physics,chemistry,punjabi,total,sum;
    float percentage;
	printf("enter marks of eng=");
	scanf("%d",&eng);
	
	printf("enter marks of biology=");
	scanf("%d",&biology);
	
	printf("enter marks of physics=");
	scanf("%d",&physics);
	
	printf("enter marks of chemistry=");
	scanf("%d",&chemistry);
	
	printf("enter marks of punjabi=");
	scanf("%d",&punjabi);
	
	sum=eng+biology+physics+chemistry+punjabi;
printf("sum is :%d\n",sum);
total=500;
  percentage=sum*100/total;
	printf("total percentage  : %f\n",percentage);
}

