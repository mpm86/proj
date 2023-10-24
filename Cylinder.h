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
        double getDiameter() const;  // Added this line

        void setRadius(double r);
        void setHeight(double h);

        virtual Polyhedron* clone() const override;
        virtual void read(std::istream& ins) override;
        virtual void display(std::ostream& outs) const override;
        virtual void scale(double scalingFactor) override;
};

#endif
