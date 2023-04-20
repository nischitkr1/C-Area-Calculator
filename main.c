// c area calculator
// functions to calculate area of different shapes
void square();
void circle();
void triangle();
void rectangle();

#include <stdio.h>

int main()
{
    // variable to store an integer value as the option seleted from the menu 
    int option;
    // print a message as title of the program
    printf("Area Calculator\n");
    // print a menu of different shapes
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Rectangle\n");
    printf("5. Exit\n");
    // input an option from the menu from the user
    printf("Enter Option: ");
    // store the value in 'option' variable in integer value
    scanf("%d", &option);
    // run a switch case to check the value of 'option' variable
    switch (option)
    {
    // if the value of 'option' variable is equal to 1
    case 1:
        // call the square() function
        square();
        // exit from the switch case
        break;
    // else if the value of 'option' varaible is equal to 2
    case 2:
        // call the circle() function
        circle();
        // exit from the switch case
        break;
    // else if the value of 'option' variable is equal to 3
    case 3:
        // call the triangle() function
        triangle();
        // exit from the switch case
        break;
    // else if the value of 'option' variable is equal to 4        
    case 4:
        // call the rectangle() function
        rectangle();
        // exit from the switch case
        break;
    // else if the value of 'option' variable is equal to 5    
    case 5:
        // print a thank you message
        printf("Thank you for Coming!");
        // exit from the switch case
        break;
    // else the value of 'option' variable does not match to any of the cases    
    default:
        // print a error message
        printf("Invalid Option!");
        // exit from the switch case
        break;
    }
}

// function definations

void square()
{
    // variables to store values in float
    float side, area;
    // input a value as the side of the square from the user
    printf("Enter Side: ");
    // store the value in the 'side' variable
    scanf("%f", &side);
    // define 'area' variable as the formula to calculate area of square
    area = side * side;
    // print the value of 'area' variable
    printf("Area: %f", area);
}

void circle()
{
    // variables to store values in float
    float radius, area;
    // input a value as the radius of the circle from the user
    printf("Enter Radius: ");
    // store the value in the 'radius' variable
    scanf("%f", &radius);
    // define 'area' variable as the formula to calculate area of circle
    area = 3.14159265359 * radius * radius;
    // print the value of 'area' variable
    printf("Area: %f", area);
}

void triangle()
{
    // variables to store values in float
    float height, base, area;
    // input a value as the height of the triangle from the user
    printf("Enter Height: ");
    // store the value in the 'height' variable
    scanf("%f", &height);
    // input a value as the base of the triangle from the user
    printf("Enter Base: ");
    // store the value in the 'base' variable
    scanf("%f", &base);
    // define 'area' variable as the formula to calculate area of triangle
    area = 0.5 * height * base;
    // print the value of 'area' variable
    printf("Area: %f", area);
}

void rectangle()
{
    // variables to store values in float
    float length, width, area;
    // input a value as the length of the rectangle from the user
    printf("Enter Length: ");
    // store the value in the 'length' variable
    scanf("%f", &length);
    // input a value as the width of the rectangle from the user
    printf("Enter Width: ");
    // store the value in the 'width' variable
    scanf("%f", &width);
    // define 'area' variable as the formula to calculate area of rectangle
    area = length * width;
    // print the value of 'area' variable
    printf("Area: %f", area);
}
