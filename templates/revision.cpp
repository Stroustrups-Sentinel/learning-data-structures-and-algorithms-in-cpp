#include <iostream>
#include <string>

template <typename T>
T add(T, T);

int main()
{
    std::cout << "[🔥] Hello World 💜=" << add(8,24);
    return 0;
}

template <typename T>
T add(T a, T b)
{
    return a + b;
}

