# include<stdio.h>

int main() {
	int height = 5;
	int width = 3;
	int perimeter;
	int area;

	perimeter = (height * 2) + (width * 2);
	area = height * width;

	printf("Perimeter of the rectangle = %d inches", perimeter);
	printf("\n");
	printf("Area of the rectangle = %d square inches", area);
	return 0;
}
