#include <iostream>
using namespace std;

void swap(int x , int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    swap(a,b);
    cout << "Value of the a is:" << a<<endl;
    cout << "Value of the b is:" << b<<endl;
    return 0;
}

/*
OUTPUT
5
10
Value of the a is:5
Value of the b is:10
*/
