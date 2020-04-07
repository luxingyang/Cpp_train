#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[]) //argv是字符串数组 **argv = *argv[]
{
    cout << "输入姓名: ";
    char name[50]; //初始化指定长度，不能用*name
    cin >> name;
    cout << "Hello, world, you are " << name  << endl;
    string saying = "Hello, world by string!";
    printf("%s\n", saying.c_str());
    cout << "saying的地址：" << &saying << endl; 

    char saying2[] = "Hello,world by char!"; //可以用*saying，但是会有警告
    printf("%s\n", saying2);

    printf("argv: %s\n", argv[0]);
    return 0;
}