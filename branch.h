#pragma once
#include "condition.h"
#include "state.h"
#include "IDOS/ido.h"
namespace stateme{
    class Branch:public idos::IDO{
    private:
        idos::IDO::ID condition;
        idos::IDO::ID state;
        int priority;
    public:
        static const std::string PACK_CONDITION;
        static const std::string PACK_STATE;
        static const std::string PACK_PRIORITY;

        Branch(int priority);
        Branch(const idos::IDO::ID &condition, const idos::IDO::ID &state, int prioritym);
        

        const idos::IDO::ID &getCondition()const;
        void setCondition(const idos::IDO::ID &condition);

        const idos::IDO::ID &getState()const;
        void setState(const idos::IDO::ID &id);  

        virtual idos::DataPack _pack() const override;
        virtual void _unpack(const idos::DataPack &pack) override;
    
        virtual IDO *clone()override;
    }; 
}