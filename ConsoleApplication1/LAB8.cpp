#include "Headers.h"
void LAB_8() {
    int QUEST;
    cout << "Лабораторная работа номер 8. Введите номер задания работы (1 - 2)." << endl;
    cin >> QUEST;
    switch (QUEST)
    {
    case(1):
    {
        char text[101];
        int k = 0, currentWord = 0;
        cout << "Введите текст: ";
        cin.ignore();
        cin.getline(text, sizeof text);
        cout << endl;
        cout << "Введите переменную к (Номер символа каждого слова, который будет удален): ";
        cin >> k;
        cout << endl;
        for (int i = 0; i < 101; i++)
        {
            if (text[i] != ' ') {
                currentWord++;
                if (currentWord == k) {
                    text[i] = ' ';
                }
            }
            else {
                currentWord = 0;
            }
        }
        cout << text << endl;
        break;
    }
    case(2):
    {
        char textline[101];
        string words[6];
        int k = 1;
        cout << "Введите ряд слов с общим кол-вом символов меньше 100." << endl;
        cin.ignore();
        cin.getline(textline, sizeof textline);
        for (int i = 0; i < 101; i++) {
            if (textline[i] == ' ') {
                k++;
            }
            else {
                words[k] += textline[i];
            }
            if (textline[i] == 'М') {
                textline[i] = ' ';
                break;
            }
        }
        for (int i = 1; i < 6; i++) {
            if (i % 2 == 0) {
                cout << words[i] << " ";
            }
        }
        cout << endl;
        for (int i = 1; i < 6; i++) {
            if (i % 2 == 0) {
                cout << words[i] << " ";
            }
        }
        for (int i = 1; i < 6; i++) {
            if (i % 2 != 0) {
                cout << words[i] << " ";
            }
        }
        cout << endl;
        break;
    }
    }
}