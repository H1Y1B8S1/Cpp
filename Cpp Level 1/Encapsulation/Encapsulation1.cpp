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
	// Method to create an apple with a specified sweetness level.
	Apple createFruit(int sweetness)
	{
		Apple appleObj(sweetness); // Object creation using private constructor
		return appleObj;
	}

	void shakeTree()
	{
		std::cout << "Shaking the tree...\n";
		std::cout << "Apples are falling....\n";
	}
};

int main()
{
	AppleTree tree;
	tree.createFruit(3);
	tree.shakeTree();
	return 0;
}
