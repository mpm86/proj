#include "Cylinder.h"

//------------------------------------------------------------------------------
Cylinder::Cylinder()
    :Cylinder(1, 1)
{
}

//------------------------------------------------------------------------------
Cylinder::Cylinder(double r, double h)
    :Polyhedron("Cylinder"),
     height(h),
     radius(r)
{
    double d = this->getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);

    // **Note** the upper-right vertex of the bounding box must be set to
    // (diameter, diameter, height).
    //
    // The z-axis is treated as the height of the
    // cylinder and the x-y plane is the "floor" where the circular face of the
    // cylinder rests.
}

//------------------------------------------------------------------------------
void Cylinder::read(std::istream& ins)
{
    // Implement this function
}

//------------------------------------------------------------------------------
void Cylinder::display(std::ostream& outs) const
{
    // Implement this function
}

//------------------------------------------------------------------------------
void Cylinder::scale(double scalingFactor)
{
    // Implement this function
}
