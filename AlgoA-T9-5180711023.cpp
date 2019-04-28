#include <iostream>
using namespace std;

int main()
{
	int  DATA[10], juml, ch, delt, cari, ket = 0;


	ulangi:
	cout << "MASUKAN JUMLAH DATA YANG AKAN DIINPUT : ";cin >> juml;
if (juml > 0)
	{
		for (int i = 0; i<juml; i++)
		{
			cout << "MASUKAN NILAI DATA KE-" << i + 1 << " : ";cin >> DATA[i];
		}
		cout << "\nDATA : ";
		for (int j = 0; j<juml; j++)
		{
			cout << "\nDATA[" << j << "]= " << DATA[j];
		}
	}
	if (juml > 10 )
	{
		cout << "\nMAX JUMLAH DATA 10!\n\n";
       goto ulangi;
	}

	cout << "\n\nMASUKAN NILAI YANG DICARI = "; cin >> cari;

	for (int n = 0; n<juml; n++) {
		if (cari == DATA[n])
            {
			cout << "\nNILAI " << cari << " DITEMUKAN PADA DATA = " << n <<endl;
			ket = 1;

            }

	if (ket == 0) cout << " NILAI DATA TIDAK ADA";

cout << "\n\nMASUKAN NILAI YANG AKAN DIUBAH = "; cin >> ch;
	for (int g = 0; g<juml; g++)
	{
		if (DATA[g] == ch)
		{
			cout << "MASUKAN NILAI BARU = "; cin >> DATA[g];
		}
	}
	cout << "\n\nNILAI DATA MENJADI : ";
	for (int h = 0; h<juml; h++)
	{
		cout << "\nDATA[" << h << "]= " << DATA[h];
	}
		cout << "\n\nMASUKAN NILAI YANG AKAN DIHAPUS = ";cin >> delt;

	for (int j = 0; j < juml; j++)
	{
		if (delt == DATA[j])
		{
			for (int k = j; k < juml; k++)
			{
				DATA[k] = DATA[k + 1];
			}


			juml -= 1;
			break;
		}
	}

	cout << "\n\nDATA BARU :";
	for (int p = 0; p<juml; p++)
	{
		cout << "\nDATA[" << p << "]= " << DATA[p];
	}
}}
