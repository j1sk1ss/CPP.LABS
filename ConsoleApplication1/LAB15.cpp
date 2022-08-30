#include "Headers.h"
template<typename T>
class Stack
{
public:
	void push(T);
	T pop();
	void show();
private:
	vector<T> Word;
	vector<T> Dis1;
	vector<T> Dis2;
	vector<T> Dis3;
	vector<T> Dis4;
	vector<T> Dis5;
};

void LAB_15() {
	int A, B;
	cout << "Лабораторная работа номер 15, задания (1-3): " << endl;
	cin >> A;
	switch (A) {
		case(1): {
			cout << "(1-2): " << endl;
			cin >> B;
				switch (B) {
				case(1): {
					vector<int> array; srand(time(0));
					cout << "Введите колличество эллементов массива: ";
					int c, minIndex = 0, maxIndex = 0, HelpInt = 0, Quality = 1;
					cin >> c;
					array.resize(c);
					for (int i = 0; i < array.size(); i++) {
						array[i] = rand() % 100;
					}
					HelpInt = 110;
					for (int i = 0; i < array.size(); i++) {
						cout << array[i] << "; ";
						if (HelpInt > array[i]) {
							HelpInt = array[i]; minIndex = i;
						}
					}
					HelpInt = -1;
					for (int i = 0; i < array.size(); i++) {
						if (HelpInt < array[i]) {
							HelpInt = array[i]; maxIndex = i;
						}
					}
					cout << "Минимальный элемент под индексом " << minIndex << endl;
					cout << "Максимальный элемент под индексом " << maxIndex << endl;
					if (abs(minIndex - maxIndex == 1)) cout << "Произведение равно 1, так минимальное число и максимальное стоят около друг друга." << endl;
					if (minIndex == maxIndex) cout << "Максимальный и минимальные элементы - это одно и то же число." << endl;
					for (int i = maxIndex + 1; i < minIndex; i++) { Quality *= array[i]; }
					cout << "Произведение элементов между мин. и макс. индексами: " << Quality << endl;
					array.clear();
					break;
				}
				case(2): {
					int help = 0, Size;
					vector<int> array;
					srand(time(0));
					cout << "Размер массива: ";
					cin >> Size;
					array.resize(Size);
					for (int i = 0; i < array.size(); i++) { array[i] = rand() % 100; cout << array[i] << "; "; }
					cout << endl;
					for (int i = 0; i < array.size(); i++) {
						for (int j = 0; j < array.size() - 1; j++) {
							if (array[j] > array[j + 1]) {
								help = array[j + 1];
								array[j + 1] = array[j];
								array[j] = help;
							}
						}
					}
					for (int i = 0; i < array.size(); i++) cout << array[i] << "; ";
					break;
				}
				}
		 break;
		}
		case(2): {
			cout << "(1-2): " << endl;
			cin >> B;
				switch (B) {
				case(1): {
					int n, m,sum = 0;
					cin >> n >> m;
					vector < vector <int> > a(n, vector <int>(m));
					for (int i = 0; i < n; i++) {
						for (int j = 0; j < m; j++) cin >> a[i][j];
					}
					for (int i = 0; i < n; i += 2)
					{
						for (int i1 = 0; i1 < m; i1++) { if (a[i][i1] % 2 != 0) { sum += a[i][i1]; } }
					}
					cout << sum << " - Сумма нечетных элементов на четных строках. ";
					break;
				}
				case(2): {
					int n, m;
					cin >> n >> m;
					vector < vector <int> > a(n, vector <int>(m));
					for (int i = 0; i < n; i++) {
						for (int j = 0; j < m; j++) cin >> a[i][j];
					}
					cout << endl;
					int h;
					for (int i = 0; i < n; i++)
					{
						h = a[i][0];
						for (int j = 0; j < m; j++)
						{
							if (j < m - 1)
							{
								a[i][j] = a[i][j + 1];
							}
							else
							{
								a[i][j] = h;
							}
						}
					}
					for (int i = 0; i < n; i++) {
						for (int j = 0; j < m; j++) cout << a[i][j] << " ";
						cout << endl;
					}
					break;
				}
				}
			break;
		}
		case(3): {
			// stack
			break;
		}
	}

}
