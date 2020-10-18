#pragma once
#include "serializeable.h"
#include "state.h"
#include "condition.h"
#include <unordered_map>
#include <string>
#include <vector>

namespace stateme{
    class Register{
    private:
        std::unordered_map<std::string, State*> states;
        std::unordered_map<std::string, Condition*> conditions;
    public:
        Register();
        Register(const std::vector<State*> &states, const std::vector<Condition*> &conditions);

        const std::unordered_map<std::string, State*> &getStates()const;
        void registerState(State* state);
        void unregisterState(State* state);
        void unregisterState(const std::string& stateName);
        State* constructState(const nlohmann::json &initParam)const;
        State* constructState(const std::string& stateName,const nlohmann::json &initParam)const;

        const std::unordered_map<std::string, Condition*> getConditions()const;
        void registerCondition(Condition* condition);
        void unregisterCondition(Condition* condition);
        void unregisterCondition(const std::string &conditionName);
        Condition* constructCondition(const nlohmann::json &initParam)const;
        Condition* constructCondition(const std::string& conditionName,const nlohmann::json &initParam)const;

        virtual ~Register();
    };
}