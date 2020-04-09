#include <iostream>
using namespace std;
double divide(double x, double y){
    if(y==0)
    throw "分母不能是 0";
    else
    return x/y;
}
int main(){
    double x = 10;
    double y = 0;
    double z;
    try{ 
        z = divide(x,y);
        cout << z << endl;
    }catch(char const* msg){
        cerr << msg << endl;
    }
    return 0;
}