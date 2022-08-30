#include "Headers.h"
	struct Threes
	{
		string Name;
		string Type;
		double Height;
		double Age;
	};
	void AddThr(Threes* &thr, int NewNumber, int Size_) {
		int Size = Size_;
		Threes* HelpTabel = new Threes[Size];
		for (int i = 0; i < Size - NewNumber; i++) {
			HelpTabel[i] = thr[i];
		}
		delete[] thr;
		thr = new Threes[Size];
;		for (int i = 0; i < Size - NewNumber; i++) {
			thr[i] = HelpTabel[i];
		}
		delete[] HelpTabel;
	}
	Threes ThrInput(Threes* &ar, int i) {
		Threes thr;
		cout << "Название дерева: ";
		cin >> thr.Name;
		cout << "Вид дерева: ";
		cin >> thr.Type;
		cout << "Средняя высота: ";
		cin >> thr.Height;
		cout << "Продолжительность жизни дерева: ";
		cin >> thr.Age;
		ar[i] = thr;
		return thr;
	}
	void ThrOutput(Threes* ar, int i) {
		cout << "Название дерева: " << ar[i].Name << endl;
		cout << "Вид дерева: " << ar[i].Type << endl;
		cout << "Средняя высота: " << ar[i].Height << endl;
		cout << "Продолжительность жизни дерева: " << ar[i].Age << endl;	
	}
	void ThrDelete(Threes* &ar, int i, int Size) {
		Threes* HelpTabel = new Threes[Size - 1];
		for (int k = 3; k < Size; k++) if (k + 1 < Size) ar[k] = ar[k + 1];		 
		for (int j = 0; j < Size - 1; j++) HelpTabel[j] = ar[j];
		delete[] ar;
		ar = new Threes[Size - 1];
		for (int j = 0; j < Size - 1; j++) ar[j] = HelpTabel[j];
		delete[] HelpTabel;
		
	}
void LAB_12() {
	Threes* Threes_ = new Threes[1];
	int HelpMassive = 1;
    int N = 0, K = 0;
	while (K == 0) {
		system("CLS");
		cout << "Добавить в базу данных новые деревья (1);" << endl;
		cout << "Просмотреть базу данных деревьев (2);" << endl;
		cout << "Удалить элементы из базы данных (3);" << endl;
		cout << "Завершить программу (4)." << endl;
		int C;
		cin >> C;
		cout << endl;
		switch (C) {
				case(1): {	
				cout << "Колличество новых деревьев: ";
					cin >> N;
					HelpMassive += N;
					AddThr(Threes_, N, HelpMassive);
					for (int i = HelpMassive - N; i < HelpMassive; i++)
					{
						ThrInput(Threes_, i);
					}
				continue;
				break;
			    }
				case(2): {
					
					cout << "Введите любое значение по которому будет выполнен поиск. (При выборе 0, будут выведены все элементы) : ";
					string Number;
					cin >> Number;
					if (Number != "0") {						
						for (int i = 0; i < HelpMassive; i++) {
							if (to_string(Threes_[i].Age) == Number || to_string(Threes_[i].Height) == Number || Threes_[i].Name == Number || Threes_[i].Type == Number) {
								cout << "Элемент " << i << endl;
								ThrOutput(Threes_, i);
								cout << endl;
							}
						}
					}
					else {
						for (int i = 1; i < HelpMassive; i++) {
							cout << "Элемент " << i << ": ";
							cout << endl;
							ThrOutput(Threes_, i);
							cout << endl;
						}
					}
					cout << "Для выхода нажмите 1: ";
					int o = 0;
					cin >> o;
					if (o == 1) continue;
					o = 0;
					break;
				}
				case(3): {
					cout << "Введите номер элемента (от " << 1 << " до " << HelpMassive - 1 << "), который необходимо удалить: ";
					int Delete;
					cin >> Delete;
					ThrDelete(Threes_, Delete, HelpMassive);
					HelpMassive -= 1;
					continue;
					break;
				}
				case(4): {
					K++;
					break;
				}
			}
	}
	

}