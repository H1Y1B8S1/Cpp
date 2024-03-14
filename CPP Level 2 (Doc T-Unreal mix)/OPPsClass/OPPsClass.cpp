#include <iostream>


class Employee
{
public:
	std::string Name, Company;
	int Age;

	Employee(std::string name, std::string company, int age)
	{
		Name = name;
		Company = company;
		Age = age;
	}

	void IntroduceYourself()
	{
		std::cout << "Name -" << Name << "\n";
		std::cout << "Company -" << Company << "\n";
		std::cout << "Age -" << Age << "\n";
	}
};


int main()
{
	Employee employee1("Sid", "IQ", 24);
	employee1.IntroduceYourself();
}


////////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string> // Include string header for std::string
//
//class Employee
//{
//private:
//	std::string Name;
//	std::string Company;
//	int Age;
//
//public:
//	// Constructor with member initializer list
//	Employee(const std::string& name, const std::string& company, int age)
//		: Name(name), Company(company), Age(age)
//	{
//	}
//
//	// Getter methods for encapsulation
//	const std::string& getName() const { return Name; }
//	const std::string& getCompany() const { return Company; }
//	int getAge() const { return Age; }
//
//	// Method to introduce the employee
//	void introduceYourself() const
//	{
//		std::cout << "Name: " << Name << "\n"
//			<< "Company: " << Company << "\n"
//			<< "Age: " << Age << "\n";
//	}
//};
//
//int main()
//{
//	// Create an employee object
//	Employee employee1("Sid", "IQ", 24);
//
//	// Call the introduce method
//	employee1.introduceYourself();
//
//	return 0;
//}
