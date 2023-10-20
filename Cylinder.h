#ifndef CYLINDER_H
#define CYLINDER_H

#include "Polyhedron.h"
#include <iostream>

class Cylinder : public Polyhedron {
private:
    double radius;
    double height;

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
