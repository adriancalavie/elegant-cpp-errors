#include "NotImplementedException.h"

#include <iostream>

/**
 * \brief Dummy class for testing purposes.
 */
class MyClass
{
public:
    /**
     * \brief Dummy method that is unimplemented and should throw a not implemented exception.
     */
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
        // Output: MyClass::some_method is not yet implemented
    }

    return 0;
}
