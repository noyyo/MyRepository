#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fin("testdata.txt");
	if (!fin)
		cout << "file loading failed" << endl;
	int data;

	char c;
	string str = "";
	
	while ((c = fin.get()) != EOF) 
	{
		if (c == ' ') {
			data = stoi(str);
			str = "";
			cout << data << endl;
		}
		else 
		{
			str.append(1, c);
			cout << str << " test "<< endl;
		}
	}

}