#include<iostream>
using namespace std;

//class rectangle {
//private:
//    int length;
//    int width;
//public:
//    rectangle(int l, int b) {//�������캯��
//        setLength(l);
//        setWidth(b);
//    }
//
//    rectangle() {//�ǲ������캯��
//        length = 0;
//        width = 0;
//    }
//    //���ƹ��캯��
//    rectangle(rectangle& r)
//    {
//        length = r.length;
//        width = r.width;
//    }
//
//
//    void setLength(int l) {
//        length = l;
//    }
//
//    void setWidth(int b) {
//        width = b;
//    }
//
//    // ������Ҫ�ĳ�Ա����...
//};

class rectangle { // 
private:
    int length;
    int width;
public:
    rectangle(int width,int length)
    {
        width = 10;
        length = 5;
    }
    void setlength(int l)
    {
        if (l > 0)
            length = l;
        else length = 0;
    }
    void setwidth(int w)
    {
        if (w > 0)
            width = w;
        else width = 0;
    }
    int getlength()
    {
        return length;
    }
    int getwidth()
    {
        return width;
    }
    int area()
    {
        return length * width;
    }
    int permiter()
    {
        return 2 * (length + width);
    }
};

class test
{
private:
    int a;
    int *p;
public:
    test(int x)
    {
        a = x;
        p = new int[a];
    }

    test(test& t)
    {
        a = t.a;
        //p = t.p;//������Ϊ����������ָ��ͬʱָ��һ�����飬���ܻ���ɴ���
        p = new int[a]; // ����һ����pָ���µ����顣������캯��
    }
};

int main() {
  /*  rectangle r;  //ջ������
    rectangle* ptr = new rectangle(); // ��������
    ptr = &r;
    ptr->length = 20;
    ptr->width = 39;
    cout << ptr->area() << endl;
    cout << ptr->permiter() << endl;*/
    test t(5);
    test t2(t);
    rectangle r(10,5);
    rectangle* p = new rectangle(10,5);
    r.setlength(10);
    r.setwidth(5);
    p->setlength(5);
    p->setwidth(19);
    cout << p->area() << endl;
    delete p;
    cout << r.area() << endl;
    cout<<r.getlength()<<endl;

    

}
