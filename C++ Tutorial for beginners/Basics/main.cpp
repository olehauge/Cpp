#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    const short maxValue = 6;
    const short minValue = 1;
    int first = (rand() % (maxValue - minValue + 1)) + minValue;
    int second = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << first << ", " << second;
    return 0;
}