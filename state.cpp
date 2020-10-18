#include "state.h"
using namespace stateme;

const std::string& State::getName()const{
    return this->name;
}

void State::onStateException(const std::exception &ex){
    //**EMPTY**//
}
