#include <iostream>
class IStudent{
    public:
    // virtual void age() = 0;
    virtual void name(const std::string& name) = 0;

    virtual ~IStudent(){}
};

class Teach : public IStudent
{
    public:
    void name(const std::string& name) override
    {
        std::cout << name << '\n';
        return;
    }

};

int main() {

    Teach plug;
    std::string name = "Mohammad";
    plug.name(name);


    return 0;
}