

#include <iostream>
using namespace std;
void begin1();
void begin2();
void begin5();
void begin6();
void begin10();
void begin23();
void begin25();


int main()
{
    begin1();
    cout << endl;
    begin2();
    cout << endl;
    begin5();
    cout << endl;
    begin6();
    cout << endl;
    begin10();
    cout << endl;
    begin23();
    cout << endl;
    begin25();
}
void begin1() {
    float a;
    cout << "Enter the the side of the square a:";
    cin >> a;
    cout << "P=" << 4 * a;
}
void begin2() {
    float a;
    cout << "Enter the side of the square a:";
    cin >> a;
    cout << "S=" << a * a;
}
void begin5() {
    float a;
    cout << "Enter the side of the cube a:";
    cin >> a;
    cout << "S=" << 6 * a * a << endl << "V=" << a * a * a;
}
void begin6() {
    float a, b, c;
    cout << "Enter the sides of the paralellepiped" << endl << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    cout << "V=" << a * b * c << endl << "S=" << 2 * (a * b + b * c + a * c);
}
void begin10() {
    float num1, num2, result;
    cout << "Enter two numbers(0 is not permitted):" << endl << "num1:";
    cin >> num1;
    cout << "num2:";
    cin >> num2;
    cout << "num1^2 + num2^2 = " << num1 * num1 + num2 * num2 << endl;
    cout << "num1^2 - num2^2 =" << num1 * num1 - num2 * num2 << endl;
    cout << "num1^2 * num2^2 =" << num1 * num1 * num2 * num2 << endl;
    result = (num1 * num1) / (num2 * num2);
    cout << "num1^2 / num2^2 =" << result << endl;
}
void begin23() {
    float A, B, C, A1, B1, C1;
    cout << "Enter A:";
    cin >> A;
    cout << "Enter B:";
    cin >> B;
    cout << "Enter C:";
    cin >> C;
    cout << "       A=" << A << endl << "       B=" << B << endl << "       C=" << C << endl << "CHANGE!!!" << endl;
    A1 = B;
    B1 = C;
    C1 = A;
    A = A1;
    B = B1;
    C = C1;
    cout << "           A=" << A << endl << "           B=" << B << endl << "           C=" << C << endl;
}
void begin25() {
    float x;
    cout << "Enter x to find y (y = 3*x^6 - 6*x^2 - 7):";
    cin >> x;
    double a = 6, b = 2;
    cout << "y = " << 3 * (pow(x, a)) - 6 * (pow(x, b)) - 7;
}

