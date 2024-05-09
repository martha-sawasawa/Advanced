#include "Rectangle.h"
#include <iostream>
using namespace std;



int main () {
    Rectangle rect1;
    float length1, width1;
    cout <<"Enter length for rectangle 1: " <<endl;
    cin >> length1;
    cout <<"Enter width for rectangle 1: " <<endl;
    cin >> width1;
    rect1.setLength(length1);
    rect1.setWidth(width1);
    cout <<"The area of the rectangle 1 is: " <<rect1.calculateArea() <<endl;
    
    Rectangle rect2;
    float length2, width2;
    cout <<"Enter length for rectangle 2: " <<endl;
    cin >> length2;
    rect2.setLength(length2);
    cout <<"Enter width for rectangle 2: " <<endl;
    cin >> width2;
    rect2.setWidth(width2);

    rect2 = Rectangle(length2, width2);
    cout <<"The area of the rectangle 2 is: " <<rect2.calculateArea() <<endl;

  return 0;  
}