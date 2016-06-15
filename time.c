#include<stdio.h>

int check_24(int end_time){
	int no_of_days;
	if(end_time/100>=24)
		no_of_days=(end_time/100)/24;
		end_time=((end_time/100)-24*no_of_days)*100+end_time%100;
		
	return end_time;	
}

int timeCal(int a,int b){
	int end_time,hours,minutes,total_min,duration_min,total_hours;
	hours=a/100;
	minutes=a%100;
	duration_min=b%100+(b/100)*60;
	total_min=hours*60+minutes+duration_min;
	total_hours=(total_min/60);
	end_time=total_hours*100+(total_min%60);
	end_time=check_24(end_time);
	return end_time;
}



int main(){
	
	int start_time,duration;
	
	printf("Enter the start time? ");
	scanf("%d",&start_time);
	printf("Enter the duration? ");
	scanf("%d",&duration);
	
	printf("End time is %04d\n",timeCal(start_time,duration));
	return 0;
}
