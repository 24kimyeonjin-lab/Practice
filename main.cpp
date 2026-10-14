#include <iostream>
#include <array>

int  main()
{
    std::array<int, 3> a{1, 2, 3};
    std::cout << a.at(0) << std::endl;
    std::cout << a[1] << std::endl;
    std::cout << a.size() << std::endl;

    for(int i=0; i<a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;

    for(const auto& ai : a)
        std::cout << ai << ' ';
    std::cout << std::endl;

    return 0;
}