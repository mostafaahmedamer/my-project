#include<stdio.h>
int main(){
	
	int gride;
	printf("pleas enter youre grid\n");
	scanf("%d",& gride);
	if ((gride >0) && (gride<100)) // cheke I/p postive+ or negatine-***
	if (gride<50){
	printf("yore Gried is F \n");}
	else if (gride >=50 && gride <=65){
	printf("yore Gried is D \n");}
	else if (gride>65 && gride <=75){
	printf("yore Gried is C \n");}
		else if(gride>=75 && gride<=85){
		printf("yore Gried is B \n");}
			else if (gride>=85 &&gride<=100){
			printf("yore Gried is A \n");}
			else {printf("ROWNG GRIDIT \n");}
			
			else { printf("invaled Gride please Enter corectly Gried\n");}
	
	return 0;
}