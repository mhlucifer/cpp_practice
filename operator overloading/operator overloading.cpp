#include<iostream>
using namespace std;
//并非复数关系，自己尝试写进位之间的代码
class complex {
private:
    int real;
    int imgi;
public:
    void normalize()
    {
        if (imgi > 10)
        {
            imgi -= 10;
            real++;
        }
    }
    complex(int real = 0, int imgi = 0) {
        this->real = real;
        this->imgi = imgi;
    }

    complex operator+(complex x) {
        complex temp;
        temp.real = real + x.real;
        temp.imgi = imgi + x.imgi;
        temp.normalize();
        return temp;
    }

    int getreal() const {
        return this->real;
    }

    int getimgi() const {
        return this->imgi;
    }
};

int main() {
    complex c1(3, 7);
    complex c2(5, 4);
    complex c3;
    c3 = c2 + c1;

    cout << c3.getreal() << "+i" << c3.getimgi() << endl;
}
