#include <iostream>
#include "uint256.h"

int main()
{
    base_blob<64> bb64;

    std::cout << bb64.ToString() << std::endl;

    dummy_string<8> ds8;
    std::cout << ds8.DummyString() << std::endl;

    return 0;
}
