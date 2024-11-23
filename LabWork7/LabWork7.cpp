#include <iostream>
using namespace std;
void RevPrint(int N) {
    if (N == 0) return;
    cout << N % 10;
    RevPrint(N / 10);
}
int main()
{
    setlocale(LC_ALL, "RU"); setlocale(LC_ALL, "RU");
    cout << "Введите число >0: ";
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Введите не отрицательное число";
        return 0;
    }
    if (n == 0){
        cout << "Нужно вводить число >0";
    }
    else {
        cout << "Число в обратном порядке: ";
        RevPrint(n);
    }
    cout << endl;
    return 0;
}

