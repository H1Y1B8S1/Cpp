#include <iostream>
#include <map>
#include <unordered_map>

int main(int argc, char const *argv[])
{

    std::map<std::string, int> myMap;
    myMap["Sid"] = 01;
    myMap["Siddharth"] = 02;
    myMap["Sinh"] = 03;

    for (const auto &pair : myMap)
    {
        // pair.first == key and pair.second == value of that key.
        std::cout << pair.first << " : " << pair.second << "\n";
    }

    // check key exist in the map.
    if (myMap.find("sid") != myMap.end()) // "sid" does not exist, "Sid" does.
    {
        std::cout << true << "\n";
    }
    else
    {
        std::cout << false << "\n";
    }

    myMap["Siddharth"] = 9;
    // Using iterators
    for (auto it = myMap.begin(); it != myMap.end(); ++it)
    {
        std::cout << it->first << " : " << it->second << "\n";
    }

    // Erase by key
    myMap.erase("sid"); // Removes the entry with key "Bob"

    // Clear the entire dictionary
    myMap.clear();

    // Check if the dictionary is empty
    if (myMap.empty())
    {
        std::cout << true << "\n";
    }

    // Get the number of elements in the dictionary
    size_t dictionarySize = myMap.size();
    std::cout << dictionarySize << "\n";

    //----------------------------------------------------------------------//

    std::unordered_map<int, std::string> myMap2;
    myMap2[1] = "Value1";
    myMap2[2] = "Value2";
    myMap2[3] = "Value3";

    // lambda Function to add a new value to the map
    auto addValueToMap = [&](int key, const std::string &value)
    {
        // Check if the key already exists in the map
        if (myMap2.find(key) == myMap2.end())
        {
            // Key doesn't exist, add the value to the map
            myMap2[key] = value;
            std::cout << "Value added successfully.\n";
        }
        else
        {
            // Key already exists, cannot add the same value multiple times
            std::cout << "Error: Value with key " << key << " already exists in the map.\n";
        }
    };

    // Try adding a new value with key 4
    addValueToMap(4, "Value4"); 

    // Try adding a value with an existing key (key = 2)
    addValueToMap(2, "Value2Duplicate");

    return 0;
}
