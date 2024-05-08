#include <iostream>

    class first
    {
    public:
         void a()
        {
            std::cout << "a called from first\n";
        }

        void b()
        {
            std::cout << "b called from first\n";
        }

    private:
    };


int main()
{
    using firstns::first;
    first obj;
    obj.a();

}