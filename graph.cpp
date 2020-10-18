#include "graph.h"
#include <nlohmann/json.hpp>
using namespace stateme;
#define GRAPH_SERIAL_STATE_GRAPH "stateGraph"
#define GRAPH_SERIAL_DEPENDENCY_GRAPH "dependencyGraph"
#define GRAPH_SERIAL_STATE_GRAPH_STATE "state"
#define GRAPH_SERIAL_STATE_GRAPH_BRANCHES "branches"

Graph::Graph(Register &reg)
:reg(reg){};

nlohmann::json Graph::serialize(){
    nlohmann::json json;
    std::vector<nlohmann::json> stateGraphSerialized;
    for(auto state : this->stateGraph){
        nlohmann::json stateJson;
        stateJson[GRAPH_SERIAL_STATE_GRAPH_STATE] = state.first->serialize();
        stateJson[GRAPH_SERIAL_STATE_GRAPH_BRANCHES] = nlohmann::json::array();
        for(auto& branch:state.second){
            stateJson[GRAPH_SERIAL_STATE_GRAPH_BRANCHES].push_back (branch.serialize());
        }
        stateGraphSerialized.push_back(stateJson);
    }
    json[GRAPH_SERIAL_STATE_GRAPH] = stateGraphSerialized;
//std::unordered_map<State*, std::vector<State*>> dependencyGraph; 
    json[GRAPH_SERIAL_DEPENDENCY_GRAPH] = nlohmann::json::array();
    for(auto dependency : this->dependencyGraph){
        
    }
    return json;
}
void Graph::deserialise(const nlohmann::json &json){
    for(auto element : json.at(GRAPH_SERIAL_STATE_GRAPH)){
        State* state = reg.constructState(element.at(GRAPH_SERIAL_STATE_GRAPH_STATE));
        std::vector<Branch*> branches;
        for(auto branch : element.at(GRAPH_SERIAL_STATE_GRAPH_BRANCHES)){
            
        }
    }
};