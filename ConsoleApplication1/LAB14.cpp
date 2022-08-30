#include "Headers.h"
struct Stack {
	string Word;
	string Discr1;
	string Discr2;
	string Discr3;
	string Discr4;
	string Discr5;
};

struct Node {
	Stack Data;
	Node* next, * prev;
};
typedef Node* PNode;
PNode NodeInit_()
{
	PNode NewNode = new Node;
	return NewNode;
}
void Delete_(PNode& Head, PNode& Tail)
{
	if (Head == NULL && Tail == NULL) cout << "������ ������. " << endl;
	if (Head == Tail) {
		Head->next = NULL;
		Head = NULL;
		Tail = NULL;
		delete Head;
	}
	else {
		PNode tempNode = Tail;
		Tail = Tail->prev;
		Tail->next = NULL;
		delete tempNode;
	}
}
void FindElement(PNode& Head, PNode& Tail, string Word) {
	if (Head == NULL && Tail == NULL) cout << "List empty.";
	else {
		PNode tempNode = Tail;
		while (tempNode != NULL) {
			if (tempNode->Data.Word == Word) {
				cout << "�����: " << tempNode->Data.Word << endl;
				if (tempNode->Data.Discr1 != "") cout << "1) " << tempNode->Data.Discr1 << endl;
				if (tempNode->Data.Discr2 != "") cout << "2) " << tempNode->Data.Discr2 << endl;
				if (tempNode->Data.Discr3 != "") cout << "3) " << tempNode->Data.Discr3 << endl;
				if (tempNode->Data.Discr4 != "") cout << "4) " << tempNode->Data.Discr4 << endl;
				if (tempNode->Data.Discr5 != "") cout << "5) " << tempNode->Data.Discr5 << endl;
				break;
			}
			tempNode = tempNode->prev;
			Delete_(Head, Tail);
		}
	}
}
void Push(PNode& Head, PNode& Tail, PNode NewNode, Stack temp) 
{
	NewNode->next = Head;
	NewNode->prev = NULL;
	if (Head) Head->prev = NewNode;
	Head = NewNode;
	if (!Tail) Tail = Head;
	NewNode->Data = temp;
}
void ShowElement(PNode Head) {
	if (Head == NULL)
	{
		cout << "������ ����." << endl;
	}
	else {
		PNode tempNode = Head;
	}
}
void PrintAll_(PNode& Head, PNode& Tail)
{
	if (Tail == NULL)
	{
		cout << "������ ����." << endl;
		//break;
	}
	else
	{
		PNode tempNode = Tail;
		cout << "�����: " << tempNode->Data.Word << endl;
		if (tempNode->Data.Discr1 != "") cout << "1) " << tempNode->Data.Discr1 << endl;
		if (tempNode->Data.Discr2 != "") cout << "2) " << tempNode->Data.Discr2 << endl;
		if (tempNode->Data.Discr3 != "") cout << "3) " << tempNode->Data.Discr3 << endl;
		if (tempNode->Data.Discr4 != "") cout << "4) " << tempNode->Data.Discr4 << endl;
		if (tempNode->Data.Discr5 != "") cout << "5) " << tempNode->Data.Discr5 << endl;
		if (tempNode->prev != NULL) tempNode = tempNode->prev;
		Delete_(Head, Tail);

	}
}

int menu_()
{
	int n;
	cout << "######################################" << endl;
	cout << "\t\t����" << endl;
	cout << "######################################" << endl;
	cout << "1. �������� �����." << endl;
	cout << "2. �������� ����� �� �����." << endl;
	cout << "3. ����� ����� � �������." << endl;
	//cout << "4. ���������� ���� �������." << endl;
	cout << "�����: " << endl;
	cin >> n;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "######################################" << endl;
	return n;
}
void LAB_14() {
	string WordForFind;
	PNode Head = NULL, Tail = NULL;
	bool menucall = true;
	int choise;
	Stack temp;
	string Word;
	while (menucall)
	{
		choise = menu_();
		std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
		switch (choise)
		{
		case 1: // ���������� �������� � ������ ������
			temp.Discr1 = "";
			temp.Discr2 = "";
			temp.Discr3 = "";
			temp.Discr4 = "";
			temp.Discr5 = "";
			// PNode NewNode = new Node; // ��������� �� ����� �������
			int disrCount;
			cout << "������� �����: " << endl;
			getline(cin, temp.Word);
			cout << "������� ����������� �������� ����� (�� 1 �� 5): " << endl;
			cin >> disrCount;
			if (disrCount >= 1 && disrCount <= 5) {
				cin.ignore();
				for (int i = 0; i < disrCount; i++) {
					switch (i) {
					case(0): {
						cout << "1: ";
						getline(cin, temp.Discr1);
						break;
					}
					case(1): {
						cout << "2: ";
						getline(cin, temp.Discr2);
						break;
					}
					case(2): {
						cout << "3: ";
						getline(cin, temp.Discr3);
						break;
					}
					case(3): {
						cout << "4: ";
						getline(cin, temp.Discr4);
						break;
					}
					case(4): {
						cout << "5: ";
						getline(cin, temp.Discr5);
						break;
					}
					}
				}
			}
			else {
				cout << "������� ����� �� �������� � ������. " << endl;
			}
			Push(Head, Tail, NodeInit_(), temp);
			system("CLS");
			break;

		case 2: // �������� �������� �� ����� ������
			PrintAll_(Head, Tail);
			//system("CLS");
			break;
		case 3:
			cout << "����� ����� ���������� �����: ";
			cin >> WordForFind;
			FindElement(Head, Tail, WordForFind);
			break;
		default:
			cout << "��������� �������." << endl;
			break;
		}
	}
}
