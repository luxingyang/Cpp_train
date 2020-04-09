#include <fstream>
// #include <string>
#include <iostream>
using namespace std;
int main(){
    string data;

    //以写模式打开文件
    ofstream outfile;
    outfile.open("afile.dat", ios::out); //可以省略ios::out，这是默认的

    cout << "Writing to the file" << endl;
    cout << "Enter you name: ";
    getline(cin,data);   //getline(istream& is, string& str, char delim)
    outfile << data << endl;

    cout << "Enter you age: ";
    cin >> data;
    cin.ignore();
    outfile << data <<endl;
    outfile.close();

    ifstream infile;
    infile.open("afile.dat", ios::in);

    cout << "Reading from the file " << endl;
    string line;
    getline(infile, line);
    cout << line << endl;
    infile >> data;
    cout << data << endl;
    infile.close();

    return 0;
}