#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,jumlahderet, banyakderet;
	

	cout << "Menghitung Jumlah Deret" << endl;
    cout<<"\n";
	cout << "Masukkan Banyak Deret : "; cin >> banyakderet;
	
	for(int i=3; i<=banyakderet; i+=4){
		cout << i << " ";
        jumlahderet += i;
	}
	cout << endl;
    cout << "Jumlah Deret = " << jumlahderet << endl;
}

