#include "register.h"
#include "state.h"
#include "condition.h"

using namespace stateme;
using namespace std;

Register::Register()
:Register(std::vector<State*>(), std::vector<Condition*>()){};

Register::Register(const std::vector<State*> &states, const std::vector<Condition*> &conditions){
    for (auto state : states)
    {
        this->states[state->getName()] = state;
    }
    for (auto condition : conditions)
    {
        this->conditions[condition->getName()] = condition;
    }
}

const std::unordered_map<std::string, State*> &Register::getStates()const{ 
    return this->states; 
}
void Register::registerState(State* state){
    this->states.insert(pair(state->getName(), state));
}

void Register::unregisterState(const std::string& stateName){
    this->states.erase(stateName);
}

void Register::unregisterState(State* state){
    this->unregisterState(state->getName());
}

State* Register::constructState(const nlohmann::json &json)const{
    return this->constructState(json.at("name").get<std::string>(), json);
}

State* Register::constructState(const std::string& stateName, const nlohmann::json &initParam)const{
    State* state = this->states.at(stateName);
    state->deserialise(initParam);
    return state;
}


const std::unordered_map<std::string, Condition*> Register::getConditions()const{
    return this->conditions;
}
void Register::registerCondition(Condition* condition){
    this->conditions.insert(pair(condition->getName(), condition));
}
void Register::unregisterCondition(const std::string &conditionName){
    this->conditions.erase(conditionName);
}
void Register::unregisterCondition(Condition* condition){
    this->unregisterCondition(condition->getName());
}

Condition* Register::constructCondition(const nlohmann::json &json)const{
    return this->constructCondition(json.at("name"), json);
}

Condition* Register::constructCondition(const std::string& conditionName, const nlohmann::json &json)const{
    Condition* condition = this->conditions.at(conditionName);
    condition->deserialise(json);
    return condition;
}


Register::~Register(){
    for(auto state : this->states)
        delete state.second;
    for(auto condition : this->conditions)
        delete condition.second;
}