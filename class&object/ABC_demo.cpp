#include <iostream>
using namespace std;

//ABC: 抽象类abstract class，也叫做接口
class Shape{
    public:
    virtual int getArea() = 0;
    void setWidth(int w){width = w;}
    void setHeight(int h) {height = h;}
    protected:
    int width;
    int height;
};

//派生类，也叫做具体类，虚覆盖纯虚函数，继承getArea()这个操作
class Rectangle: public Shape{
    public:
    int getArea(void){return width*height;}
};

class Triangle: public Shape{
    public:
    int getArea(void) {return width*height/2;}
};

int main(int argc, char *argv[])
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setWidth(5);
    Rect.setHeight(6);
    Tri.setWidth(5);
    Tri.setHeight(6);

    cout << "Rectangle Area: " << Rect.getArea() << endl;
    cout << "Triangel  Area: " << Tri.getArea() << endl;
    return 0;
}