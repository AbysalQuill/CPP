#include <iostream>
#include <string>
using namespace std;
int main(){
    stirng a,b,c,s;
    cin>>a>>b>>c;
    s=a+b+c;
    int hexValue = stoi(s, nullptr, 16);
    int decValue = stoi(s, nullptr, 10);
    int octValue = stoi(s, nullptr, 8);
    
    cout << hexValue << " " << decValue << " " << octValue << endl;
    return 0;
}