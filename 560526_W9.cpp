#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<pair<int, int>> center_point(2);
const double PI = 3.1416;

double distance(int x1, int y1, int x2, int y2) {
    double jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return jarak;
}

double radius(int x1, int y1, int x2, int y2) {
    return distance( x1,  y1,  x2,  y2);
}

double circumference(int x1, int y1, int x2, int y2) {
    return 2 * PI * radius(x1,  y1,  x2,  y2);
}

double area(int x1, int y1, int x2, int y2) {
    return PI * pow(radius(x1,  y1,  x2,  y2), 2);
}

int main() {
    cout << "Masukkan x dan y untuk titik pusat dan titik pada lingkaran (x1 y1 x2 y2): \n";
    for (int i = 0; i < center_point.size(); i++) {
        cin >> center_point[i].first >> center_point[i].second;
    }

    // jarak
    cout << "Jarak antara 2 titik tersebut adalah: " 
    << distance(center_point[0].first, center_point[0].second, center_point[1].first, center_point[1].second) << endl;

    // jari jari
    cout << "Jari-jari lingkaran tersebut adalah: " 
    << radius(center_point[0].first, center_point[0].second, center_point[1].first, center_point[1].second) << endl;
    
    // keliling
    cout << "Keliling lingkaran tersebut adalah: " 
    << circumference(center_point[0].first, center_point[0].second, center_point[1].first, center_point[1].second) << endl;
    
    // luas
    cout << "Luas lingkaran tersebut adalah: " 
    << area(center_point[0].first, center_point[0].second, center_point[1].first, center_point[1].second) << endl;
   
    return 0;
}