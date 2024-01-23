#include <iostream>
#include <map>

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

    return 0;
}
