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
