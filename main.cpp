#include <iostream> 
#include <iomanip>
#include "Cube.h"

int main() 
{
    Cube C1(5);

    std::cout << "------------------------------------------" << std::endl;
    std::cout << "The Volume of the cube: " << std::fixed << std::setprecision(10) << C1.Calculate_Volume() << std::endl;
    std::cout << "The Surface area of the cube: " << std::fixed << std::setprecision(10) << C1.Calculate_Surface_Area() << std::endl;
    std::cout << "The Face Diagonal of the cube: " << std::fixed << std::setprecision(10) << C1.Calculate_Face_Diagonal() << std::endl;
    std::cout << "The Diagonal through the cube: " << std::fixed << std::setprecision(10) << C1.Calculate_Diagonal_Through_Cube() << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    return EXIT_SUCCESS;
}