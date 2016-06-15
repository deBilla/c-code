//E13397 taking the solution of ax^2+bx+c


#include <stdio.h>


#include<math.h>
int main(){
	float a,b,c,x,y,p,q,delt,r,z; //declaring variables
	printf("Enter the coefficients: "); //taking the value of coefficient
	scanf("%f %f %f", &a, &b, &c);
	delt=b*b-4*a*c; //value og the delta
//checking the state of delta	
	
	if (delt>0){
		x=(-b+sqrt(delt))/(2*a);
		y=(-b-sqrt(delt))/(2*a);
		printf("The Solutions are: %.2f and %.2f\n ",x,y);
		}
	else if(delt==0){
		z=(-b+sqrt(delt))/(2*a);
		printf("The Solutions is: %.2f\n ",z);	
		}			
	else{
		p=-b/(2*a);
		q=sqrt(-delt)/(2*a);
		r=-q;
		printf("The Solutions are: %.2f %.2fi and %.2f %.2fi\n ",p,q,p,r);
	}
 return 0;
} 