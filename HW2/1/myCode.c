#include <stdio.h>
int main(){
	int height, width;
	int perimeter;

	printf("Enter the height of the rectangle: ");
	scanf("%d", &height);
	printf("Enter the width of the rectangle: ");
	scanf("%d", &width);
	perimeter = (2*height) + (2*width);
	printf("The perimeter is: %d\n", perimeter);


	return(0);
}
