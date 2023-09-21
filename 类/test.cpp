#include<iostream>

class Rectangle
{
private:
    int length;
    int width;
    int around;
    int array[50];

public:
    Rectangle() : length(1), width(1) {}
    Rectangle(int a, int b);
    int area();
    int changelength(int& l);
    int permiter(int a, int b);
    ~Rectangle();
    void changevalue(int* a, int* b);
    void arraychange(int *array, int l);
};
void Rectangle::arraychange(int *array, int l)
{
    for (int i = 0; i < l; i++)
    {
        array[i] = array[i] * 2;
    }
}
void Rectangle::changevalue(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    std::cout <<"a=" << *a <<std::endl << "b=" << *b << std::endl;
}
int Rectangle::changelength(int& l)
{
    return l;
}
Rectangle::~Rectangle()
{

}

int Rectangle::permiter(int a, int b)
{
    around = (a * b) * 2; // 修正计算周长的公式为 (a + b) * 2
    return around;
}

Rectangle::Rectangle(int a, int b)
{
    length = a;
    width = b;
}

int Rectangle::area()
{
    return length * width;
}

int main()
{
    Rectangle r(2, 3);
    std::cout << "Area: " << r.area() << std::endl;
    std::cout << "Perimeter: " << r.permiter(2, 3) << std::endl; // 添加输出周长的语句
    int a = 2, b = 3;
    r.changevalue(&a, &b);
    int l = 10;
    int* arr = new int[l]; //创建新的内存
    for (int i = 0; i < l; i++)
    {
        arr[i] = i + 1;
        std::cout << arr[i] << " ";
    }
    
    r.arraychange(arr, l);
    for (int i = 0; i < l; i++)
    {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
