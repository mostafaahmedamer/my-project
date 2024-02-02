#include<stdio.h>

 int main(){
	 
	 int grid;
	 printf("pleas enter Gred\n");
	 
	 
	 scanf("%d",& grid);
	 
	 if(grid==1){
		 
		 printf("exelent");
		 
	 }
	 else if (grid==2)
		 printf("veryGod");
	 
	 else if (grid==3)
	 {
		 printf("passed");
	 }	 
	 else if (grid==4)
		 printf("filure");
	 else 
		 printf("Error");
	 return 0;
 }