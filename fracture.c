//**********************************
//Assignment1
//Author: Andres Martinez
//Date: 9/3/2024
//Class: COP3223, Professor Juan Parra 
//Purpose: This program will house 5 functions and will calculate distance, perimeter, area, width, and height
//Input: different numbers that will be used to calculate the specified dimensions
//Output: Dimensions using the functions that are created.
//***********************************

#include <stdio.h>
#include <math.h>

// Define PI
#define PI 3.14159

// Functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Distance function
double calculateDistance(){
    // This function should output 3 lines of text
    // 2 points and find the distance between them (x,y)

    double xPoint1;
    double yPoint1;
    double xPoint2;
    double yPoint2;

    // Ask user to input 2 points on the x/y axis
    printf("Please enter an X coordinate and a Y coordinate (separate them by a space): ");
    scanf("%lf %lf", &xPoint1, &yPoint1);
    
    printf("Please enter a second X and Y coordinate (separate them by a space): ");
    scanf("%lf %lf", &xPoint2, &yPoint2);
    
    // Math to find the distance
    // distance formula is sqrt((x2-x1)^2 + (y2 - y1)^2)
    double calculatedDistanceX = (xPoint2 - xPoint1);
    double calculatedDistanceY = (yPoint2 - yPoint1);
    double distance = sqrt((calculatedDistanceX * calculatedDistanceX) + (calculatedDistanceY * calculatedDistanceY)); 

    // Show what was calculated to the user
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", xPoint1, yPoint1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", xPoint2, yPoint2);
    printf("The distance between the 2 points is: %.2f\n", distance);
    
    return distance;
}

// Perimeter Function
// 2 lines of output text - one of which being the entered values that are used in the distance function
double calculatePerimeter(){
    // Call distance function to calculate the distance
    double distance = calculateDistance();
   
    //math used to find perimeter
    //formula is 2 * I *r  r can be our distance in this case
    double perimeterXY = PI * distance;

    // Show what was calculated to the user
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perimeterXY);

    return 2.0;
}

// Area function
double calculateArea(){
    // Call distance function to calculate the distance
    double distance = calculateDistance();

    //math used to find area
    // PI * (r)^2
    // I divided distance by 2 because distance alone would be the diameter. Diameter/2 is radius
    double radius = distance / 2;
    double areaXY = PI * pow(radius, 2);

    // Show the calculated area to the user
    printf("The area of your city encompassed by your request is: %.2f\n", areaXY);

    return 3;
}

// Width function (difference in x-coordinates)
double calculateWidth(){
    double xPoint1, yPoint1, xPoint2, yPoint2;

    // Ask user to input the coordinates again for width calculation
    printf("Please enter an X coordinate and a Y coordinate (separate them by a space): ");
    scanf("%lf %lf", &xPoint1, &yPoint1);
    
    printf("Please enter a second X and Y coordinate (separate them by a space): ");
    scanf("%lf %lf", &xPoint2, &yPoint2);
    
    // Calculate the width (difference in x-coordinates)
    double width = fabs(xPoint2 - xPoint1);

    // Show the width to the user
    printf("The width of the city encompassed by your request is: %.2f\n", width);

    return 5.0;
}

// Height function (difference in y-coordinates)
double calculateHeight(){
    double xPoint1, yPoint1, xPoint2, yPoint2;

    // Ask user to input the coordinates again for height calculation
    printf("Please enter an X coordinate and a Y coordinate (separate them by a space): ");
    scanf("%lf %lf", &xPoint1, &yPoint1);
    
    printf("Please enter a second X and Y coordinate (separate them by a space): ");
    scanf("%lf %lf", &xPoint2, &yPoint2);
    
    // Calculate the height (difference in y-coordinates)
    double height = (yPoint2 - yPoint1);

    // Show the height to the user
    printf("The height of the city encompassed by your request is: %.2f\n", height);

    return 5.0; 
}

// Main function to call all other functions
int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 1;
}
