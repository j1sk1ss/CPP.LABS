#include "Headers.h"
void LAB_5() 
{

    int QUEST;
    cout << "������������ ������ ����� 5. ������� ����� ������� ������ (1 - 2)." << endl;
    cin >> QUEST;

    switch (QUEST) {
    case(1): {
        int a[10];
        string answer = "";
        for (int i = 0; i < 10; i++) {
            cout << "������� ������� ��� ������� " << i << ": ";
            cin >> a[i];
        }
        cout << endl << "�������� ������ ������: ";
        for (int i = 0; i < 10; i++) {
            if (a[i] < 8) {
                cout << a[i] << "; ";
            }
        }
        break;
    }
    case(2): {
        int a[10], maxCheck = 0, minCheck = 0;
        cout << "��������� �����: ";
        srand(time(0));
        for (int i = 0; i < 10; i++) {
            a[i] = rand() % 150 - 100;
            cout << a[i] << "; ";
        }
        cout << endl;
        maxCheck = a[0];
        minCheck = a[0];
        for (int i = 0; i < 10; i++) {
            if (maxCheck < a[i]) {
                maxCheck = a[i];
            }
            if (minCheck > a[i]) {
                minCheck = a[i];
            }
        }
        cout << endl;
        cout << maxCheck - minCheck << " : �������." << endl;
        break;
    }
    }
}