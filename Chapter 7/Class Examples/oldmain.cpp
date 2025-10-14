// #include <iostream>
// using namespace std;
//
// class Rectangle {
//
// private:
//     double length;
//     double width;
//
// public:
//
//     Rectangle() {
//         length = 1.0;
//         width = 1.0;
//     }
//
//     Rectangle (double l, double w) {
//         length = l;
//         width = w;
//     }
//
//     void setWidth(double w) {
//         if (w > 0)
//             width = w;
//         else
//             cout << "Invalid width. Must be positive." << endl;
//     }
//
//     double getWidth() {
//         return width;
//     }
//
//     void setLength(double l) {
//         if (l > 0)
//             length = l;
//         else
//             cout << "Invalid length. Must be positive." << endl;
//     }
//     double getLength() {
//         return length;
//     }
//
//     double getArea() { return length * width; }
//
//     double getPerimeter() { return 2 * (length + width); }
//
//     ~Rectangle() {
//             cout << "Rectangle object destroyed." << endl;
//         }
//
// };
//
//
// int main() {
//
//     double w;
//     double l;
//     Rectangle rect1;
//     cout << "Length: " << rect1.getLength() << endl;
//
//     cout << "Enter a width: " ;
//     cin >> w;
//     cout << "Enter a length: " ;
//     cin >> l;
//     Rectangle rect2(l, w);
//     cout << "Length: " << rect2.getLength() << " - Width: " << rect2.getWidth() << endl;
//     cout << "Area: " << rect2.getArea() << endl;
//     return 0;
// }
