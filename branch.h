#pragma once
#include "condition.h"
#include "state.h"
#include "serializeable.h"

namespace stateme{
    class Branch : public Serializeable{
    private:
        const Condition *condition;
        State *state;
        int priority;
    public:
        Branch(Condition *condition, State *state, int prioritym);

        const Condition *getCondition()const;
        void setCondition(const Condition *condition);

        State* getState()const;
        void setState(State* state);        
    }; 
}