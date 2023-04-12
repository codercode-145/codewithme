#include <stdio.h> //header file
int main(){
	//creating a simple calculator program
	int a;
	printf("Enter your first value:\n");
	scanf("%d",&a);
	
	int b;
	printf("Enter your second value:\n");
	scanf("%d",&b);
	
	// providing the result on the console
	int result=a*b;
	printf("Your value is: %d\n",result);
	printf("Thanks for using my calculator! Can not wait to see you again");
	
	return 0;
}
