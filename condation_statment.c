#include<stdio.h>

int main(){
	
	// --||{Ternaly OPrator}||--\\
	
	/* main of code whath is the max or min number**
	**Combelet the code if the take code please reomoved the comment**
	int x ,y;
	printf("please first number \n");
	scanf("%d",& x);
	printf("please enter sacnd  number \n");
	scanf( "%d", & y);
		
	x>y? printf("the firest number is max\n") :printf("the sacand number is min\n");
	*/
	
	 /*
	 int num1,num2,max;
printf("please first number \n");
	scanf("%d",&num1);
	printf("please enter sacand  number \n");
	scanf( "%d", & num2);
	
	max=num1>num2? printf("the first  number is maximum \n") :printf("the sacand numbr is minimum\n");
	*/
	
	int num1, num2, num3 ,maximum;
	
	printf("please Enter the first number \n");
	scanf("%d",& num1);
	printf("please enter the sacand number \n");
	scanf("%d",& num2 );
	printf("please enter the therd number \n");
	scanf("%d",& num3 );
	maximum = num1>num2? (num1>num3? num1 :num3):(num2>num3? num2 : num3) ;
	
	printf("the maximum number is  = %d\n	 " ,maximum);
	return 0; 
}
