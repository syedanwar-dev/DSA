#include <iostream>
using namespace std;
int main () {
    const int x = 10;
    const int y = 5;

    switch (x + y) 
    {
        case 15:
        cout <<"result is 15";
        break;

        case 20:
        cout <<"result is 20";
        break;
        default:
        cout <<"match not  found";
    }
    return 0;
}