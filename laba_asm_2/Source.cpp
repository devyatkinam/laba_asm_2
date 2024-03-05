#include <iostream>
using namespace std;

int main() {

    int x, result;
    cin >> x;

    _asm {

        mov eax, x
        imul eax, 4
        sub eax, 1

        mov ebx, x
        imul ebx, 4
        add ebx, 1
        imul eax, ebx

        mov ecx, 4
        cdq
        idiv ecx
        mov result, eax
    }

    cout << result << endl;
    cout << (4 * x - 1) * (4 * x + 1) / 4;
    return 0;
}