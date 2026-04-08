#include <iostream>

using namespace std;

// Area for square

int area(int side){

    int area = side * side;
    return area;

}

//Area for rectangle

double area(double width, double length){
    int area = width * length;
    return area;
}

// Area for circle

double area(double radius){

    double area = 3.141 * pow(radius, 2);
    return area;

}

int main(){

    cout << area(3); 

    cout << "\n";

    cout << area(2, 2);

    cout << "\n";

    cout << area(4.123);

    return 0;
}

