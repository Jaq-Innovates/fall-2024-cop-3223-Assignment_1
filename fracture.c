//**********************************
//Assignment1
//Author: Andres Martinez
//Date: 9/3/2024
//Class: COP3223, Professor Juan Parra 
//Purpose: This program will house 5 functions and will calculate distance,perimeter,area,width, and height
//Input: different numbers that will be used to calculate the specified dimensions


//Output: Dimensions using the functions that are created.
//***********************************


//libraries necessary to complete this program
//standard output library and math because we're going to be using a lot of math
//put functions at top to call it in main
#include <stdio.h>
#include <math.h>
double calculateDistance();
double calculatePerimeter();
double calculateArea();
#define PI 3.14159


//Distance function
double calculateDistance(){
    //This function should output 3 lines of text
    // 2 points and find the distance between them (x,y)

    double xPoint1;
    double yPoint1;
    double xPoint2;
    double yPoint2;

    //ask user to input 2 points on the x/y axis
    printf("Please enter an X coordinate and a Y coordinate (seperate them by a space): ");
    scanf("%lf %lf", &xPoint1, &yPoint1);
    
    printf("Please enter a second X and Y coordinate (seperate them by a space): ");
    scanf("%lf %lf", &xPoint2, &yPoint2);
    

     // Print the points
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", xPoint1, yPoint1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", xPoint2, yPoint2);
    
    //Math to find the distance
    //distance formula is sqrt((x2-x1)^2 + (y2 - y1)^2)
    double calculatedDistanceX = (xPoint2 - xPoint1);
    double calculatedDistanceY = (yPoint2 - yPoint1);
    double distance = sqrt((calculatedDistanceX * calculatedDistanceX)+(calculatedDistanceY * calculatedDistanceY)); 

    //show what was calculated to the user
    printf("The distance between the 2 points is: %.2f\n", distance);
    
    return distance;
}

//Perimeter Function
//2 lines of output text - one of which being the enter values that is used in the distance function
double calculatePerimeter(){
    //calling distance inside of this function
    double distance = calculateDistance();
   
   // Print the points
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", xPoint1, yPoint1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", xPoint2, yPoint2);
   
    
    //math used to find perimeter
    //formula is 2 * I *r  r can be our distance in this case
    double perimeterXY = PI * distance;

    //show what was calculated to the user
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perimeterXY);
    


    return 3;
    
}

//calculating area function
double calculateArea(){
    //call distance again
    double distance = calculateDistance();

    // Print the points
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", xPoint1, yPoint1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", xPoint2, yPoint2);

    //math used to find area
    // PI * (r)^2
    // I divided distance by 2 because distance alone would be the diameter. Diameter/2 is radius
    double areaXY = PI * (pow((distance/2),2));

    //show the calculation to the user
    printf("The area of your city encompassed by your request is: %.2f\n", areaXY);

}

double calculateWidth() {
    // Print the points
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", xPoint1, yPoint1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", xPoint2, yPoint2);
    
    // Calculate width (difference in x-coordinates)
    double width = (xPoint2 - xPoint1);
    
    // Output the calculated width
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    // Return the difficulty level (e.g., 1.0 for easy)
    return 1.0;
}

// Height function (Outputs 3 lines, returns difficulty)
double calculateHeight() {
    // Print the points
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", xPoint1, yPoint1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", xPoint2, yPoint2);
    
    // Calculate height (difference in y-coordinates)
    double height = (yPoint2 - yPoint1);
    
    // Output the calculated height
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    // Return the difficulty level (e.g., 1.0 for easy)
    return 1.0;
}



int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 1;
}
