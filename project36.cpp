#include <iostream>
#include <cmath>
#include <exception>
using namespace std;

const double pi = 3.14;

class Area_ring {
public:
   double outer_radius;
   double inner_radius;
   double area;
   
    Area_ring(double _outer_radius_, double _inner_radius_) {
     outer_radius = _outer_radius_;
     inner_radius = _inner_radius_;
     area = pi * (pow(_outer_radius_, 2) - pow(_inner_radius_, 2));
   }
};

void validate_radii(double outer_radius, double inner_radius) {
    if (inner_radius >= outer_radius) {
        throw runtime_error("Ошибка! Внутренний радиус должен быть меньше внешнего!");
    }
    if (inner_radius < 0 || outer_radius < 0) {
        throw runtime_error("Ошибка! Радиусы не могут быть отрицательными!");
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    
    double outer_radius, inner_radius;
    
    cout << "Внешний радиус: ";
    cin >> outer_radius;
    
    cout << "Внутренний радиус: ";
    cin >> inner_radius;
    
    try {
        validate_radii(outer_radius, inner_radius);
        Area_ring ar(outer_radius, inner_radius);
        cout << "Площадь кольца: " << ar.area << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }
    
}  
