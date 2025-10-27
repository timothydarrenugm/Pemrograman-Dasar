#include <iostream>
#include <cmath>

float distance (float a,float b,float c,float d) { // Distance Function
    float e = (c-a)*(c-a)+(d-b)*(d-b);
    float f = std::sqrt(e);
    return f;
}

float radius (float a,float b,float c,float d) { // Radius Function
    float e = distance (a,b,c,d);
    return e;
}

float circumference (float a) { // Circumference Function
    float e = 2*3.1416*a;
    return e;
}

float area (float a) { // Area Function
    float e = 3.1426*a*a;
    return e;
}

int main () {

    float a,b,c,d; // initialization

    std::cout << "Input points \n"; //Input center and point of circle; point 1 (X1,Y1), point 2 (X2,Y2)
    std::cout << "X1 : " ;
    std::cin >> a;
    std::cout << "Y1 : " ;
    std::cin >> b;
    std::cout << "X2 : " ;
    std::cin >> c;
    std::cout << "Y2 : " ;
    std::cin >> d;

    std::cout << "Radius : " << radius(a,b,c,d) << "\n"; // Output Radius
    
    std::cout << "Diameter : " << 2*radius(a,b,c,d) << "\n"; // Output Diameter

    std::cout << "Circumference : " << circumference(radius(a,b,c,d)) << "\n"; // Output Circumference
    
    std::cout << "Area : " << area(radius(a,b,c,d)); // Output Area

    return 0;
}