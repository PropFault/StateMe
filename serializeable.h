#pragma once
#include <nlohmann/json.hpp>
namespace stateme{
    class Serializeable{
    public:
        virtual nlohmann::json serialize() = 0;
        virtual void deserialise(const nlohmann::json &json) = 0;
    };
}