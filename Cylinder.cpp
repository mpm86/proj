// Modified Cylinder.h

#ifndef CYLINDER_H
#define CYLINDER_H

#include "Polyhedron.h"
#include <iostream>

class Cylinder : public Polyhedron {
private:
    double _radius;  // Changed from radius to _radius
    double _height;  // Changed from height to _height

public:
    // Constructors
    Cylinder();
    Cylinder(double radius, double height);

    // Member functions
    void setRadius(double radius);
    void setHeight(double height);
    void display() const;
    void read(std::istream& ins);
    Polyhedron* clone() const;
    void scale(double scalingFactor);
};

#endif