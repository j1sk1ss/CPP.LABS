#include "Headers.h"

void LAB_3()
{
    int QUEST;
    cout << "Лабораторная работа номер 3. Введите номер задания работы (1 - 6)." << endl;
    cin >> QUEST;
    switch (QUEST) {
    case(1): {
        int year = 2010;
        double L = 200, x = 50, p = 5, q = 3, prirost = 0;
        while (prirost < x) {
            prirost = 0;
            if (year % 2 == 0) {
                prirost += L * (p / 100);
            }
            else {
                prirost += L * (q / 100);
            }
            L += prirost;
            year++;
        }
        cout << "В " << year << " году." << endl;
        break;
    }
    case(2): {
        int m;
        cout << "Введите число меньшее сотни: ";
        cin >> m;
        int k;
        if (m <= 100) {
            for (int i = 1; i < 100; i++) {
                k = pow(m, i);
                if (k / 10000 >= 1) {
                    cout << k << " минимальное пятизначное число. Степень: " << i << endl;
                    break;
                }
            }
        }
        else {
            cout << "Число больше сотни." << endl;
        }
        break;
    }
    case(3): {
        int a = 0;
        cout << "Напишите число: ";
        cin >> a;

        string b = a + "";
        b += b;
        a = atoi(b.c_str());
        cout << b << " полученное число.";
        break;
    }
    case(4): {
        int n;

        cout << "Напишите число, которое подлежить проверке на совершенство. " << endl;
        cout << "Число: ";
        cin >> n;
        int g = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                g += i;
            }
        }
        if (n == g) {
            cout << "Число совершенного вида." << endl;
        }
        else {
            cout << "Число не совершенного вида." << endl;
        }

        break;
    }
    case(6): {
        int a, b;
        cout << "Введите число: ";
        cin >> a;
        cout << endl;
        cout << "Введите степень: ";
        cin >> b;
        cout << endl;
        a = pow(a, b);
        /*
        int k = 1;
        for (int i = 1; i <= b; i++) {
           k *= a;
        }
        cout << k;
        */
        cout << a << " итоговое число." << endl;
        break;
    }
    }
}