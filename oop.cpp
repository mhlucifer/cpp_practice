#include<iostream>
using namespace std;

//class rectangle {
//private:
//    int length;
//    int width;
//public:
//    rectangle(int l, int b) {//参数构造函数
//        setLength(l);
//        setWidth(b);
//    }
//
//    rectangle() {//非参数构造函数
//        length = 0;
//        width = 0;
//    }
//    //复制构造函数
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
//    // 其他需要的成员函数...
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
        //p = t.p;//错误，因为不能让两个指针同时指向一个数组，可能会造成错误
        p = new int[a]; // 创建一个新p指向新的数组。深拷贝构造函数
    }
};

int main() {
  /*  rectangle r;  //栈区创建
    rectangle* ptr = new rectangle(); // 堆区创建
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
