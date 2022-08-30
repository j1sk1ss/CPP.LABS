#include "Headers.h"

struct Cars {
    int EnginePower;
    string name;
    string GoverNumer;
    string VinNumer;
};
Cars carInput(Cars* ar, int i) {
    Cars cr;
    cout << "Сила двигателя в л.с.: ";
    cin >> cr.EnginePower;
    cout << "Марка: ";
    cin >> cr.name;
    cout << "Гос. номер: ";
    cin >> cr.GoverNumer;
    cout << "ВИН номер: ";
    cin >> cr.VinNumer;
    ar[i] = cr;
    return cr;

}
Cars carOutput(Cars* ar, int i) {
    Cars cr;
    cout << "Сила двигателя в л.с.: " << ar[i].EnginePower << endl;
    cout << "Марка: " << ar[i].name << endl;
    cout << "Гос. номер: " << ar[i].GoverNumer << endl;
    cout << "ВИН номер: " << ar[i].VinNumer << endl;
    return cr;

}

void LAB_10() 
{
    int QUEST;
    cout << "Лабораторная работа номер 10. Введите номер задания работы (1 - 1)." << endl;
    cin >> QUEST;
    switch (QUEST)
    {
    case(1):
    {
        int N;
        cout << "Колличество машин: ";
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