#include "Headers.h"


void LAB_2()
{
    int QUEST;
    cout << "������������ ������ ����� 2. ������� ����� ������� ������ (1 - 7)." << endl;
    cin >> QUEST;
    switch (QUEST)
    {
        case(1): {
            double A, B, C, D;
            int animation = 0;
            cout << "������� 1. ��������� ���������� ��������� �� �������� ������." << endl;
            cout << "������� ����� �: ";
            cin >> A;
            cout << endl << "������� ����� B: ";
            cin >> B;
            cout << endl << "������� ����� C: ";
            cin >> C;
            D = pow(B, 2) - 4 * A * C;
            if (D < 0) {
                cout << "����� ����������� ������� ���������. ";
                cout << endl;
                break;
            }
            else if (D > 0) {
                cout << "�����: " << endl;
                cout << "������ ������: " << ((-B + sqrt(D)) / 2 * A) << endl;
                cout << "������ ������: " << ((-B - sqrt(D)) / 2 * A);
                cout << endl;
                break;
            }
            else {
                cout << "�����: " << endl;
                cout << "������ ������: " << ((-B + sqrt(D)) / 2 * A) << endl;
                cout << endl;
                break;
            }

            break;
        }
        case(2): {
            double a, b, R, x, y;
            cout << "������� ���������� ������ �����." << endl;
            cout << "� ���������� ������: ";
            cin >> a;
            cout << endl;
            cout << "Y ���������� ������: ";
            cin >> b;
            cout << endl;
            cout << "������ �����: ";
            cin >> R;
            cout << endl;
            cout << "������� ���������� �����." << endl;
            cout << "� ���������� �����: ";
            cin >> x;
            cout << endl;
            cout << "Y ���������� �����: ";
            cin >> y;
            cout << endl;
            if (((x - a) * (x - a) + (y - b) * (y - b)) <= R * R) {
                cout << "����� ������ � ����������.";
            }
            else {
                cout << "����� �� ������ � ����������. ";
            }
            cout << endl << "������� ����� ������ ��� �������� �� ������ ����� �������." << endl;
            cin >> a;
            system("CLS");
            double sm, m;
            cout << "������ ����� �������." << endl;
            cout << "������� ��� ��������." << endl;
            cout << "� ��. ���. ";
            cin >> sm;
            cout << endl << "� �. ���. ";
            cin >> m;
            if (m * 1000000 > sm) {
                cout << "������ ������." << endl;
            }
            else if (m * 1000000 < sm) {
                cout << "����������� ������." << endl;
            }
            else if (m * 1000000 == sm) {
                cout << "������ ������� �� ������� � �����������." << endl;
            }
            break;
        }
        case(3): {
            int a, b, c;
            cout << "������� 3. ������� ��� ������� ������������. " << endl;
            cout << "������� 1: ";
            cin >> a;
            cout << "������� 2: ";
            cin >> b;
            cout << "������� 3: ";
            cin >> c;
            if (a + b > c && a + c > b && b + c > a) {
                if (a != c && c != b && a != b) {
                    cout << "����������� ��������������.";
                }
                else {
                    cout << "�� �������������� �����������.";
                }
            }
            else {
                cout << "����������� �� ����������." << endl;
            }

            break;
        }
        case(4): {
            int a, b, c;
            cout << "������� 3. ������� ��� ������� ������������. " << endl;
            cout << "������� 1: ";
            cin >> a;
            cout << "������� 2: ";
            cin >> b;
            cout << "������� 3: ";
            cin >> c;
            if (a + b > c && a + c > b && b + c > a) {
  if (b * b + c * c - a * a < 0 || a * a + c * c - b * b < 0|| a* a + b * b - c * c < 0) {
                cout << "������������ �����������. ";
            }
            else {
                cout << "����������� �� ������������. ";
            }
            }
            else {
                cout << "����������� �� ����������. " << endl;
            }
          
                break;
        }
        case(5): {
            char example;
            cout << "������� ������: ";
            cin >> example;
            if (example >= '0' && example <= '9') {
                if (example % 2 != 0) {
                    cout << "��� ����� �������. " << endl;
                }
                else {
                    cout << "������ �����." << endl;
                }
            }
            else {
                cout << "�� �����" << endl;
            }
            break;
        }
        case(6): {
            int _class;
            cout << "������� 6. ���������� ����� �� ������." << endl;
            cout << "������� ����� ������. ";
            cin >> _class;
            switch (_class)
            {
            case(1, 2, 3, 4): {
                cout << "��� ������� �����" << endl;
                break;
            }
            case(5, 6, 7, 8, 9): {
                cout << "��� ������� �����" << endl;
                break;
            }
            case(10, 11): {
                cout << "��� ������� �����" << endl;
                break;
            }
            default: {
                cout << "����� �� ������ � �������� ������� �����������. " << endl;
                break;
            }
            }
            break;
        }
        case(7): {
            int d, m, y, md;
            string mounth;
            cout << "������� ����: ";
            cin >> d;
            cout << "������� �����: ";
            cin >> m;
            cout << "������� ���: ";
            cin >> y;
            md = 29;
            switch (m) {
            case(1): {
                mounth = "������";
                md = 31;
                break;
            }
            case(2): {
                mounth = "�������";
                break;
            }
            case(3): {
                mounth = "����";
                md = 31;
                break;
            }
            case(4): {
                mounth = "������";
                md = 30;
                break;
            }
            case(5): {
                mounth = "���";
                md = 31;
                break;
            }
            case(6): {
                mounth = "����";
                md = 30;
                break;
            }
            case(7): {
                mounth = "����";
                md = 31;
                break;
            }
            case(8): {
                mounth = "������";
                md = 31;
                break;
            }
            case(9): {
                mounth = "��������";
                md = 30;
                break;
            }
            case(10): {
                mounth = "�������";
                md = 31;
                break;
            }
            case(11): {
                mounth = "������";
                md = 30;
                break;
            }
            case(12): {
                mounth = "�������";
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
                        mounth = "������";
                        md = 31;
                        break;
                    }
                    case(2): {
                        mounth = "�������";
                        break;
                    }
                    case(3): {
                        mounth = "����";
                        md = 31;
                        break;
                    }
                    case(4): {
                        mounth = "������";
                        md = 30;
                        break;
                    }
                    case(5): {
                        mounth = "���";
                        md = 31;
                        break;
                    }
                    case(6): {
                        mounth = "����";
                        md = 30;
                        break;
                    }
                    case(7): {
                        mounth = "����";
                        md = 31;
                        break;
                    }
                    case(8): {
                        mounth = "������";
                        md = 31;
                        break;
                    }
                    case(9): {
                        mounth = "��������";
                        md = 30;
                        break;
                    }
                    case(10): {
                        mounth = "�������";
                        md = 31;
                        break;
                    }
                    case(11): {
                        mounth = "������";
                        md = 30;
                        break;
                    }
                    case(12): {
                        mounth = "�������";
                        md = 31;
                        break;
                    }
                    }
                }
                else {
                    m = 1;
                    switch (m) {
                    case(1): {
                        mounth = "������";
                        break;
                    }
                    case(2): {
                        mounth = "�������";
                        break;
                    }
                    case(3): {
                        mounth = "����";
                        break;
                    }
                    case(4): {
                        mounth = "������";
                        break;
                    }
                    case(5): {
                        mounth = "���";
                        break;
                    }
                    case(6): {
                        mounth = "����";
                        break;
                    }
                    case(7): {
                        mounth = "����";
                        break;
                    }
                    case(8): {
                        mounth = "������";
                        break;
                    }
                    case(9): {
                        mounth = "��������";
                        break;
                    }
                    case(10): {
                        mounth = "�������";
                        break;
                    }
                    case(11): {
                        mounth = "������";
                        break;
                    }
                    case(12): {
                        mounth = "�������";
                        break;
                    }
                    }
                    y++;
                }
                cout << "����: " << d << " �����: " << mounth << " ���: " << y << endl;
                break;
            }

            break;
        }
    }
}