#include <iostream>
#include <cstdarg>

int sum(int count, ...) {  // count �ǿɱ�����ĸ�����... ��ʾ�ɱ����
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

int main() {
    std::cout << sum(5, 1, 2, 3, 4, 5) << std::endl; // ��� 15
}
