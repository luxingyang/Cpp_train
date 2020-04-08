#include <cmath>
#include <iostream>
using namespace std;

class Coord {
public:
  void setx(double x_value) { x = x_value; }
  void sety(double y_value) { y = y_value; }
  double getx(void) { return x; }
  double gety(void) { return y; }
  double getdistance(void) { return distance; }
  Coord operator-(Coord &coo) {
    Coord coo_relative;
    coo_relative.x = this->x - coo.x;
    coo_relative.y = this->y - coo.y;
    coo_relative.distance =
        sqrt(pow(coo_relative.x, 2) + pow(coo_relative.y, 2));
    return coo_relative;
  }

private:
  double x;
  double y;
  double distance;
};

int main(int argc, char *argv[]) {
  Coord point1;
  Coord point2;
  Coord relative_coord;
  point1.setx(-1.0);
  point1.sety(-1.5);
  point2.setx(2.0);
  point2.sety(2.5);
  relative_coord = point2 - point1; //直接用"-"操作自定义的类的对象
  cout << "两个点之间相对坐标为：x=" << relative_coord.getx()
       << ", y=" << relative_coord.gety() << endl;
  cout << "两个点之间的相对距离为 " << relative_coord.getdistance() << endl;
  return 0;
}