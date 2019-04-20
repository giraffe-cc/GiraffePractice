#include <iostream>

// Fibonacci sequence
long long FibonacciSequence(long long N) {
    if (N < 3) {
        return 1;
    }
    return (FibonacciSequence(N - 1) + FibonacciSequence(N - 2));
}

int main() {
    long long n = 0;
    while(1) {
        std::cout << "(输入0退出打印)打印第n个斐波那契数列：n = " ;
        std::cin >> n;
        if (n <= 0) {
            return 0;
        }else {
            long long ret = FibonacciSequence(n);
            std::cout << "第n个斐波那契数列为：" << ret << std::endl;
        }
    }
    return 0;
}
