#include <iostream>

using namespace std;

const double pi= 3.14;

//Function declarations so the compiler knows what the terms Area and Circumference are when used in main() mean.
double Area(double radius);
double Circumference(double radius);
double CylinderSurfaceArea(double radius, double height);

int main() {
    cout << "What is the radius of the cylinder?\n";
    double radius= 0;
    cin >> radius;

    cout << "What is the height of the cylinder?\n";
    double height= 0;
    cin >> height;
    cout << "The cylinder surface area is: " << CylinderSurfaceArea(radius, height) << endl;

    return 0;

}
//Function definitions where we declare our functions
double CylinderSurfaceArea(double radius, double height){
    double area= (2 * radius * radius * pi) + (2 * pi * radius * height);
    return area;
}

