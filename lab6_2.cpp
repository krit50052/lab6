#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double angle);
double findXComponent(double l1, double l2, double a1, double a2);
double findYComponent(double l1, double l2, double a1, double a2);
double pythagoras(double xcomp, double ycomp);
double rad2deg(double angle_rad);
void showResult(double length, double direction);
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    double a1_rad = deg2rad(a1);
    double a2_rad = deg2rad(a2);
    xcomp = findXComponent(l1, l2, a1_rad, a2_rad);
    ycomp = findYComponent(l1, l2, a1_rad, a2_rad);
    result_vec_length = pythagoras(xcomp, ycomp);
    result_vec_direction = rad2deg(atan2(ycomp, xcomp));

    showResult(result_vec_length,result_vec_direction);
}


double deg2rad(double angle) {
    return angle * M_PI / 180.0;
}

double findXComponent(double l1, double l2, double a1, double a2) {
    return (l1 * cos(a1)) + (l2 * cos(a2));
}

double findYComponent(double l1, double l2, double a1, double a2) {
    return (l1 * sin(a1)) + (l2 * sin(a2));
}

double pythagoras(double xcomp, double ycomp) {
    return sqrt(pow(xcomp, 2) + pow(ycomp, 2));
}

double rad2deg(double angle_rad) {
    return angle_rad * 180.0 / M_PI;
}

void showResult(double length, double direction) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << length << "\n";
    cout << "Direction of the resultant vector (deg) = " << direction << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}