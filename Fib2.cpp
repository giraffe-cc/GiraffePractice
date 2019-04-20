#include <iostream>

long long Fib2 (long long first , long long second , long long n) {
    if (n < 3) {
        return 1;
    }else if (n == 3) {
        return (first + second);
    }else {
        return Fib2(second , (first + second) , (n - 1));
    }
}

int main() {
    long long n = 0;
    while(1) {
        std::cout << "(输入0退出打印)打印第n个斐波那契数列：n = " ;
        std::cin >> n;
        if (n <= 0) {
            return 0;
        }else {
            long long ret = Fib2(1 , 1 , n);
            std::cout << "第n个斐波那契数列为：" << ret << std::endl;
        }
    }
    return 0;
}
