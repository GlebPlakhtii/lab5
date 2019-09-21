#include <iostream>
#include <fstream>

using namespace std;


int def_2x2(int mat[2][2]);
int def_3x3(int mat[3][3]);
void read_file();
void write_def();

const char* inpath="in.txt";
const char* outpath="out.txt";     //пути к файлу
int arr[3][3];



int main()
{

	
	
                                                 //создание динамического массива 3x3
	read_file();
	write_def();

	



	return 0;
}





int def_3x3(int mat[3][3])
{															//детерминант для 3х3 массива 


return (mat[0][0]*mat[1][1]*mat[2][2]+mat[2][0]*mat[0][1]*mat[1][2]+mat[0][2]*mat[1][0]*mat[2][1])-(mat[0][2]*mat[1][1]*mat[2][0]+mat[2][2]*mat[0][1]*mat[1][0]+mat[0][0]*mat[1][2]*mat[2][1]);

}






int def_2x2(int mat[2][2])
{
	return mat[0][0]* mat[1][1]-mat[0][1]*mat[1][0];        // для 2х2
}





void read_file()
{                                                              //чтение матрици
	ifstream fin;
	fin.open(inpath);
	int i,tmp;
	for (i=tmp=0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			fin>>tmp;
			arr[i][j]=tmp;


		}
	}
	fin.close();
}





void write_def()
{
	
	ofstream fout;
	fout.open(outpath);
	int def=def_3x3(arr);
	fout<<def;
	





}
