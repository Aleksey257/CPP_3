
#include <iostream>
int main()
{
    int a = 8;
    int b = 4;
    int c = 2;
    std::cout << a + b + c <<"\n";
    std::cout << a - b - c << "\n";
    std::cout << a * b * c << "\n";
    std::cout << a / b / c << "\n";
    std::cout << (((145 - 100 / 20) / 20) * 50) + 45 << "\n";
    int x = 3;
    int y = 7;
    int i = (x & y);
    int j = (x | y);
    int k = (x ^ y);
    int x1 = ~x;
    int x2 = (x >> 1);
    int x3 = (x << 1);
    std::cout << "i = "<< i <<"\n";
    std::cout << "j = " << j << "\n";
    std::cout << "k = " << k << "\n";
    std::cout << "x1 = " << x1 << "\n";
    std::cout << "x2 = " << x2 << "\n";
    std::cout << "x3 = " << x3 << "\n";
    bool t = true;
    bool f = false;
    bool s = (t && (t && (t && t || f) && (f || t != f)));
    std::cout << s << "\n";
    int p = (25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15))));
    std::cout << p;
}

