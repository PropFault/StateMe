#include "graph.h"
#include <nlohmann/json.hpp>
using namespace stateme;
#define GRAPH_SERIAL_STATE_GRAPH "stateGraph"
#define GRAPH_SERIAL_DEPENDENCY_GRAPH "dependencyGraph"
#define GRAPH_SERIAL_STATE_GRAPH_STATE "state"
#define GRAPH_SERIAL_STATE_GRAPH_BRANCHES "branches"

Graph::Graph(Register &reg)
:idos::IDO("stateme::Graph"), reg(reg){};

idos::DataPack Graph::_pack() const{
    idos::DataPack dataPack;
    for(auto& row : this->stateGraph){
    }
}

void Graph::_unpack(const idos::DataPack &pack);
IDO *Graph::clone();