#include <iostream>
using namespace std;

int main()
{
	/*CONTINUE
	  Adalah fungsi untuk menjalankan suatu perintah
	  dengan mengabaikan isi dari continue
	  dan lanjut ke sisa perintah selanjutnya */

	cout << "\nprogram continue pakai while(loop)" << endl;

	int a = 1;

	while (a < 10)
	{
		a++;
		if ( a == 5)
			{continue;}

		cout << a << endl;
	}

	cout << "selesai guys" << endl;

	return 0;
}
