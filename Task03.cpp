#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v','w','x','y','z', '.', ',', ' ' };
string letters_s[] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m",
		"n", "o", "p", "q", "r", "s", "t", "u", "v","w","x","y","z", ".", ",", " " };
int col[29];
int getIndex(char letter) {
	for (int i = 0; i < 29; i++) {
		if (letter == letters[i]) {
			return i;
		}
	}
	return -1;
}

int main() {
	ifstream fin;
	ofstream fout;
	string text, buf;

	fin.open("Source.txt");

	while (!fin.eof()) {
		getline(fin, buf);
		text += buf;
	}
	fin.close();
	for (int i = 0; i < text.size(); i++) {
		text[i] = towlower(text[i]);
	}
	for (int i = 0; i < text.size(); i++) {
		int index = getIndex(text[i]);
		if (index == -1) { 
			cout << text[i];
			continue;
		}
		col[index]++;
	}

	for (int i = 0; i < 29; i++) {
		for (int j = 0; j < 29 - i; j++) {
			if (col[j + 1] > col[j]) {
				swap(col[j], col[j + 1]);
				swap(letters_s[j], letters_s[j + 1]);
			}
		}
	}
	string s = "";
	for (int i = 0; i < 29; i++) {
		s+= letters_s[i] + " - " + to_string(col[i]) + "\n";
	}

	fout.open("Result.txt");
	fout << s;
	fout.close();
	return 0;
}
