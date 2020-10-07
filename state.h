#pragma once
#include <exception>
#include <string>
#include <nlohmann/json.hpp>
#include "jsonserializeable.h"
namespace stateme{
    class State : public JsonSerializeable<State>{
    private:
        std::string name;
    public:
        State()
        :name("????????????"){};
        State(const std::string &name)
        :name(name){};

        const std::string& getName(){
            return name;
        }
        virtual void toJson(nlohmann::json& j)const{
            j["name"] = this->name;
        }
        virtual void fromJson(const nlohmann::json& j) {
            this->name = j.at("name").get<std::string>();
        }

        /*virtual void onStateEnter() = 0;
        virtual void onStateUpdate(double delta) = 0;
        virtual void onStateExit() = 0;
        virtual void onStateException(const std::exception &ex){};
        virtual State* clone()=0;*/
    };
}