#include <iostream>
using namespace std;

int x = 10, y = 6, z = 2;
int sum = x + y + z;
int sub = x - y - z;
int mul = x * y * z;
int divide = x / y / z;
int mod = x % y % z;
int preIncrement = ++x;
int postIncrement = x++;
int preDecrement = --x;
int postDecrement = x--;

int main (){
    cout << sum << "\n" << sub << "\n" << mul << "\n" << divide << "\n" << mod << "\n" << preIncrement << "\n" << postIncrement << "\n" << preDecrement << "\n" << postDecrement;
    return 0; 
}
