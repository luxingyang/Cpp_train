#include <iostream>
#include <cstdio>
using namespace std;

void swap(int &a, int &b) //引用传递
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int num1 = 1;
    int num2 = 2;
    swap(num1, num2);
    cout << "num1 = " << num1 <<", num2 = " << num2 << endl;
}