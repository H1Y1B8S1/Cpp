#include <iostream>

class Apple
{
	friend class AppleTree; // Friend class declaration
private:
	int sweetnesslevel;

	explicit Apple(int sweetness) : sweetnesslevel(sweetness)
	{
		std::cout << "An apple is created with sweetness level " << sweetnesslevel << "!\n";
	}
};

class AppleTree
{
public:
  // Constructor to create an AppleTree with a specified sweetness level for the apple
  AppleTree(int sweetness){
    Apple apple(sweetness); // Creating an apple using private constructor of Apple Class.
  }

  // Method to simulate shaking the apple tree and making apples fall
  void shakeTree(){
    std::cout << "Shaking the tree..." << std::endl;
    std::cout << "Apples are falling!" << std::endl;
  }
};

int main() {
  // Create an AppleTree with a specified sweetness level (8)
  AppleTree tree(8);

  // Shake the tree to make apples fall
  tree.shakeTree();
  
  return 0;
}