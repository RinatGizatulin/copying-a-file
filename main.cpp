// Копирование текстового файла
#include <iostream>
#include <fstream>

using namespace std;

void filecopy (ifstream &in, ofstream &out)
{
	char ch;
	while(in.get(ch))        // считывание всех символов, включая пробелы
    out.put(ch); 
}

int main()
{    
	ifstream instrm ("txt.txt");
    ofstream outstrm("new txt.txt");
    if (instrm) filecopy(instrm, outstrm);        // копирование файла
 return 0;
}
