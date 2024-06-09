#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    int selection = 0;

    cout << "Please select the area of the shape to calculate" << endl;
    cout << "1. Square " << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit Program" << endl << endl;

    while (true) {
        cout << "Enter selection: ";
        cin >> selection;

        if (selection < 1 || selection > 4) {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
        } else {
            break;
        }
    }

    switch (selection) {
        case 1: {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            double areaOfSquare = side * side;
            cout << "Area of the square: " << areaOfSquare << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            double areaOfRectangle = length * width;
            cout << "Area of the rectangle: " << areaOfRectangle << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            double areaOfTriangle = 0.5 * base * height;
            cout << "Area of the triangle: " << areaOfTriangle << endl;
            break;
        }
        case 4:
            cout << "Exiting the program." << endl;
            return 0;
    }

    return 0;
}
