#pragma once

#include <stdexcept>
#include <string>

namespace errors
{

    /**
     *  \brief Wrapper Macro for errors::NotImplementedException that automatically takes the current function name
     *  using the "__FUNCTION__" macro
     */
#define NOT_IMPLEMENTED_EXCEPTION NotImplementedException(__FUNCTION__)

    /**
     * \brief This exception should be thrown when implementing methods/functions that have no implementation for now. 
     */
    class NotImplementedException final : public std::logic_error
    {
    public:
        explicit NotImplementedException(std::string const& functionName)
            : logic_error(functionName + " is not yet implemented")
        {
        }
    };
}
