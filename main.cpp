#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int integer;
    int result;
    setlocale (LC_CTYPE, "ENGLISH");
    cout << "Enter the radius of the circle:" << endl;
    cin >> integer;
    setlocale (LC_CTYPE, "ENGLISH");
    result = 2 * integer;
    cout << "The diameter of the circle is:" << result <<endl;
    setlocale (LC_CTYPE, "ENGLISH");
    result = 2 * 3,14 * integer;
    cout << "The circumference is:" << result << endl;
    setlocale (LC_CTYPE, "ENGLISH");
    result = 3,14 * integer^2;
    cout << "The area of the circle is:" << result << endl;
    return 0;
}