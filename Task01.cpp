//#include <fstream>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	ifstream fin;
//	string s1 = "", s2 = "";
//
//	fin.open("E:\\NavitskiVladislav\\!folder\\Lesson71\\Lesson71\\file.txt");
//
//	string buf;
//	while (!fin.eof()) {
//		fin >> buf;
//		s1+=buf+"\n";
//	}
//	fin.close();
//	fin.open("E:\\NavitskiVladislav\\!folder\\Lesson71\\Lesson71\\file2.txt");
//	while (!fin.eof()) {
//		fin >> buf;
//		s2 += buf + "\n";
//	}
//	string msg = s1 == s2 ? " are equal " : " aren't equal ";
//	cout << "This files" << msg;
//	fin.close();
//
//	return 0;
//}