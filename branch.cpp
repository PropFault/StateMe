#include "branch.h"
#include "state.h"
#include "condition.h"
using namespace stateme;
using namespace idos;

/*
        Branch(Condition *condition, State *state, int prioritym)
        :condition(condition), state(state), priority(priority){}

        const Condition *getCondition()const{
            return condition;
        }
        void setCondition(const Condition *condition){
            this->condition = condition;
        }

        State* getState()const{
            return state;
        }

        void setState(State* state){
            this->state = state;
        }*/

        
const std::string Branch::PACK_CONDITION = "condition";
const std::string Branch::PACK_STATE = "state";
const std::string Branch::PACK_PRIORITY = "priority";

Branch::Branch(int priority)
:idos::IDO("stateme::Branch"), priority(priority){}

Branch::Branch(const idos::IDO::ID &condition, const idos::IDO::ID &state, int prioritym)
:condition(condition), state(state), priority(prioritym){}

const idos::IDO::ID & Branch::getCondition()const{
    return this->condition;
}
void Branch::setCondition(const idos::IDO::ID &condition){
    this->condition = condition;
}

const idos::IDO::ID &Branch::getState()const{
    return this->state;
}
void Branch::setState(const idos::IDO::ID &id){
    this->state = id;
} 


DataPack Branch::_pack() const{
    DataPack pack;
    pack[PACK_CONDITION] = this->condition;
    pack[PACK_STATE] = this->state;
    pack[PACK_PRIORITY] = this->priority;
    return pack;
}
void Branch::_unpack(const idos::DataPack &pack){
    this->condition = pack.at(PACK_CONDITION);
    this->state = pack.at(PACK_STATE);
    this->priority = pack.at(PACK_PRIORITY);
}
    
IDO *Branch::clone(){
    return new Branch(*this);
}