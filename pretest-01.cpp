/*
Nama		: Falah Rizqi Abdullah Fairuz
NPM			: 140810180069
Kelas		: A
Tanggal		: 5 Maret 2019
*/

#include<iostream>
using namespace std;

void moveZeroToEnd (int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		if (arr[i]==0)
		{
			
		}
	}
}

void input (int (&arr)[100], int& n)
{
	cout << "Masukkan panjang data : "; cin >> n;
	for (int i=0; i<n; i++)
	{
		cout << "Masukkan data ke-" << i+1 << " : "; cin >> arr[i];
	}
}

void output (int arr[], int n)
{
	cout << "Hasil : "; moveZeroToEnd(arr[],n);
}

main()
{
	int array[100];
	int nilai;
	input (array, nilai);
	moveZeroToEnd (array, nilai);
	output (array, nilai);
}
