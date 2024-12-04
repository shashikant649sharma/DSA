//area of square

#include<stdio.h>

int main(){

int side;
int area;
    printf("enter the side of square: ");

    scanf("%d",&side);

    area = side*side;

    printf("Area of square is: %d \n", area);



    // area if circle 
    const float pi = 3.14;

    float radius;
    printf("Enter the readius of circle: ");
    scanf("%f",&radius);
    printf("Area of circle is: %f \n", pi*radius*radius);
    float areaCircle = pi*radius*radius;




    return 0;
}