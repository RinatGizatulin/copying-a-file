#include <iostream>
#include <fstream>

using namespace std;

void filecopy (ifstream &in, ofstream &out)
{
	char ch;
	while(in.get(ch))        // ������ ��� �������, � ��� ����� ����������
    out.put(ch); 
}

int main()
{    
	ifstream instrm ("txt.txt");
    ofstream outstrm("new txt.txt");
    if (instrm) filecopy(instrm, outstrm);        // ����������� ������
 return 0;
}
