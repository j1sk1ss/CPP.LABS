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
		cout << "�������� ������: ";
		cin >> thr.Name;
		cout << "��� ������: ";
		cin >> thr.Type;
		cout << "������� ������: ";
		cin >> thr.Height;
		cout << "����������������� ����� ������: ";
		cin >> thr.Age;
		ar[i] = thr;
		return thr;
	}
	void ThrOutput(Threes* ar, int i) {
		cout << "�������� ������: " << ar[i].Name << endl;
		cout << "��� ������: " << ar[i].Type << endl;
		cout << "������� ������: " << ar[i].Height << endl;
		cout << "����������������� ����� ������: " << ar[i].Age << endl;	
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
		cout << "�������� � ���� ������ ����� ������� (1);" << endl;
		cout << "����������� ���� ������ �������� (2);" << endl;
		cout << "������� �������� �� ���� ������ (3);" << endl;
		cout << "��������� ��������� (4)." << endl;
		int C;
		cin >> C;
		cout << endl;
		switch (C) {
				case(1): {	
				cout << "����������� ����� ��������: ";
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
					
					cout << "������� ����� �������� �� �������� ����� �������� �����. (��� ������ 0, ����� �������� ��� ��������) : ";
					string Number;
					cin >> Number;
					if (Number != "0") {						
						for (int i = 0; i < HelpMassive; i++) {
							if (to_string(Threes_[i].Age) == Number || to_string(Threes_[i].Height) == Number || Threes_[i].Name == Number || Threes_[i].Type == Number) {
								cout << "������� " << i << endl;
								ThrOutput(Threes_, i);
								cout << endl;
							}
						}
					}
					else {
						for (int i = 1; i < HelpMassive; i++) {
							cout << "������� " << i << ": ";
							cout << endl;
							ThrOutput(Threes_, i);
							cout << endl;
						}
					}
					cout << "��� ������ ������� 1: ";
					int o = 0;
					cin >> o;
					if (o == 1) continue;
					o = 0;
					break;
				}
				case(3): {
					cout << "������� ����� �������� (�� " << 1 << " �� " << HelpMassive - 1 << "), ������� ���������� �������: ";
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