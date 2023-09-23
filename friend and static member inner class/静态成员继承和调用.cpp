#include <iostream>
using namespace std;
////派生类是静态成员
class Base {
public:
    static int count; // 静态成员变量

    // 基类中的静态成员函数
    static void staticFunc() {
        cout << "Static function in Base, count: " << ++count << endl;
    }
};

// 初始化静态成员变量
int Base::count = 0;

class Derived : public Base {
public:
    // 派生类中的静态成员函数，会隐藏基类中的同名函数
    static void staticFunc() {
        cout << "Static function in Derived, count: " << ++count << endl;
    }
};

int main() {
    cout << "Call Base static function:" << endl;
    Base::staticFunc(); // 调用基类的静态成员函数，count变为1

    cout << "Call Derived static function:" << endl;
    Derived::staticFunc(); // 调用派生类的静态成员函数，count变为2

    Derived d;
    cout << "Call static function through Derived instance:" << endl;
    d.staticFunc(); // 通过派生类的实例调用派生类的静态成员函数，count变为3

    cout << "Call Base static function through Derived instance:" << endl;
    d.Base::staticFunc(); // 通过派生类的实例调用基类的静态成员函数，count变为4

    return 0;
}
