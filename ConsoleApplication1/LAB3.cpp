#include "Headers.h"

void LAB_3()
{
    int QUEST;
    cout << "������������ ������ ����� 3. ������� ����� ������� ������ (1 - 6)." << endl;
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
        cout << "� " << year << " ����." << endl;
        break;
    }
    case(2): {
        int m;
        cout << "������� ����� ������� �����: ";
        cin >> m;
        int k;
        if (m <= 100) {
            for (int i = 1; i < 100; i++) {
                k = pow(m, i);
                if (k / 10000 >= 1) {
                    cout << k << " ����������� ����������� �����. �������: " << i << endl;
                    break;
                }
            }
        }
        else {
            cout << "����� ������ �����." << endl;
        }
        break;
    }
    case(3): {
        int a = 0;
        cout << "�������� �����: ";
        cin >> a;

        string b = a + "";
        b += b;
        a = atoi(b.c_str());
        cout << b << " ���������� �����.";
        break;
    }
    case(4): {
        int n;

        cout << "�������� �����, ������� ��������� �������� �� ������������. " << endl;
        cout << "�����: ";
        cin >> n;
        int g = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                g += i;
            }
        }
        if (n == g) {
            cout << "����� ������������ ����." << endl;
        }
        else {
            cout << "����� �� ������������ ����." << endl;
        }

        break;
    }
    case(6): {
        int a, b;
        cout << "������� �����: ";
        cin >> a;
        cout << endl;
        cout << "������� �������: ";
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
        cout << a << " �������� �����." << endl;
        break;
    }
    }
}