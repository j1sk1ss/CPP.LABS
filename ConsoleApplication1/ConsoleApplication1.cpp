
//Вариант 11.
#include "Headers.h"
int main()
{
    int K = 0, B1 = 0;
    int LAB; // Enter a laboratory number
    system("CLS"); // clean a console
    setlocale(LC_ALL, "Russian"); // add russian syntacsis
   
        cout << "Введите номер лабораторной работы (2 - 16)." << endl;
        cin >> LAB;
    while (true) { // Цикл 
        system("CLS");
        switch (LAB) {
            case(2): // LAB n.2
            {
              LAB_2();
              break;
            }
            case(3): // LAB n.3
            {
              LAB_3();
              break;
            }
            case(4): // LAB n.4
            {
              LAB_4();
              break;
            }
            case(5): // LAB n.5
            {
              LAB_5();
              break;
            }
            case(6): // LAB n.6
            {
              LAB_6();
              break;
            }
            case(7): // LAB n.7
            {
              LAB_7();
              break;
            }
            case(8): // LAB n.8
            {
              LAB_8();
              break;
            }
            case(9): // LAB n.9
            {
              LAB_9();
              break;
            }
            case(10): // LAB n.10
            {
              LAB_10();
              break;
            }
            case(11): // LAB n.11
            {
              LAB_11();
              break;
            }
            case(12): 
            {
              LAB_12();
              break;
            }
            case(13):
            {
              LAB_13();
              break;
            }
            case(14):
            {
              LAB_14();
              break;
            }
            case(15):
            {
              LAB_15();
              break;
            }
            case(16):
            {
              LAB_16();
             break;
            }
        }
        cout << "Желаете перезапустить программу?" << endl; // Restart part, when while is continued.
        cout << "Да (1)    Нет (2)" << endl;
        cin >> B1;
        if (B1 == 1) {
            continue;
            B1 = 0;
        }
        else {
            exit(0);
        }
    }
}


