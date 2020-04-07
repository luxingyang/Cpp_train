#include <ctime>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  time_t now = time(0);
  char *time_str = ctime(&now); //&:指针传递, *time_char = time_char[]
  cout << "本地日期时间：" << time_str << endl;

  tm *gmtm = gmtime(&now); //得到格林尼治标准时间，返回为一个结构体
  char *gmtm_str = asctime(gmtm);
  cout << "UTC （GMT）日期时间：" << gmtm_str << endl;

  cout << "直接输出now=" << now << "秒数" << endl;
  tm *tm_struct = localtime(&now);
  cout << "年: " << 1900 + tm_struct->tm_year << endl; //用->访问结构体成员
  cout << "月: " << 1 + (*tm_struct).tm_mon << endl; //用.访问结构体成员
  cout << "日: " << tm_struct->tm_mday << endl;
  cout << "时间: " << tm_struct->tm_hour << ":";
  cout << tm_struct->tm_min << ":";
  cout << tm_struct->tm_sec << endl;
}
