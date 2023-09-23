#include <iostream>
using namespace std;
////�������Ǿ�̬��Ա
class Base {
public:
    static int count; // ��̬��Ա����

    // �����еľ�̬��Ա����
    static void staticFunc() {
        cout << "Static function in Base, count: " << ++count << endl;
    }
};

// ��ʼ����̬��Ա����
int Base::count = 0;

class Derived : public Base {
public:
    // �������еľ�̬��Ա�����������ػ����е�ͬ������
    static void staticFunc() {
        cout << "Static function in Derived, count: " << ++count << endl;
    }
};

int main() {
    cout << "Call Base static function:" << endl;
    Base::staticFunc(); // ���û���ľ�̬��Ա������count��Ϊ1

    cout << "Call Derived static function:" << endl;
    Derived::staticFunc(); // ����������ľ�̬��Ա������count��Ϊ2

    Derived d;
    cout << "Call static function through Derived instance:" << endl;
    d.staticFunc(); // ͨ���������ʵ������������ľ�̬��Ա������count��Ϊ3

    cout << "Call Base static function through Derived instance:" << endl;
    d.Base::staticFunc(); // ͨ���������ʵ�����û���ľ�̬��Ա������count��Ϊ4

    return 0;
}
