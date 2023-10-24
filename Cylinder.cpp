#include "Cylinder.h"
#include <iostream>

// Existing Constructors
Cylinder::Cylinder() : Cylinder(1, 1) {}
Cylinder::Cylinder(double r, double h) : Polyhedron("Cylinder"), height(h), radius(r) {
    double d = this->getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

// Setters
void Cylinder::setRadius(double r) {
    radius = r;
    // Update bounding box
    double d = getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

void Cylinder::setHeight(double h) {
    height = h;
    // Update bounding box
    double d = getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

// Display function
void Cylinder::display(std::ostream& outs) const {
    outs << "Cylinder with radius: " << radius << " and height: " << height << std::endl;
}

// Read function
void Cylinder::read(std::istream& ins) {
    ins >> radius >> height;
    // Update bounding box
    double d = getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

// Clone function
Polyhedron* Cylinder::clone() const {
    return new Cylinder(*this);
}

// Scale function
void Cylinder::scale(double scalingFactor) {
    radius *= scalingFactor;
    height *= scalingFactor;
    // Update bounding box
    double d = getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

// Optional: Supplemental member function to calculate volume
double Cylinder::calculateVolume() const {
    return 3.14159 * radius * radius * height;
}
