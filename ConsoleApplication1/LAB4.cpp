#include "Headers.h"

void LAB_4()
{
    int QUEST;
    cout << "Лабораторная работа номер 4. Введите номер задания работы (1 - 3)." << endl;
    cin >> QUEST;
    switch (QUEST) {
    case(1): {
        int a, k = 0;
        cout << "Число до которого будет просчитано ср. арифмитическое: ";
        cin >> a;
        cout << endl;
        for (int i = 1; i <= a; i++) {
            k += i;
        }
        cout << (double)k / a << " ср. арифмитическое." << endl;
        break;
    }
    case(2): {
        int a, k = 1, m;
        cout << "Максимум диапазона произведения: ";
        cin >> a;
        cout << endl;
        cout << "Шаг произведения: ";
        cin >> m;
        cout << endl;
        for (int i = 1; i < a; i += m) {
            k *= i;
        }
        cout << k << " произведение." << endl;
        break;
        break;
    }
    case(3): {
        int a;
        cout << "Число, до которого будет разбор делителей: ";
        cin >> a;
        for (int i = 1; i <= a; i++) {
            cout << i << ": ";
            for (int b = 1; b <= i; b++) {
                if (i % b == 0) {
                    cout << b << "; ";
                }
            }
            cout << endl;
        }
        break;
    }
    }
}