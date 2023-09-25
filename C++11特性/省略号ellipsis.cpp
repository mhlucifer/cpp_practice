#include <iostream>
#include <cstdarg>

int sum(int count, ...) {  // count 是可变参数的个数，... 表示可变参数
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
    std::cout << sum(5, 1, 2, 3, 4, 5) << std::endl; // 输出 15
}
