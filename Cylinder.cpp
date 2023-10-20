#include "Cylinder.h"
#include <iostream>

// Constructors
Cylinder::Cylinder() : radius(0), height(0) {
    boundingBox.setUpperRightVertex(0, 0, height);
}

Cylinder::Cylinder(double radius, double height) : radius(radius), height(height) {
    boundingBox.setUpperRightVertex(2 * radius, 2 * radius, height);
}

// Member functions
void Cylinder::setRadius(double radius) {
    this->radius = radius;
    boundingBox.setUpperRightVertex(2 * radius, 2 * radius, height);
}

void Cylinder::setHeight(double height) {
    this->height = height;
    boundingBox.setUpperRightVertex(2 * radius, 2 * radius, height);
}

void Cylinder::display() const {
    Polyhedron::display(std::cout);
    std::cout << "Radius: " << radius << " Height: " << height << std::endl;
}

void Cylinder::read(std::istream& ins) {
    ins >> radius >> height;
    boundingBox.setUpperRightVertex(2 * radius, 2 * radius, height);
}

Polyhedron* Cylinder::clone() const {
    return new Cylinder(*this);
}

void Cylinder::scale(double scalingFactor) {
    radius *= scalingFactor;
    height *= scalingFactor;
    boundingBox.scale(scalingFactor);
}
