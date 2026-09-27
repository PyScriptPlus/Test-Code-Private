#include <iostream>
#include <exception>
#include <string>

class Myexception : public std::exception
{
    public:
        Myexception() noexcept = default;

        explicit Myexception(const std::string& msg) noexcept
            : message_(msg) {}
        
        const char* what() const noexcept override
        {
            return message_.empty() ? "Except" : message_.c_str();
        }


    private:
    std::string message_;
};



int main() {

    try
    {
        if(0 == 0) throw Myexception("Alooo\n");
    }
    catch(Myexception& msg)
    {
        throw Myexception(msg);
    }
    

    return 0;
}