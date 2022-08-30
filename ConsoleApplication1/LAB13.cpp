#include "Headers.h"
struct Vocabulary {
	string Word;
	string Discr1;
	string Discr2;
	string Discr3;
	string Discr4;
	string Discr5;
};
struct Node {
	Vocabulary Data;
	Node* next, * prev;
};

typedef Node* PNode;

void AddFirst(PNode& Head, PNode& Tail, PNode NewNode) 
{
	NewNode->next = Head; 
	NewNode->prev = NULL; 
	if (Head) Head->prev = NewNode; 
	Head = NewNode; 
	if (!Tail) Tail = Head; 
}

void AddLast(PNode& Head, PNode& Tail, PNode NewNode, Vocabulary temp) 
{

	NewNode->prev = Tail;
	NewNode->next = NULL;
	if (Tail) Tail->next = NewNode;
	Tail = NewNode;
	if (!Head) Head = Tail;

	
	NewNode->Data = temp;

}

void Delete(PNode& Head, PNode& Tail)
{	
	if (Head == NULL && Tail == NULL) cout << "Пустой список. " << endl;
		if (Head->next) {
		    PNode tempNode = Head;	                       
			Head = Head->next;	                          
			Head->prev = NULL;	                            
			delete tempNode;
		}
		else if (Head == Tail) {
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

void PrintAll(PNode Head)
{
	if (Head == NULL)
	{
		cout << "Список пуст." << endl;
	}
	else
	{
		PNode tempNode = Head;
		while (tempNode != NULL)
		{
			cout << "Слово: "  << tempNode->Data.Word << endl;
			if (tempNode->Data.Discr1 != "") cout << "1) " << tempNode->Data.Discr1 << endl;
			if (tempNode->Data.Discr2 != "") cout << "2) " << tempNode->Data.Discr2 << endl;
			if (tempNode->Data.Discr3 != "") cout << "3) " << tempNode->Data.Discr3 << endl;
			if (tempNode->Data.Discr4 != "") cout << "4) " << tempNode->Data.Discr4 << endl;
			if (tempNode->Data.Discr5 != "") cout << "5) " << tempNode->Data.Discr5 << endl;
			tempNode = tempNode->next;
		}
		delete tempNode;
	}
}

void Find(string Word, PNode Head) 
{
	if (Head == NULL)
	{
		cout << "Пусто. " << endl;
	}
	else
	{
		cout << "Найденный элемент: " << endl;
		PNode tempNode = Head;
		while (tempNode != NULL)
		{
			if (tempNode->Data.Word == Word)
			{
				cout << "Слово: " << tempNode->Data.Word << endl;
				if (tempNode->Data.Discr1 != "") cout << "1) " << tempNode->Data.Discr1 << endl;
				if (tempNode->Data.Discr2 != "") cout << "2) " << tempNode->Data.Discr2 << endl;
				if (tempNode->Data.Discr3 != "") cout << "3) " << tempNode->Data.Discr3 << endl;
				if (tempNode->Data.Discr4 != "") cout << "4) " << tempNode->Data.Discr4 << endl;
				if (tempNode->Data.Discr5 != "") cout << "5) " << tempNode->Data.Discr5 << endl;
			}
			tempNode = tempNode->next;
		}

	}
}

PNode NodeInit()
{
	PNode NewNode = new Node;
	return NewNode;
}

int menu()
{
	int n;
	cout << "--------------------------------------" << endl;
	cout << "\t\tМЕНЮ" << endl;
	cout << "--------------------------------------" << endl;
	cout << "1. Добавить слово." << endl;
	cout << "2. Удалить слово с начала." << endl;
	cout << "3. Найти слово в словаре." << endl;
	cout << "4. Показать весь словарь." << endl;
	cout << "Выбор: " << endl;
	cin >> n;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "--------------------------------------" << endl;
	return n;
}

void LAB_13() {
	PNode Head = NULL, Tail = NULL;
	bool menucall = true;
	int choise;

	Vocabulary temp; 
	string Word; 
	while (menucall)
	{
		choise = menu();
		std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
		switch (choise)
		{
		case 1: // Добавление элемента в начало списка
			temp.Discr1 = "";
			temp.Discr2 = "";
			temp.Discr3 = "";
			temp.Discr4 = "";
			temp.Discr5 = "";
			// PNode NewNode = new Node; // указатель на новый элемент
			int disrCount;
			cout << "Введите слово: " << endl;
			getline(cin, temp.Word);
			cout << "Введите колличество значений слова (от 1 до 5): " << endl;
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
				cout << "Введено число не вошедшее в предел. " << endl;
			}
			AddLast(Head, Tail, NodeInit(), temp);
			system("CLS");
			break;

		case 2: // Удаление элемента из конца списка
			Delete(Head, Tail);
			system("CLS");
			break;

		case 3: 

			cout << "Введите слово: " << endl;
			cin >> Word;
			std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			Find(Word, Head);
			break;

		case 4: // Вывод всех записей
			PrintAll(Head);
			break;

		default:
			cout << "Повторите попытку." << endl;
			break;
		}
	}
}