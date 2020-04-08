#include <iostream>
using namespace std;
class Box {
public:
  //构造函数，名称必须与类相同，没有返回类型
  Box(int num) {
    cout << "box numbered " << num << " is created" << endl;
    number = num;
    box_count++;
  }
  //析构函数，名称必须与类相同，前面加~，没有返回类型
  ~Box() { cout << "box numberd " << number << " is deleted" << endl; }
  friend void print_owner(Box box); //声明友函数，需要在类外定义
  double getvolume(void) { return length * width * height; }
  string getconfig(void) { return config; }
  char *getowner(void) { return owner; }

  double number;
  double length;
  double width;
  double height;
  static int box_count;

private:
  // 利用c风格的字符串 char*
  char owner[20] = "lu xingyang"; //私有成员，一般无法访问，除非通过类成员函数
  // 利用c++的string类
  string config =
      "This class desripts a solid box with length, width and height";
};

int Box::box_count = 0;
void print_owner(Box box) {
  cout << "Box 的所有者：" << box.owner << "（利用友元函数访问private成员）"
       << endl;
}

int main() {
  Box box1(1);
  Box box2(2);

  box1.length = 1;
  box1.width = 2;
  box1.height = 3;
  box2.length = 1.5;
  box2.width = 2.5;
  box2.height = 3.5;

  double volume1;
  volume1 = box1.width * box1.length * box1.height;

  cout << "box1 的体积：" << volume1 << endl;
  cout << "box2 的体积：" << box2.getvolume() << endl;
  cout << "Box 的描述：" << box1.getconfig() << endl;
  cout << "Box 的所有者：" << box1.getowner() << endl;
  print_owner(box1);
  cout << "Box总数：" << Box::box_count << endl;
  cout << "Box总数：" << box1.box_count << endl;

  return 0;
}
// 退出main函数，Box的两个对象就被删除了，所以析构函数是有用的。