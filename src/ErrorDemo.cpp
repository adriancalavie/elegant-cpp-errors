#include "NotImplementedException.h"

#include <iostream>

class MyClass
{
public:
    static void some_method()
    {
        throw errors::NOT_IMPLEMENTED_EXCEPTION;
    }
};

int main(int argc, char* argv[])
{
    try
    {
        MyClass::some_method();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what();
    }

    return 0;
}
