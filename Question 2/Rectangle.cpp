#include "Rectangle.h"


Rectangle::Rectangle() : length(0.0), width(0.0) {}
Rectangle::Rectangle(float length, float width) : length(length), width(width) {}
Rectangle::~Rectangle(){}
void Rectangle::setLength(float l) {
    length = l;
}
void Rectangle::setWidth(float w) {
    width = w;
}
float Rectangle::getLength() const {
    return length;
}
float Rectangle::getWidth() const {
    return width;
}
float Rectangle::calculateArea() const{
    return length * width;
}