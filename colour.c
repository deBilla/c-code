#include <stdio.h>
#include <stdlib.h>
int main()

{
	
//declaring variables r=red,g=green,b=blue and r1,g1 and b1 are their complements
	int r,g,b,r1,g1,b1,x1,x2,x3; 
	printf("Enter the color: ");
	scanf("%d %d %d",&r,&g,&b); //getting the values of variables
	
//check whether complement get a negative value or positive value
	if((r>255) || (g>255) || (b>255))
	{
		printf("Enter valid input\n");
		

	}
//if it is positive find the value of the complement

	else
	{

	r1=(255-r);  //complement of r
	g1=(255-g); //complement of g
	b1=(255-b); //complement of b
	

//getting the difference between color value and its complement x1,x2,x3 are respectively those differences
	x1=r1-r; 
	x2=g1-g;
	x3=b1-b;
//Taking the absolute values of x1,x2,x3

	x1=abs(x1);
	x2=abs(x2);
	x3=abs(x3);

		
//checking whether the difference of red is greater less than or equal to 32

		if(x1<=32)
		{
			r1=r+128;
				
//check whether after adding 128 the complemet is greater than 255 if so it means before taking absolute value x1 is negative so subtract 128 from original r
				
				if(r1>255) 
				{
					r1=r-128;
				}
				
		}
		
		
//checking whether the difference of green is greater less than or equal to 32
		if(x2<=32)
		{
			g1=g+128;
				
				if(g1>255)
				{
					g1=g-128;
				}
				
		}
		
//checking whether difference of blue is greater less than or equal to 32
		if(x3<=32)
		{
			b1=b+128;
				
				if(b1>255)
				{
					b1=b-128;
				}
				
		}
//printing the final r1,g1 and b1 values   
	
		printf("The complement: %d %d %d\n",r1,g1,b1);
		
	
	}

	return 0;
}
			

