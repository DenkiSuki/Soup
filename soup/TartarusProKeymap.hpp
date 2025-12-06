#pragma once
#include "Key.hpp"   // contains enum Key
#include "UniquePtr.hpp"
#include "json.hpp"

NAMESPACE_SOUP
{
    extern Key tartarusProCurrentMap[20];
    void loadTartarusMapFromJson(JsonNode* node, Key* map, size_t mapSize);
    void loadTartarusJsonFile(std::filesystem::path path);
}