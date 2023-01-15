#include<stdio.h>
#include<math.h>
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mult(int a,int b){
	return a*b;
}
float divi(double a, double b){
	return a/b;
}
int modu(int a, int b){
	return a%b;
}
int main(){
	int oper;
	int a;
	int b;
	printf("1.addition\n");
	printf("2.subtraction\n");
	printf("3.multiplication\n");
	printf("4.division \n");
	printf("5.modulus\n");
	printf("Enter an operator: ");
	scanf("%d", &oper);
	printf("enter the number a: ");
	scanf("%d",&a);
	printf("\nenter the number b: ");
	scanf("%d",&b);
	switch(oper){
		case 1:
			   printf("%d + %d = %d", a, b, add(a, b));
			break;
		case 2:
		       printf("%d - %d = %d", a, b, sub(a, b));
			break;
		case 3:
			   printf("%d * %d =%d", a, b, mult(a, b));
		    break;
		case 4:
		    	printf("%d / %d = %.2f", a, b, divi(a, b));
		    break;
		case 5:
			     printf("%d mod %d = %d", a, b, modu(a, b));
			break;
		default:
			     printf("Invalid Operator");
	}   
	return 0;
}
