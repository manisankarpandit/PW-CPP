#include <iostream>
using namespace std;

int main() {
    // Input coordinates of the three points
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point (x3, y3): ";
    cin >> x3 >> y3;

    // Calculate the area of the triangle formed by the three points
    // If the area is 0, the points are collinear (lie on the same line)
    int area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if (area == 0) {
        cout << "All 3 points lie on the same line." << endl;
    } else {
        cout << "The points do not lie on the same line." << endl;
    }

    return 0;
}
