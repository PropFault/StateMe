#pragma once
#include <unordered_map>
#include "state.h"
#include "branch.h" 
#include "serializeable.h"
#include "register.h"
namespace stateme{
    class Graph : public Serializeable{
    private:
        std::unordered_map<State*,std::vector<Branch>> stateGraph;
        std::unordered_map<State*, std::vector<State*>> dependencyGraph; 
        Register &reg;
    public:
        Graph(Register &reg);
        virtual nlohmann::json serialize() = 0;
        virtual void deserialise(const nlohmann::json &json) = 0;
    };
}
