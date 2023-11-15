# Linking-Libraries
This repo serves as nice little guide on how to create static & shared libraries in C++

### Why would you want to do this?
Given a library or a `.so` file or a **Shared Object** file, you are able to link it in your main code to access it's class or structures. But you can pretty much already do this with `.h` files right? Why go through the time to link in `.so` files? Well, let's say that you want to use your friend's *amazing* class hashtable library but don't want take a bundle of `.h` files and stuff them into your project. That's where `.so` files come into play. Having those header files be compiled into one shared object file allows you to simply link in your friend's hashtable class

### Header files
For this demostration, I created some simple header file called `Cube.h & Cube.cpp` that contain a class defining a Cube and some calculation functions. 

### Cube Class usage

```C
Cube(int) // Defines a Cube object of default side length of one

double Calculate_Volume();                // Returns the Volume of the cube
double Calculate_Surface_Area();          // Returns the Surface area of the cube
double Calculate_Face_Diagonal();         // Returns the calculated Face Diagonal of the cube
double Calculate_Diagonal_Through_Cube(); // Returns the Calculated Diagonal through the cube
```

### 

### Make
Running the Makefile within this directory will compile a shared library, you will need a will to have the compiler build the shared library for you. (I Will go over that soon)