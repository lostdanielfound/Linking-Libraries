#include "Cube.h"

Cube::Cube()
{

}

Cube::Cube(double l)
{
    this->side_length = l;
}

double Cube::Calculate_Volume()
{
    return side_length * side_length * side_length;
}

double Cube::Calculate_Surface_Area()
{
    return (double)6.0 * (side_length * side_length);
}

double Cube::Calculate_Face_Diagonal()
{
    return side_length * sqrt(2);
}

double Cube::Calculate_Diagonal_Through_Cube()
{
    return side_length * sqrt(3);
}