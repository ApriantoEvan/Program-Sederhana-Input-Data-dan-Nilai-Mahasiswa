#include <iostream>
#include <string>
using namespace std;

int main(){
	string nama[20], status[20];
	int nilai[20];
	int n;
	
	cout << "Masukkan Jumlah Data = ";
	cin >> n;
	cout << endl;
	
	for (int i = 0; i < n; i++){
		cout << "Data ke-" << i + 1 <<endl;
		cout << "Masukkan Nama = ";
		cin >> nama[i];
		cout << "Masukkan Nilai = ";
		cin >> nilai[i];
		
		if (nilai[i] <= 60){
			status[i] = "Tidak Lulus";
		}else{
			status[i] = "Lulus";
		}
	}
	
	cout <<endl;
	cout << "\t\t DAFTAR NILAI MAHASISWA" <<endl;
	cout << "-----------------------------------------------------------------"<<endl;
	cout << "|NO|	Nama	|	Nilai	|		Status		|"<<endl;
	cout << "-----------------------------------------------------------------"<<endl;
	
	for (int i = 0; i < n; i++){
		cout <<i+1 << "	" << nama[i] << "		" << nilai[i] << "			" << status[i] <<endl;
		cout << "-----------------------------------------------------------------"<<endl;
	}
return 0;
}
