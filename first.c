//#include<stdio.h>
/*
int main() {
	int number,num_bit,resalt;
	printf("pleas entar a Number");
  scanf("%d" , &number);
  printf("pleas enter a set Numbeer");
  scanf("%d",&num_bit);
  resalt= number | (1<<num_bit);
  printf("the resalt : = %d\n",resalt);




*/
/*
int main(){

int num1, num2, num3 ,maximum;
	
	printf("please Enter the first number \n");
	scanf("%d",& num1);
	printf("please enter the sacand number \n");
	scanf("%d",& num2 );
	printf("please enter the therd number \n");
	scanf("%d",& num3 );
	maximum = num1>num2? :num1>num3? :num2>num3? :maximum;
	
	printf("the maximum number is = %d\n " ,maximum);
   return 0;
}
*/


#include <stdio.h>
int main(){
	
	double num1, num2 ,res ;
	char op ;
	printf("please Enter The First number\n");
	scanf("%lf", & num1);
	printf("Please Enter The Opratain\n");
	scanf("%x", & op);
	printf("Please Enter The Sacand number\n");
	 scanf("%lf", & num2);
	 
	 switch(op)
	 {
		 case '+' :
		 res=num1+num2;
		 printf("The Adation of tow number = \n",res);
		 break;
		  case '-' :
		  res =  num1-num2;
		  printf("The subtraction of tow number = \n", res);
		  break;
		   case '*' : 
		   res=num1*num2;
		   printf("The maltiplied of tow number = \n",res);
		   break;
		    case '/' :
			if ((num1/num2)!=0){
			res =num1 / num2;
			printf("The devidied of tow number = \n",res);
			}
			else {printf("the divide number is not equal zero");}
			break;
			
			default  :
			
			printf("Error Of equation\n");
			break;
	 }
	
	return 0;
	
}
	
	
	
	
	
	