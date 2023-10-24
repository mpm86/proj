#include "Cylinder.h"

Cylinder::Cylinder()
    :Cylinder(1, 1)
{
}

Cylinder::Cylinder(double r, double h)
    :Polyhedron("Cylinder"),
     height(h),
     radius(r)
{
    double d = this->getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

double Cylinder::getRadius() const {
    return radius;
}

double Cylinder::getHeight() const {
    return height;
}

double Cylinder::getDiameter() const {
    return 2 * radius;
}

void Cylinder::setRadius(double r) {
    radius = r;
    double d = getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

void Cylinder::setHeight(double h) {
    height = h;
    double d = getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

void Cylinder::read(std::istream& ins) {
    ins >> height >> radius;
}

void Cylinder::display(std::ostream& outs) const {
    Polyhedron::display(outs);
    outs << "Radius: " << radius << " Height: " << height;
}

void Cylinder::scale(double scalingFactor) {
    radius *= scalingFactor;
    height *= scalingFactor;
    boundingBox.scale(scalingFactor);
}

Polyhedron* Cylinder::clone() const {
    return new Cylinder(*this);
}