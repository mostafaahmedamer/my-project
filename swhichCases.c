/*   *chek ID*
#include <stdio.h>
int main(){

int id;

 printf("pleas enter ID \n ");
scanf("%d", &id);
switch (id){
	case 123 : printf("welcom Ahmed");
	break;
	case 10 : printf("Welcom Ali");
	break;
	default : printf ("NOt Difined ID\n");
	break;
}
return 0;
}
*/
// calculator 
#include<stdio.h>

int main() {
	int num1,num2;
	char  op;
printf("enter the first number \n");
  scanf("%d",& num1);

  printf("Enter The opration \n");

  scanf("%c",& op);
  
  printf("enter secand number \n");
   scanf("%d",& num2);

  

 switch(op){
 case '+' :
    printf("the sum resalt %d\n" , num1+num2);
    break;
 case '*':
     printf("the mult resalt = %d\n" ,num1*num2);

     break;

 case '-' :
      printf("the sub resalt = %d\n" , num1-num2);
      break;

      case '/' :

     printf("the diveded resalt = %d\n" ,num1/num2);

    break;
      default :
        printf("error");


 }
return 0;
}