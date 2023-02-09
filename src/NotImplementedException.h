#pragma once

#include <stdexcept>
#include <string>

namespace errors
{
#define NOT_IMPLEMENTED_EXCEPTION NotImplementedException(__FUNCTION__)

    class NotImplementedException final : public std::logic_error
    {
    public:
        explicit NotImplementedException(std::string const& functionName)
            : logic_error(functionName + " is not yet implemented")
        {
        }
    };
}
