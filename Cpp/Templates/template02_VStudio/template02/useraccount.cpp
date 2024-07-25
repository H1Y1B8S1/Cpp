#include "useraccount.h"
#include <sstream>
#include <algorithm>

std::array<char, 100> useraccount::serialize(const useraccount &account)
{
	// In this case we are encoding the types into a string and converting that to an array
	constexpr size_t size = 100;
	std::array<char, size> blob;

	// Create a stream similar to the standard output, but in memory
	std::ostringstream oss;
	// write the user account field there
	oss << account.userID;
	oss << ' ';
	oss << account.email;

	std::string serialized = oss.str();
	// Copy the data in the stream into the blob of bytes we want to return
	// We use std::min to be sure not to copy more items than the blob can contain.
	auto remaining = std::copy_n(serialized.cbegin(), std::min(serialized.length(), size), blob.begin());

	// Fill the part of the blob which was not already fill with the fields, so that we don't leave any
	// part of the blob uninitialized.
	std::fill(remaining, blob.end(), ' ');
	return blob;
}

useraccount useraccount::deserialize(const std::array<char, 100> &blob)
{
	// Read the content of the blob into a string
	std::string content(blob.cbegin(), blob.cend());
	// Create a stream similar to stdin, but in memory, providing the content we stored in the string
	std::istringstream iss(content);

	// Read the user id
	int userId = 0;
	iss >> userId;

	// Read the email
	std::string email;
	iss >> email;

	// Create the new user account
	return useraccount(userId, email);
}

std::ostream &operator<<(std::ostream &os, const useraccount &account)
{
	os << "userId: " << account.userID << " email: " << account.email;
	return os;
}
