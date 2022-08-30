#include "Headers.h" // Гласная

void LAB_11() {
	char GL[20] = {'а', 'А', 'у', 'У', 'о', 'О', 'и', 'И', 'э', 'Э', 'ы', 'Ы', 'я', 'Я', 'ю', 'Ю', 'е', 'Е', 'ё', 'Ё'};
	ofstream fout;
	ifstream fin;
	fin.open("input.txt");
	 fout.open("output.txt");
	  if (!fin.is_open()) cout << "Error, input.txt file not found!" << endl;
	  char symbol;
	  string End = "", temp = "";
	  bool ReadyToCheak = true, SavingWord = false;
		while (fin.get(symbol)) 
		{
			cout << symbol;
			End += symbol;
			if (ReadyToCheak) {
				for (int i = 0; i < 20; i++) {
					if (symbol == GL[i]) {
						ReadyToCheak = false;
						SavingWord = true;
						break;
					}
					if (i == 19) {
						ReadyToCheak = false;
						SavingWord = false;
						continue;
					}
				}
			}
			if (SavingWord && !(symbol == '?' || symbol == '!' || symbol == ',' || symbol == '.' || symbol == ';' || symbol == ':' || symbol == '-')) {
				temp += symbol;
			}
			if (symbol == ' ' || symbol == '?' || symbol == '!' || symbol == ',' || symbol == '.' || symbol == ';' || symbol == ':' || symbol == '-') {
				ReadyToCheak = true;
				SavingWord = false;
			}
			if (symbol == '\n') {
				ReadyToCheak = true;
				SavingWord = false;
				End += temp + '\n';
				temp = "";
			}	
		} 
		End += '\n' + temp + '\n';
		temp = "";
		fout << End;
		fin.close();
		fout.close();
}