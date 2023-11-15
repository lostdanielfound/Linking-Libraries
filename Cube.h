#ifndef __CUBE_H__
#define __CUBE_H__
#include <cmath>

class Cube
{
private:
    double side_length;
public:
    Cube();
    Cube(double l = 1);

    double Calculate_Volume();
    double Calculate_Surface_Area();
    double Calculate_Face_Diagonal();
    double Calculate_Diagonal_Through_Cube();
};


#endif