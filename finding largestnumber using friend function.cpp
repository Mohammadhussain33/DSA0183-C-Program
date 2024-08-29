#include <iostream>
using namespace std;

class Largest {
    int a, b, m;

public:
    void setData(int x, int y, int z) {
        a = x;
        b = y;
        m = z;
    }
    
    friend void find_Max(Largest obj);
};

void find_Max(Largest obj) {
    if (obj.a > obj.b && obj.a > obj.m)
        cout << "Maximum no is " << obj.a << endl;
    else if (obj.b > obj.a && obj.b > obj.m)
        cout << "Maximum no is " << obj.b << endl;
    else
        cout << "Maximum no is " << obj.m << endl;
}

int main() {
    Largest obj;
    int x, y, z;
    
    cout << "Enter the first no: ";
    cin >> x;
    cout << "Enter the second no: ";
    cin >> y;
    cout << "Enter the third no: ";
    cin >> z;

    obj.setData(x, y, z);
    find_Max(obj);
    
    return 0;
}

