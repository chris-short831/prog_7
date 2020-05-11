#include <iostream>
#include <cmath>
using namespace std;

template <typename T>

int getAbsolute(T x, T y)
{
    return abs(x-y);
}

int main()
{
    cout << getAbsolute<int>(2,4) << endl;
    cout << getAbsolute<float>(1.1,8.9) << endl;
    cout << getAbsolute<double>(3.5, 7.2) << endl;
    cout << getAbsolute<char>('k','e') << endl;
    return 0;
}