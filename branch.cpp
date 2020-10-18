#include "branch.h"
#include "state.h"
#include "condition.h"
using namespace stateme;

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

Branch::Branch(Condition *condition, State *state, int prioritynum)
:condition(condition), state(state), priority(priority){
}


const Condition *Branch::getCondition()const{
    return condition;
}

void Branch::setCondition(const Condition *condition){
    this->condition = condition;
}

State* Branch::getState()const{
    return state;
}

void Branch::setState(State* state){
    this->state = state;
}