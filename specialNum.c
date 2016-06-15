
#include <stdio.h>

int main() {
	
//declaring variables
	int num,x1,x2,x3,x4;  
	printf("Enter a number: ");
	scanf("%d", &num);  //taking the value of the number
	x1=num%15; //to check whether it is divisible by 15
	x2=num%5; //to check whether it is divisible by 5
	x3=num%6; //to check whether it is divisible by 6
	x4=num%18; //to check whether it is divisible by 18
	
//check whether the number is divisible by 15 and greater than 999
	if ((x1==0) && (num>999)) 
	{
		
//check whether the number is weird
		if ((x2==0) && (x3==0) && (x4!=0)) 
		{
			printf("%d is special,big,weird and scary.\n",num);
		}
		else //not weird
		{
			printf("%d is special,big and scary but not weird.\n",num);
		}
	}
	
//check whether the number is divisible by 15 and lesser than 999
	if((x1==0) && (num<999)) 
	{
		if ((x2==0) && (x3==0) && (x4!=0))
		{
			printf("%d is special,weird and scary but not big.\n",num);
		}
		else
		{
			printf("%d is special but not scary.\n",num);
		}
	}
	
//check whether the number is not divisible by 15 but it is greater than 999
	if((x1!=0) && (num>999)) 
	{
		if ((x2==0) && (x3==0) && (x4!=0))
		{
			printf("%d is big,weird and scary.\n",num);
		}
		else
		{
			printf("%d is not special, big and scary but not weird.\n",num);
		}
	}
	
//check whether the number is not divisible by 15 and lesser than 999
	if((x1!=0) && (num<999))  
	{
		if ((x2==0) && (x3==0) && (x4!=0))
		{
			printf("%d is weird and scary.\n",num);
		}
		else
		{
			printf("%d is not special or not scary.\n",num);
		}
	}
	return 0;
}
