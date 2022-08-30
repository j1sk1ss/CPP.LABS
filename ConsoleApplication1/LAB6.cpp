#include "Headers.h"
void LAB_6() {
    int QUEST;
    cout << "Лабораторная работа номер 6. Введите номер задания работы (1 - 2)." << endl;
    cin >> QUEST;
    switch (QUEST)
    {
    case(1):
    {
        int ArrSize, minCheck = 0, Quality = 1, minIndex = 0, maxIndex = 0, maxCheck = 0;
        srand(time(0));
        cout << "Введите колличество элементов массива: " << endl;
        cin >> ArrSize;
        int* array = new int[ArrSize];
        for (int i = 0; i < ArrSize; i++)
        {
            array[i] = rand() % 100;
        }
        minCheck = array[0];
        maxCheck = array[0];
        minIndex = 0;
        maxIndex = 0;
        for (int i = 0; i < ArrSize; i++)
        {
            cout << array[i] << "; ";
            if (minCheck > array[i]) {
                minCheck = array[i];
                minIndex = i;
            }
            if (maxCheck < array[i]) {
                maxCheck = array[i];
                maxIndex = i;
            }
        }
        cout << endl;
        cout << "Минимальный элемент под индексом: " << minIndex << endl;
        if (abs(minIndex - maxIndex == 1)) {
            cout << "Произведение равно 1, так минимальное число и максимальное стоят около друг друга." << endl;
            break;
        }
        else if (minIndex == maxIndex) {
            cout << "Максимальный и минимальные элементы - это одно и то же число." << endl;
            break;
        }
        if (minIndex + 2 < maxIndex) {
            minCheck = minIndex;
            maxIndex = minCheck;
            minIndex = maxIndex;
        }
        for (int i = maxIndex + 1; i < minIndex; i++)
        {
            Quality *= array[i];
        }
        cout << "Произведение элементов между мин. и макс. индексами: " << Quality << endl;
        delete[] array;
        break;
    }
    case(2):
    {
        int helpInt, N;
        cout << "Введите колличество элементов массива: " << endl; // Сортировка пузырьком
        cin >> N;
        int* a = new int[N];
        srand(time(0));
        for (int i = 0; i < N; i++) {
            a[i] = rand() % 10;
            cout << a[i] << "; ";
        }
        cout << endl;
        for (int i = 0; i < N; i++) {
            for (int k = 0; k < N - 1; k++) {
                if (a[k] > a[k + 1]) {
                    helpInt = a[k + 1];
                    a[k + 1] = a[k];
                    a[k] = helpInt;
                }
            }
        }
        for (int i = 0; i < N; i++) {
            cout << a[i] << "; ";
        }
        cout << endl;
        delete[] a;
        break;
    }
    }
}