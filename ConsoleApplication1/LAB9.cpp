
#include "Headers.h"


double Function1_LB9(double a, int m, int n)
{
    double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
    for (int j = 1; j <= n; j++)
    {
        sum1 += 2 * pow(j, 3) + 3 * j * pow(a, 2) + 2;
    }
    for (int k = 1; k <= m + n; k++)
    {
        sum2 += pow(k, 4);
    }
    for (int k = 1; k <= m; k++)
    {
        sum3 += 2 * pow(k, 3) + a;
    }
    sum1 += pow(a, 2);
    sum2 *= a;
    return sum1 / (sum2 + sum3);
}
void Function2_LB9(double& y, double a, int m, int n)
{
    double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
    for (int j = 1; j <= n; j++)
    {
        sum1 += 2 * pow(j, 3) + 3 * j * pow(a, 2) + 2;
    }
    for (int k = 1; k <= m + n; k++)
    {
        sum2 += pow(k, 4);
    }
    for (int k = 1; k <= m; k++)
    {
        sum3 += 2 * pow(k, 3) + a;
    }
    sum1 += pow(a, 2);
    sum2 *= a;
    y = sum1 / (sum2 + sum3);
}

double Function12_LB9(int x1, int y1, int z1, int x2, int y2, int z2)
{
    double r;
    r = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2));
    return r;
}

int** CreateMatrix(int SizeX, int SizeY) {
    int** MATRIX = new int* [SizeX];
    for (int i = 0; i < SizeX; i++)
    {
        MATRIX[i] = new int[SizeY];
    }
    return MATRIX;
}

void InputMatrix(int** arr, int SizeX, int SizeY)
{
    cout << endl << "Ввод новой матрицы: ";
    for (int i = 0; i < SizeX; i++)
    {
        for (int i1 = 0; i1 < SizeY; i1++)
        {
            cin >> arr[i][i1];
        }
    }
    system("CLS");

}
int** SumOfMatrix(int** arr0, int** arr1, int Size) {
    //if (arr0 != arr1) cout << "Матрицы не квадратны."; return 0;
    for (int i = 0; i < Size; i++)
        for (int j = 0; j < Size; j++)
            arr0[i][j] += arr1[i][j];
    return arr0;
}
int** MulOfMatrix(int** arr0, int** arr1, int Size) { // Only sqares 
    int** A = CreateMatrix(Size, Size);
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            A[i][j] = 0;
            for (int k = 0; k < Size; k++) {
                 A[i][j] += arr0[i][k] * arr1[k][j];
            }
        }
    }
    return A;
}
void PrintMatrix(int** arr, int SizeX, int SizeY)
{
    for (int i = 0; i < SizeX; i++)
    {
        for (int j = 0; j < SizeY; j++)
        cout << arr[i][j] << " ";
        cout << endl;
    }
}
int** ChangeMatrixStructure(int** arr, int SizeX, int SizeY) 
{
    int h;
    for (int i = 0; i < SizeX; i++) 
    {
        h = arr[i][0];
        for (int j = 0; j < SizeY; j++) 
        {         
           if (j < SizeY - 1)
           {
              arr[i][j] = arr[i][j + 1];
           }
           else
           {
              arr[i][j] = h;
           }
        }
    }
    return arr;
}

int powLB9(unsigned base, unsigned exp) {
    if (exp == 0)
        return base;
    else {
        return pow(base, powLB9(base, exp - 1));
    }
}


void LAB_9() 
{
    int QUEST;
    cout << "Лабораторная работа номер 9. Введите номер задания работы (1 - 5)." << endl;
    cin >> QUEST;
    switch (QUEST)
    {
        case(1):
        {
            double a, ans1, ans2, y;
            int m, n;
            cout << "Введите переменную А: ";
            cin >> a;
            cout << "Введите переменную М: ";
            cin >> m;
            cout << "Введите переменную Н: ";
            cin >> n;
            cout << "Сумма всех Е: ";
            cout << Function1_LB9(a, m, n);
            cout << endl;
            cout << "Ответ: ";
            Function2_LB9(y, a, m, n);
            cout << y;
            cout << endl;
            break;
        }
        case(2):
        {

            double x[3][3];
            for (int y = 1; y < 4; y++) {
                for (int i = 1; i < 4; i++) {
                    cout << "Введите Координату " << i << ": ";
                    cin >> x[y][i];
                }
            }
            cout << "Периметр треугольника " << Function12_LB9(x[1][1], x[1][2], x[1][3], x[2][1], x[2][2], x[2][3]) + Function12_LB9(x[2][1], x[2][2], x[2][3], x[3][1], x[3][2], x[3][3]) + Function12_LB9(x[1][1], x[1][2], x[1][3], x[3][1], x[3][2], x[3][3]) << endl;
            break;
        }
        case(3):
        {
            int SizeOfMatrix;
            cout << "Введите размерность квадратной матрицы: ";
            cin >> SizeOfMatrix;
            int** A = CreateMatrix(SizeOfMatrix, SizeOfMatrix);
            int** B = CreateMatrix(SizeOfMatrix, SizeOfMatrix);
            int** C = CreateMatrix(SizeOfMatrix, SizeOfMatrix);
            cout << endl << "Введите матрицы: ";
            InputMatrix(A, SizeOfMatrix, SizeOfMatrix);
            InputMatrix(B, SizeOfMatrix, SizeOfMatrix);
            InputMatrix(C, SizeOfMatrix, SizeOfMatrix);
            cout << endl << "Ответ: " << endl;
            B = MulOfMatrix(A, B, SizeOfMatrix);
            C = MulOfMatrix(B, C, SizeOfMatrix);
            PrintMatrix(SumOfMatrix(C, A, SizeOfMatrix), SizeOfMatrix, SizeOfMatrix);
            break;
        }
        case(4):
        {
            cout << "Введите длину матрицы: ";
            int Size;
            cin >> Size;
            int** A = CreateMatrix(Size, Size * 2);
            InputMatrix(A, Size, Size * 2);
            system("CLS");
            PrintMatrix(A, Size, Size * 2);
            cout << endl;
            PrintMatrix(ChangeMatrixStructure(A, Size, Size * 2), Size, Size * 2);
            break;
        }
        case(5):
        {
            int n = 2, EndN;
            cout << "Введите колличество двоек: " << endl;
            cin >> EndN;
            cout << powLB9(n, EndN) << endl;
            break;
        }
    }
}
