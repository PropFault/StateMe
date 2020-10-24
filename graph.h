#pragma once
#include <unordered_map>
#include "state.h"
#include "branch.h" 
#include "register.h"
#include "IDOS/ido.h"
namespace stateme{
    class Graph : public idos::IDO{
    private:
        ///                 State                       Branch
        std::unordered_map<idos::IDO::ID,std::vector<idos::IDO::ID>> stateGraph;
        ///                 State                       State
        std::unordered_map<idos::IDO::ID, std::vector<idos::IDO::ID>> dependencyGraph; 
        Register &reg;
    public:
        Graph(Register &reg);

        virtual idos::DataPack _pack() const override;
        virtual void _unpack(const idos::DataPack &pack) override;
        virtual IDO *clone()override;
    };
}
