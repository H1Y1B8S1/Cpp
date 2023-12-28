#include <iostream>
using namespace std;

class Shape
{ //  base class
public:
    virtual void draw()
    { // virtual function
        cout << "drawing..." << endl;
    }
};

class Rectangle : public Shape //  inheriting Shape class.
{
public:
    void draw()
    {
        cout << "drawing rectangle..." << endl;
    }
};

class Circle : public Shape //  inheriting Shape class.
{
public:
    void draw()
    {
        cout << "drawing circle..." << endl;
    }
};

int main(void)
{
    //////////////////////////////////////////////////////////
    /*With help of pointer*/
    cout << "\t\t\tWith help of pointer" << endl;
    Shape *s; // base class pointer.
    Shape sh; // base class object.
    Rectangle rec;
    Circle cir;

    s = &sh;
    s->draw();
    s = &rec;
    s->draw();
    s = &cir;
    s->draw();
    ///////////////////////////////////////////////////////////
    /*Without pointer*/
    cout << "\t\t\tWithout pointer" << endl;
    Shape shape;
    shape.draw();

    Circle circle;
    circle.draw();
    circle.Shape::draw();

    Rectangle rectangle;
    rectangle.draw();
    rectangle.Shape::draw();
    ////////////////////////////////////////////////////////////
}