#include "connection.h"
#include "useraccount.h"

template <typename Object, typename Connection>
void writeObjectToConnection(Connection &con, const Object &obj)
{
    std::array<char, 100> data = obj.serialize(obj);
    con.write_next(data);
}
// Read an object from a generic connection.
// The connection needs to have a 'readNext()' method which
// returns an array of 100 chars.
// The object must have a static 'deserialize' function
// which crates a new instance of the objects from an array of 100 chars
template <typename Object, typename Connection>
Object readObjectFromConnection(Connection &con)
{
    // Inside the function we can use Object as if it was a real type
    std::array<char, 100> data = con.read_next();
    return Object::deserialize(data);
}

int main()
{
    // Create an account
    useraccount source(1, "siddharthsinh@gmail.com");
    std::cout << "Original: " << source << "\n";
    // Create a local TCP connection
    tcp_connection tcp_connection;
    writeObjectToConnection(tcp_connection, source); // write the account to the connection

    // Read an user account from the content in the connection
    // We explicitly specify the type of the object to read
    useraccount useraccountTcp = readObjectFromConnection<useraccount>(tcp_connection);
    std::cout << "Deserialized on TCP: " << useraccountTcp << std::endl;

    // Create a local UDP connection and serialize the object into it.
    // Note: the template just works, we don't have to write a new function for the new
    //       connection!
    udp_connection udp_connection;
    writeObjectToConnection(udp_connection, source);
    useraccount useraccountUdp = readObjectFromConnection<useraccount>(udp_connection);
    std::cout << "Deserialized on UDP: " << useraccountUdp << std::endl;
}
