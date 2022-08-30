#include "Headers.h"
class TestClass {
public:
	vector<int> CreateArray(int Size) {
		vector<int> A;
		A.resize(Size);
		for (int i = 0; i < Size; i++) A[i] = rand() % 100;
		return A;
	}
	void PrintElement(vector<int> Array, int Index) {
		cout << "������� " << Index << ": " << Array[Index] << endl;
	}
	void PrintArray(vector<int> Array) {
		for (int i = 0; i < Array.size(); i++) cout << Array[i] << "; ";
	}
	vector<int> SumOfArraySimple(vector<int> array1, vector<int> array2) {
		vector<int> A;
		A.assign(array1.cbegin(), array1.cend());
		A.insert(A.end(), array2.cbegin(), array2.cend());
		return A;
	}
	vector<int> SumOfArrayExpanded(vector<int> array1, vector<int> array2) {
		vector<int> A = array1;
		vector<int> B = array2;
		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < B.size(); j++) {
				if (A.at(i) == B.at(j)) {
					A.erase(A.begin() + i);
					A.erase(B.begin() + j);
					break;
				}
			}
		}
		return SumOfArraySimple(A, B);
	}
private:

};
void LAB_16() {
	srand(time(0));
	int Size;
	TestClass MyClass;
	cout << "������ ������� �������: ";
	cin >> Size;
	vector<int> A = MyClass.CreateArray(Size);
	cout << "������ ������� �������: ";
	cin >> Size;
	vector<int> B = MyClass.CreateArray(Size);
	cout << "������ ������: ";
	MyClass.PrintArray(A);
	cout << endl;
	cout << "������ ������: ";
	MyClass.PrintArray(B);
	cout << endl;
	cout << "����� ��������, ������� ���������� ������� �� ������� �������: ";
	cin >> Size;
	MyClass.PrintElement(A, Size);
	cout << endl;
	cout << "����������� ��������: ";
	MyClass.PrintArray(MyClass.SumOfArraySimple(A,B));
	cout << endl;
	cout << "����������� �������� � ����������� ������������� ���������: ";
	MyClass.PrintArray(MyClass.SumOfArrayExpanded(A, B));
	cout << endl;
}