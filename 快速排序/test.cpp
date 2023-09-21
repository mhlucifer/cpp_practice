# include<iostream>
#include<algorithm>
using namespace std;
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i++; while (q[i] < x);
        do j--; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}

int main()
{
    int a[8] = { 1,3,5,6,3,7,8,34 };
    quick_sort(a, 0, 7);
    for (int i = 0; i < 8; i++) // 如果你想打印排序后的数组，可以添加这个循环
        cout << a[i] << " ";
    return 0;
}

void quick_serarch(int a[],int l,int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = a[l + r >> 1];
    while (i < j)
    {
        do i++; while (a[i] < x);
        do j--; while (a[j] > x);
        if (i < j) swap(a[i], a[j]);

    }
    quick_serarch(a, l, j); quick_serarch(a, j + 1, r);
}