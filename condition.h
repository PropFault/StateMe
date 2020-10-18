#pragma once
#include <string>
#include "serializeable.h"

namespace stateme{
    class Condition:public Serializeable{
    private:
        const std::string name;
    public:
        Condition(const std::string& name)
        :name(name){}
        const std::string &getName();

        virtual bool evaluate() const = 0;
        virtual Condition* clone() = 0;
    };
}