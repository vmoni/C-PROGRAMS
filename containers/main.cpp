#include <map>
#include <iostream>
using namespace std;

int main() {
    map<int, string> roll;
    roll[101] = "John";
    roll[101] = "Alice";
    roll[103] = "Bob";

    for (auto p : roll)
        cout << p.first << " -> " << p.second << endl;
}
