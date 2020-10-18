#pragma once
#include <exception>
#include <string>
#include "serializeable.h"
namespace stateme{
    class State : public Serializeable{
    private:
        std::string name;
    public:
        State()
        :name("????????????"){};
        State(const std::string &name)
        :name(name){};

        const std::string& getName()const;


        virtual void onStateEnter() = 0;
        virtual void onStateUpdate(double delta) = 0;
        virtual void onStateExit() = 0;
        virtual void onStateException(const std::exception &ex);
        virtual State* clone()const=0;
    };
}