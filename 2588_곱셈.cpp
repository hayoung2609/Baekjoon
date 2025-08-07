#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int third, forth, fifth, sixth;
    third = a * (b % 10);
    forth = a * (b / 10 % 10);
    fifth = a * (b / 100);
    sixth = third + (forth * 10) + (fifth * 100);

    cout << third << endl;
    cout << forth << endl;
    cout << fifth << endl;
    cout << sixth << endl;

    return 0;
}
ㅋ
