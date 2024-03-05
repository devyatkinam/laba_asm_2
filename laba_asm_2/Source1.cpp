#include <iostream>
#include <string>
using namespace std;
//очень не очень работает но я пофикшу((
int main() {
    int x, result, pow;
    cin >> x;

    __asm {
        mov eax, x
        xor ecx, ecx
        mov ebx, 10

        loop_start:
        inc ecx
            xor edx, edx
            div ebx
            test eax, eax
            jnz loop_start
            sub ecx, 1
            mov pow, ecx

            mov eax, 10
            mov ecx, pow
            xor edx, edx
            power_loop :
        mul eax
            loop power_loop


            add eax, x
            imul eax, 10
            add eax, 1
            mov result, eax
    }


    cout << result << endl;

    return 0;
}
