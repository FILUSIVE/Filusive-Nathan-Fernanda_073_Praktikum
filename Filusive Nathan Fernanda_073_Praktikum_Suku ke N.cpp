#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a, b, c, jumlahsuku, hasilpangkat, i, n, j;
	

	cout << "Program Menghitung Jumlah 6 Suku pertama" << endl;
	cout << endl;
	cout << "Masukkan Nilai Suku Pertama (a) : "; cin >> a;
	cout << "Masukkan Nilai Beda Tiap Suku (b) : "; cin >> b;
	cout << "Masukkan Banyaknya Suku (n) : ";  cin >> n;
	cout << endl;
	
	for(i=1;i<=n;i++){
		cout << i << "^3\t";		
	}
	cout << endl;
	for (j=1; j<=n; j++){
		hasilpangkat = j*j*j;		
		cout << hasilpangkat << " \t";
		
		if(j<=6){
			jumlahsuku = jumlahsuku+hasilpangkat;
		}
		else{
			
		}		
	}
	cout << endl;
	cout << "==========================================" << endl;
	cout << "Jumlah 6 Suku Pertama adalah " << jumlahsuku << endl;	
	cout << "==========================================" << endl;
}
