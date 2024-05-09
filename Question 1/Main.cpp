#include <iostream>
#include "Rectangle.h"
using namespace std;

int main () {
    Rectangle rect;
    float length, width;
    cout <<"Enter length: " <<endl;
    cin >> length;
    cout <<"Enter width: " <<endl;
    cin >> width;
    rect.setLength(length);
    rect.setWidth(width);
    cout <<"The area of the rectangle is: " <<rect.calculateArea() <<endl;

  return 0;  
}