#pragma once
#include <string>
#include <array>
#include <iostream>

class useraccount
{
private:
	int userID;
	std::string email;

public:
	useraccount(int id, std::string email) : userID(id), email(email) {}

	// Serialize user account by bytes
	static std::array<char, 100> serialize(const useraccount &account);

	// Construct an user account from bytes
	static useraccount deserialize(const std::array<char, 100> &blob);

	// Print the useracount instant
	friend std::ostream &operator<<(std::ostream &os, const useraccount &account);
};
