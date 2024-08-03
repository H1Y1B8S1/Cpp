#include <iostream>
#include <map>
#include <unordered_map>

void demoMap()
{
    std::cout << "std::map demo:" << std::endl;

    // Create a map
    std::map<int, std::string> orderedMap;

    // Insert elements
    orderedMap[3] = "Three";
    orderedMap[1] = "One";
    orderedMap[2] = "Two";
    orderedMap.insert({4, "Four"});
    orderedMap[9]; // with value null i guess;

    // size 
    std::cout<<"size: "<<orderedMap.size()<<std::endl;

    // Access elements
    std::cout << "Element with key 2: " << orderedMap[2] << std::endl;

    // Find elements
    auto it = orderedMap.find(3);
    if (it != orderedMap.end())
    {
        std::cout << "Found element with key 3: " << it->second << std::endl;
    }
    else
    {
        std::cout << "Element with key 3 not found" << std::endl;
    }

    // Iterate over elements
    std::cout << "Elements in the ordered map:" << std::endl;
    for (const auto &pair : orderedMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Erase elements
    orderedMap.erase(2);
    std::cout << "Elements after erasing key 2:" << std::endl;
    for (const auto &pair : orderedMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Clear the map
    orderedMap.clear();
    std::cout << "Map size after clearing: " << orderedMap.size() << std::endl;
}

void demoUnorderedMap()
{
    std::cout << "std::unordered_map demo:" << std::endl;

    // Create an unordered map
    std::unordered_map<int, int > unorderedMap;

    // Insert elements
    unorderedMap[3] = 3;
    unorderedMap[1] = 1;
    unorderedMap[2] = 2;
    unorderedMap.insert({4, 4});
    unorderedMap[1]++; // it will affect the value of  key
    unorderedMap[100]; // it will initiate with the value 0
    unorderedMap[101];

    // Access elements
    std::cout << "Element with key 2: " << unorderedMap[2] << std::endl;

    // Find elements
    auto it = unorderedMap.find(3);
    if (it != unorderedMap.end())
    {
        std::cout << "Found element with key 3: " << it->second << std::endl;
    }
    else
    {
        std::cout << "Element with key 3 not found" << std::endl;
    }

    // Iterate over elements
    std::cout << "Elements in the unordered map:" << std::endl;
    for (const auto &pair : unorderedMap)
    {   
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Erase elements
    unorderedMap.erase(2);
    std::cout << "Elements after erasing key 2:" << std::endl;
    for (const auto &pair : unorderedMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Clear the map
    unorderedMap.clear();
    std::cout << "Map size after clearing: " << unorderedMap.size() << std::endl;
}

int main()
{
    demoMap();
    std::cout << std::endl;
    demoUnorderedMap();
    return 0;
}
