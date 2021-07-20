//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Journal
//{
//	public:
//		string title;
//		vector<string> entries;
//		void save()
//		{
//			ofstream fout;
//			fout.open("Journal.txt", ios::out);
//			for (auto &e : entries)
//			{
//				fout << e << "\n";
//			}
//			fout.close();
//		}
//};
//
//class MyLibrary
//{
//	public:
//		void saveDatatoMyLibLoc(const Journal&j)
//		{
//			ofstream fout;
//			fout.open("MyLibrary.txt", ios::out);
//			for (auto &e : j.entries)
//			{
//				fout << e << "\n";
//			}
//			fout.close();
//		}
//};
//
//
//void main()
//{
//	Journal j;
//	j.title = "The Truth of Life";
//	j.entries.push_back("Life is simple");
//	j.entries.push_back("Life is all about ups and downs");
//	j.entries.push_back("Life is a gift from God");
//
//	MyLibrary l;
//	l.saveDatatoMyLibLoc(j);
//	/*ofstream fout;
//	fout.open("demo.txt", ios::out);
//	fout << "My Name is Aniket";
//	fout.close();*/
//}