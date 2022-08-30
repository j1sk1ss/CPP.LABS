#include "Headers.h"


void LAB_2()
{
    int QUEST;
    cout << "Лабораторная работа номер 2. Введите номер задания работы (1 - 7)." << endl;
    cin >> QUEST;
    switch (QUEST)
    {
        case(1): {
            double A, B, C, D;
            int animation = 0;
            cout << "Задание 1. Вычислить квадратное уравнение по введеный членам." << endl;
            cout << "Введите число А: ";
            cin >> A;
            cout << endl << "Введите число B: ";
            cin >> B;
            cout << endl << "Введите число C: ";
            cin >> C;
            D = pow(B, 2) - 4 * A * C;
            if (D < 0) {
                cout << "Корни принадлежат пустому множеству. ";
                cout << endl;
                break;
            }
            else if (D > 0) {
                cout << "Ответ: " << endl;
                cout << "Первый корень: " << ((-B + sqrt(D)) / 2 * A) << endl;
                cout << "Второй корень: " << ((-B - sqrt(D)) / 2 * A);
                cout << endl;
                break;
            }
            else {
                cout << "Ответ: " << endl;
                cout << "Первый корень: " << ((-B + sqrt(D)) / 2 * A) << endl;
                cout << endl;
                break;
            }

            break;
        }
        case(2): {
            double a, b, R, x, y;
            cout << "Введите координаты центра круга." << endl;
            cout << "Х координата центра: ";
            cin >> a;
            cout << endl;
            cout << "Y координата центра: ";
            cin >> b;
            cout << endl;
            cout << "Радиус круга: ";
            cin >> R;
            cout << endl;
            cout << "Введите координаты Точки." << endl;
            cout << "Х координата точки: ";
            cin >> x;
            cout << endl;
            cout << "Y координата точки: ";
            cin >> y;
            cout << endl;
            if (((x - a) * (x - a) + (y - b) * (y - b)) <= R * R) {
                cout << "Точка входит в окружность.";
            }
            else {
                cout << "Точка не входит в окружность. ";
            }
            cout << endl << "Введите любой символ для перехода ко второй части задания." << endl;
            cin >> a;
            system("CLS");
            double sm, m;
            cout << "Вторая часть задания." << endl;
            cout << "Введите две величины." << endl;
            cout << "В см. куб. ";
            cin >> sm;
            cout << endl << "В м. куб. ";
            cin >> m;
            if (m * 1000000 > sm) {
                cout << "Метров больше." << endl;
            }
            else if (m * 1000000 < sm) {
                cout << "Сантиметров больше." << endl;
            }
            else if (m * 1000000 == sm) {
                cout << "Метров столько же сколько и сантиметров." << endl;
            }
            break;
        }
        case(3): {
            int a, b, c;
            cout << "Задание 3. Введите три стороны треугольника. " << endl;
            cout << "Сторона 1: ";
            cin >> a;
            cout << "Сторона 2: ";
            cin >> b;
            cout << "Сторона 3: ";
            cin >> c;
            if (a + b > c && a + c > b && b + c > a) {
                if (a != c && c != b && a != b) {
                    cout << "Треугольник разносторонний.";
                }
                else {
                    cout << "не разносторонний треугольник.";
                }
            }
            else {
                cout << "Треугольник не существует." << endl;
            }

            break;
        }
        case(4): {
            int a, b, c;
            cout << "Задание 3. Введите три стороны треугольника. " << endl;
            cout << "Сторона 1: ";
            cin >> a;
            cout << "Сторона 2: ";
            cin >> b;
            cout << "Сторона 3: ";
            cin >> c;
            if (a + b > c && a + c > b && b + c > a) {
  if (b * b + c * c - a * a < 0 || a * a + c * c - b * b < 0|| a* a + b * b - c * c < 0) {
                cout << "Тупоугольный треугольник. ";
            }
            else {
                cout << "Треугольник не тупоугольный. ";
            }
            }
            else {
                cout << "Треугольник не существует. " << endl;
            }
          
                break;
        }
        case(5): {
            char example;
            cout << "Введите символ: ";
            cin >> example;
            if (example >= '0' && example <= '9') {
                if (example % 2 != 0) {
                    cout << "Эта цифра нечётна. " << endl;
                }
                else {
                    cout << "Четная цифра." << endl;
                }
            }
            else {
                cout << "Не цифра" << endl;
            }
            break;
        }
        case(6): {
            int _class;
            cout << "Задание 6. Определить звено по классу." << endl;
            cout << "Введите номер класса. ";
            cin >> _class;
            switch (_class)
            {
            case(1, 2, 3, 4): {
                cout << "Это младшее звено" << endl;
                break;
            }
            case(5, 6, 7, 8, 9): {
                cout << "Это среднее звено" << endl;
                break;
            }
            case(10, 11): {
                cout << "Это страшее звено" << endl;
                break;
            }
            default: {
                cout << "Класс не входит в школьную систему образования. " << endl;
                break;
            }
            }
            break;
        }
        case(7): {
            int d, m, y, md;
            string mounth;
            cout << "Введите день: ";
            cin >> d;
            cout << "Введите месяц: ";
            cin >> m;
            cout << "Введите год: ";
            cin >> y;
            md = 29;
            switch (m) {
            case(1): {
                mounth = "Январь";
                md = 31;
                break;
            }
            case(2): {
                mounth = "Февраль";
                break;
            }
            case(3): {
                mounth = "Март";
                md = 31;
                break;
            }
            case(4): {
                mounth = "Апрель";
                md = 30;
                break;
            }
            case(5): {
                mounth = "Май";
                md = 31;
                break;
            }
            case(6): {
                mounth = "Июнь";
                md = 30;
                break;
            }
            case(7): {
                mounth = "Июль";
                md = 31;
                break;
            }
            case(8): {
                mounth = "Август";
                md = 31;
                break;
            }
            case(9): {
                mounth = "Сентябрь";
                md = 30;
                break;
            }
            case(10): {
                mounth = "Октябрь";
                md = 31;
                break;
            }
            case(11): {
                mounth = "Ноябрь";
                md = 30;
                break;
            }
            case(12): {
                mounth = "Декабрь";
                md = 31;
                break;
            }
            }
            if (m == 2 || (d == 31 && m == 1)) {
                if (m == 2 && y % 4 == 0 && y % 100 == 0) {
                    md = 28;
                    if (y % 400 != 0) {
                        md = 29;
                    }
                }
            }
            if (d + 1 <= md) {
                d++;
            }
            else {
                d = 1;
                if (m + 1 <= 12) {
                    m++;
                    switch (m) {
                    case(1): {
                        mounth = "Январь";
                        md = 31;
                        break;
                    }
                    case(2): {
                        mounth = "Февраль";
                        break;
                    }
                    case(3): {
                        mounth = "Март";
                        md = 31;
                        break;
                    }
                    case(4): {
                        mounth = "Апрель";
                        md = 30;
                        break;
                    }
                    case(5): {
                        mounth = "Май";
                        md = 31;
                        break;
                    }
                    case(6): {
                        mounth = "Июнь";
                        md = 30;
                        break;
                    }
                    case(7): {
                        mounth = "Июль";
                        md = 31;
                        break;
                    }
                    case(8): {
                        mounth = "Август";
                        md = 31;
                        break;
                    }
                    case(9): {
                        mounth = "Сентябрь";
                        md = 30;
                        break;
                    }
                    case(10): {
                        mounth = "Октябрь";
                        md = 31;
                        break;
                    }
                    case(11): {
                        mounth = "Ноябрь";
                        md = 30;
                        break;
                    }
                    case(12): {
                        mounth = "Декабрь";
                        md = 31;
                        break;
                    }
                    }
                }
                else {
                    m = 1;
                    switch (m) {
                    case(1): {
                        mounth = "Январь";
                        break;
                    }
                    case(2): {
                        mounth = "Февраль";
                        break;
                    }
                    case(3): {
                        mounth = "Март";
                        break;
                    }
                    case(4): {
                        mounth = "Апрель";
                        break;
                    }
                    case(5): {
                        mounth = "Май";
                        break;
                    }
                    case(6): {
                        mounth = "Июнь";
                        break;
                    }
                    case(7): {
                        mounth = "Июль";
                        break;
                    }
                    case(8): {
                        mounth = "Август";
                        break;
                    }
                    case(9): {
                        mounth = "Сентябрь";
                        break;
                    }
                    case(10): {
                        mounth = "Октябрь";
                        break;
                    }
                    case(11): {
                        mounth = "Ноябрь";
                        break;
                    }
                    case(12): {
                        mounth = "Декабрь";
                        break;
                    }
                    }
                    y++;
                }
                cout << "Дата: " << d << " Месяц: " << mounth << " Год: " << y << endl;
                break;
            }

            break;
        }
    }
}