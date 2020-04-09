#include <iostream>
using namespace std;

int main() {
  char score;
  cout << "输入等级：A-D or F" << endl;
  cin >> score;
  switch (score) {
  // case后必须根整型或字符，不能是字符串！
  case 'A' :
    cout << "Excellent!" << endl;
    break; //若是没有break，后面的case都会被执行，无论是否符合
  case 'B' :
    cout << "Good." << endl;
    break;
  case 'C' :
    cout << "OK." << endl;
    break;
  case 'D' :
    cout << "At least passed." << endl;
    break;
  case 'F' :
    cout << "Sorry, failed." << endl;
    break;
  default :
    cerr << "Invalid input." << endl;
  }

  return 0;
}