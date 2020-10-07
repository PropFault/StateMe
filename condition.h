#pragma once
#include <string>

namespace stateme{
    class Condition{
    private:
        const std::string name;
    public:
        Condition(const std::string& name)
        :name(name){}
        const std::string &getName(){
            return name;
        }

        virtual bool evaluate() const = 0;
        virtual Condition* clone() = 0;
    }
}