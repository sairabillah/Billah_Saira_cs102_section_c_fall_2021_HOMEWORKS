#include <stdio.h>
int main(){
	int time, mins, hours;
	const int minperhour = 60;

	printf("Enter the time as an integer:");
	scanf("%d", &time);
	hours = (time / minperhour);
	mins = (time % minperhour);
	printf("%d hours and %d minutes\n", hours, mins);



	return(0);
}
