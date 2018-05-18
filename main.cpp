#include <iostream>
#include <fstream>

using namespace std;

void filecopy (ifstream &in, ofstream &out)
{
	char ch;
	while(in.get(ch))        // читать все символы, в том числе пробельные
    out.put(ch); 
}

int main()
{    
	ifstream instrm ("txt.txt");
    ofstream outstrm("new txt.txt");
    if (instrm) filecopy(instrm, outstrm);        // копирование файлов
 return 0;
}
