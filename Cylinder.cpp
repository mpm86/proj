#include "Cylinder.h"
#include <iostream>

// Constructors
Cylinder::Cylinder() : _radius(1), _height(1) {}

Cylinder::Cylinder(double radius, double height) : _radius(radius), _height(height) {}

// Member functions
void Cylinder::setRadius(double radius) {
  _radius = radius;
}

void Cylinder::setHeight(double height) {
  _height = height;
}

void Cylinder::display() const {
  std::cout << "[Cylinder] (" << _radius * 2 << ", " << _radius * 2 << ", " << _height << ")->Radius: " << _radius << " Height: " << _height << "\n";
}

void Cylinder::read(std::istream& ins) {
  ins >> _radius >> _height;
}

Polyhedron* Cylinder::clone() const {
  return new Cylinder(*this);
}

void Cylinder::scale(double scalingFactor) {
  _radius *= scalingFactor;
  _height *= scalingFactor;
}
