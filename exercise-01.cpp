/*
Nama		: Falah Rizqi Abdullah Fairuz
NPM			: 140810180069
Kelas		: A
Tanggal		: 5 Maret 2019
*/

#include<iostream>
#include<string.h>
using namespace std;

struct Orang
{
	int umur;
	char nama[30];
	char jk[2];
	char goldar[2];	
};

main()
{
	Orang orang;
	orang.umur = 10;
	strcpy(orang.nama, "Fahmi");
	strcpy(orang.jk, "L");
	strcpy(orang.goldar, "O");
	
	cout << orang.umur << endl;
	cout << orang.nama << endl;
	cout << orang.jk << endl;
	cout << orang.goldar << endl;
}
