#include "Headers.h"
void LAB_7() {
    int QUEST;
    cout << "������������ ������ ����� 7. ������� ����� ������� ������ (1 - 2)." << endl;
    cin >> QUEST;
    switch (QUEST)
    {
    case(1):
    {
        int A, B, sum = 0;
        cout << "������� ����������� �����: ";
        cin >> A;
        cout << endl;
        cout << "������� ����������� ��������: ";
        cin >> B;
        int** Array = CreateMatrix(A, B);
        cout << endl;
        system("CLS");
        InputMatrix(Array, A, B);
        for (int i = 0; i < A; i+=2)
        {
            for (int i1 = 0; i1 < B; i1++)
            {           
                    if (Array[i][i1] % 2 != 0)
                    {
                        sum += Array[i][i1];
                    }        
            }

        }
        cout << sum << " - ����� �������� ��������� �� ������ �������. ";
        cout << endl;
        break;
    }
    case(2):
    {
        int A, B = 1;
        cout << "������� ����������� �����." << endl;
        cin >> A;
        B = A * 2;
        int** Array = CreateMatrix(A, B);
        int** HelpArray = CreateMatrix(A, B);
        InputMatrix(Array, A, B);
        cout << "����������� ������:" << endl;
        PrintMatrix(Array, A, B);
        cout << endl;
        cout << "���������� ������:" << endl;
        for (int i = 0; i < A; i++)
        {
            for (int i1 = 0; i1 < B; i1++)
            {
                if (i1 < B - 1 && i < B - 1)
                {
                    HelpArray[i][i1] = Array[i][i1];
                    Array[i][i1] = Array[i][i1 + 1];
                    Array[i][i1 + 1] = HelpArray[i][i1];
                } 
                else
                {
                    HelpArray[i][i1] = Array[0][i1];
                    Array[i][i1] = Array[0][i1];
                    Array[0][i1] = HelpArray[i][i1];
                }

            }
        }
        PrintMatrix(Array, A, B);
        break;
    }
    }
}