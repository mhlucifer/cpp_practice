# include<iostream>
struct Rectangle
{
    int length;
    int width;
};
int main()
{
    struct Rectangle r = { 10,5 };
    std::cout << r.length << std::endl;
}