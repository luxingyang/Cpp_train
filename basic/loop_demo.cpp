#include <iostream>
using namespace std;
int for_add(int n){
    int sum = 0;
    int i;
    for(i=0;i<=n;i++){
        sum += i;
    }
    return sum;
}

int while_add(int n){
    int sum = 0;
    while(n>0){
        sum += n;
        n--;
    }
    return sum;
}

int main(){
    int n = 10;
    cout << for_add(n) << endl;
    cout << while_add(n) << endl;
    return 0;
}