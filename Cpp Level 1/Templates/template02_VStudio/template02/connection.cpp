#include "connection.h"

std::array<char, 100> tcp_connection::read_next() const
{
	return data;
}

void tcp_connection::write_next(const std::array<char, 100>& blob)
{
	data = blob;
}

std::array<char, 100> udp_connection::read_next() const
{
	return  data;
}

void udp_connection::write_next(const std::array<char, 100>& blob)
{
	data = blob;
}
