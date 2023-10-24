#ifndef CYLINDER_H_INCLUDED
#define CYLINDER_H_INCLUDED

#include "Polyhedron.h"

class Cylinder : public Polyhedron {
private:
    double height;
    double radius;

public:
    Cylinder();
    Cylinder(double r, double h);
    ~Cylinder() = default;
    Cylinder(const Cylinder& src) = default;
    Cylinder& operator=(const Cylinder& rhs) = default;

    double getRadius() const;
    double getHeight() const;
    void setRadius(double r);
    void setHeight(double h);
    double getDiameter() const;

    virtual Polyhedron* clone() const;
    virtual void read(std::istream& ins);
    virtual void display(std::ostream& outs) const;
    virtual void scale(double scalingFactor);

    // Optional: Supplemental member function to calculate volume
    double calculateVolume() const;
};

inline double Cylinder::getRadius() const { return this->radius; }
inline double Cylinder::getHeight() const { return this->height; }
inline double Cylinder::getDiameter() const { return 2 * radius; }

#endif
