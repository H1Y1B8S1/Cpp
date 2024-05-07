#include <iostream>

namespace firstns
{
    class first
    {
        void a()
        {
            std::cout << "a called from first\n";
        }

        void b()
    {
        std::cout << "b called from first\n";
    }
    };

} // namespace firstns

namespace secondns
{
    void a()
    {
        std::cout << "a called from second\n";
    }
} // namespace secondns

int main()
{
    std::cout << "hello\n";

    firstns::first::a();
    secondns::a();
}