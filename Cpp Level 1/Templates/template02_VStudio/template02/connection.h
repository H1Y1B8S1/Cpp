#pragma once
#include <array>

class tcp_connection
{
public:
	// Read the next 100 bytes in the connection
	std::array<char, 100> read_next() const;

	// Write the next 100 bytes in the connection
	void write_next(const std::array<char, 100>& blob);

private:
	// In this simplified class, we do not send data over the network
	// but we only store 100 bytes locally.
	std::array<char, 100> data;
};

// For simplicity this class is implemented like TcpConnection.
// In a real application this class would stream data over a UDP connection
class udp_connection
{
private:
	std::array<char, 100> data;
public:
	std::array<char, 100> read_next() const;
	void write_next(const std::array<char, 100>& blob);
};