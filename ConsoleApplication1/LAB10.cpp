#include "Headers.h"

struct Cars {
    int EnginePower;
    string name;
    string GoverNumer;
    string VinNumer;
};
Cars carInput(Cars* ar, int i) {
    Cars cr;
    cout << "���� ��������� � �.�.: ";
    cin >> cr.EnginePower;
    cout << "�����: ";
    cin >> cr.name;
    cout << "���. �����: ";
    cin >> cr.GoverNumer;
    cout << "��� �����: ";
    cin >> cr.VinNumer;
    ar[i] = cr;
    return cr;

}
Cars carOutput(Cars* ar, int i) {
    Cars cr;
    cout << "���� ��������� � �.�.: " << ar[i].EnginePower << endl;
    cout << "�����: " << ar[i].name << endl;
    cout << "���. �����: " << ar[i].GoverNumer << endl;
    cout << "��� �����: " << ar[i].VinNumer << endl;
    return cr;

}

void LAB_10() 
{
    int QUEST;
    cout << "������������ ������ ����� 10. ������� ����� ������� ������ (1 - 1)." << endl;
    cin >> QUEST;
    switch (QUEST)
    {
    case(1):
    {
        int N;
        cout << "����������� �����: ";
        cin >> N;
        Cars* Cars_ = new Cars[N];
        for (int i = 0; i < N; i++) {
            carInput(Cars_, i);
        }
        cout << endl;
        for (int i = 0; i < N; i++) {
            cout << endl;
            carOutput(Cars_, i);
        }

        break;
    }
    }
}