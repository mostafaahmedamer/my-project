#include<stdio.h>

int main(){
	
	
	/*
	int  salary,hours;
	printf("pleaseEnter numberf work hres");
	scanf("%d",& hours);
	
	salary=hours*50;
	if(hours<40){
	salary = hours*50-(hours*50*.1);
	
	}
	printf("the salary your is =%d\n", salary);
	*/
	 
	 
	 /// the max using if statment
	
	 int x ,y,z,max;
	 printf("please Enter the 3 numbers\n");
	 scanf("%d%d%", &x , &y);
	 scanf("%d",&z);
	if((x>y) && (x>z)){
	
	printf("  the max number\n = %d",x);}
else if ((y>x) && (y>z)){
printf(" The maxmimum number is\n = %d" , y);}
else {printf(" the max number=\n%d ",z);}
	return 0;
}