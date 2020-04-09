#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    cout << "随便输入点什么（Ctrl + D结束输入）：" ;
    while(getline(cin,line,'\n')){
        // \n是可以省略的，因为是默认的，可以改称如#等其他字符
        cout << "你输入的是：" << line << endl;
    }
    cout << "输入结束" << endl;
    return 0;
}