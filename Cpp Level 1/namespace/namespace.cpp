#include<iostream>

namespace a
{
    void a(){
        std::cout<<"func: a is called."<<"\n";
    }
} // namespace a

namespace b
{
    void b(){
        std::cout<<"func: b is called."<<"\n";
    }
} // namespace b

namespace 
{
    void c(){
        std::cout<<"func: c is called."<<"\n";
    }
} // namespace without any name(unknown)

int main(){
    c();
    a::a();
    b::b();

    std::cout<<"main called.";
}