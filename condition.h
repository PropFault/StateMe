#pragma once
#include <string>
#include "IDOS/ido.h"

namespace stateme{
    class Condition: public idos::IDO{
    public:
        Condition(const std::string& conditionType);
        virtual bool evaluate() const = 0;
        virtual ~Condition();
    };
}