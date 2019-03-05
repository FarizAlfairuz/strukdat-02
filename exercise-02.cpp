/*
Nama		: Falah Rizqi Abdullah Fairuz
NPM			: 140810180069
Kelas		: A
Tanggal		: 5 Maret 2019
*/

#include<iostream>
#include<string.h>
using namespace std;

struct Theatre
{
	int room;
	char seat[3];
	char movieTitle[30];
};

main()
{
	Theatre bioskop;
	
	bioskop.room = 7;
	strcpy(bioskop.seat, "J9");
	strcpy(bioskop.movieTitle, "Adit & Jarwo");
	
	cout << bioskop.room << endl;
	cout << bioskop.seat << endl;
	cout << bioskop.movieTitle << endl;
}
