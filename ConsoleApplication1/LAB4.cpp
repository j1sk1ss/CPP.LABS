#include "Headers.h"

void LAB_4()
{
    int QUEST;
    cout << "������������ ������ ����� 4. ������� ����� ������� ������ (1 - 3)." << endl;
    cin >> QUEST;
    switch (QUEST) {
    case(1): {
        int a, k = 0;
        cout << "����� �� �������� ����� ���������� ��. ��������������: ";
        cin >> a;
        cout << endl;
        for (int i = 1; i <= a; i++) {
            k += i;
        }
        cout << (double)k / a << " ��. ��������������." << endl;
        break;
    }
    case(2): {
        int a, k = 1, m;
        cout << "�������� ��������� ������������: ";
        cin >> a;
        cout << endl;
        cout << "��� ������������: ";
        cin >> m;
        cout << endl;
        for (int i = 1; i < a; i += m) {
            k *= i;
        }
        cout << k << " ������������." << endl;
        break;
        break;
    }
    case(3): {
        int a;
        cout << "�����, �� �������� ����� ������ ���������: ";
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