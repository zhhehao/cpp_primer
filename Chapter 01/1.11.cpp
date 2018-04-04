#include <iostream>
#include <algorithm>

int main()
{
    int a, b;
    std::cout << "请输入两个整数：" << std::endl;
    std::cin >> a >> b;

    if (b < a)
        std::swap(a, b);

    for (int i = a; i <= b; i++)
        std::cout << i << ",";
    std::cout << std::endl;
}
