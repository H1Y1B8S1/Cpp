#include <iostream>

class AbstractEmployee
{
	virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
	std::string Name, Company;
	int Age;

public:
	void setName(std::string name) { Name = name; }
	void setCompany(std::string company) { Company = company; }
	void setAge(int age) { Age = age; }

	std::string getName() { return Name; }
	std::string getCompany() { return Company; }
	int getAge() { return Age; }

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

	void AskForPromotion() override
	{
		if (Age > 30)
			std::cout << Name << " got promoted!\n";
		else
			std::cout << "LOL\n";
	};
};


class Developer : Employee{

public: 
	std::string favProgrammingLanguage = "C++";

	Developer(std::string name, std::string company, int age, std::string favLang){}
};

int main()
{
	Employee employee1("Sid", "IQ", 24);
	employee1.IntroduceYourself();
	employee1.AskForPromotion();


	Employee employee2("Siddharth", "IQ", 34);
	employee2.IntroduceYourself();
	employee2.AskForPromotion();

	

}


//////////////////////////////////////////////////////////////////////////////////////////
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
