/*
Nama		: Falah Rizqi Abdullah Fairuz
NPM			: 140810180069
Kelas		: A
Tanggal		: 5 Maret 2019
*/

#include<iostream>
#include<string.h>
using namespace std;

struct Pegawai
{
	char nip[5];
	char nama[20];
	int gol;
};

typedef Pegawai pgw[20];

void banyakData(int& n)
{
	cout << "Masukkan banyak data : "; cin >> n;
}

void inputPegawai(int n, pgw& p)
{
	for(int i=0; i<n; i++)
	{
		cout << "Masukkan data pegawai ke-" << i+1 << " : " << endl;
		cout << "NIP		: "; cin >> p[i].nip;
		cout << "Nama		: "; cin >> p[i].nama;
		cout << "Golongan	: "; cin >> p[i].gol;
	}
}



void sorting(pgw p, int n)
{
	int posisi;
	for (int i=0; i<n; i++)
	{
		posisi=i;
		for (int j=i+1; j<n; j++)
		{
			if (p[posisi].nip>p[j].nip)
			{
				posisi=j;
			}
		}
		swap (p[i], p[posisi]);
	}
}

void cetakDaftar(int n, pgw p)
{
	sorting(p, n);
	
	for(int i=0; i<n; i++)
	{
		cout << "--------------------------------------------------" << endl;
		cout << "NIP\tNama\t\t\tGol\t\tGaji" << endl;
		
	}
}

int cariGaji(pgw p, int n)
{
	for (int i=0; i<n; i++)
	{
		if (p[i].gol == 1)
		{
			return 2000;
		}
		else if (p[i].gol == 2)
		{
			return 3000;
		}
		else if (p[i].gol == 3)
		{
			return 5000;
		}
		else if (p[i].gol == 4)
		{
			return 8000;
		}
	}
}

void rataGaji(pgw p, int n)
{
	int total, rata;
	
}

main ()
{
	int nilai;
	pgw pegawai;
	
	banyakData(nilai);
	inputPegawai(nilai, pegawai);
	cariGaji(pegawai, nilai);
}
