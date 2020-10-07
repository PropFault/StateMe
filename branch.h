#pragma once
#include "condition.h"
#include "state.h"
namespace stateme{
    class Branch{
    private:
        const Condition *condition;
        State *state;
        int priority;
    public:
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
        }
    }
}