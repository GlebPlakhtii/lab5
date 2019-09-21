#include <iostream>
#include <fstream>

using namespace std;

const char * inpath="text.txt";
const char * outpath="new_text.txt";            // путь к файлам

char ch;

int main()
{
	ifstream fin;
	ofstream fout;
	fout.open(outpath); 
	fin.open(inpath);
	
	while(fin.get(ch))
	{	
		if (ch==' ')
		{
			ch='\t';
		}
			fout<<ch;
		

	}

	fin.close();
	fout.close();

	return 0;
}


