#include <iostream>

using namespace std;

int main()
{
	int x[10]={12,23,34,45,56,56,78,89,90,12}; //bisa diubah
	int num;
	int j;
	int index[5]; 
	// memasukkan pilihan angka
	cout <<"daftar angka : 12,23,34,45,56,78,89,90\n";
	cout << "Masukkan angka yang dicari: ";
	cin >> num;
	cout << endl;
	
	//pencarian angka
	j=0;
	for(int i=0; i<10;i++){
		
		if (x[i]==num){
				index[j]=i;
				j++;
			
		}
	}
	
	//menampilkan jumlah dan indeks angka
	
	cout << "jumlah angka "<<num<<" sebanyak : "<<j<<endl;
	cout << "Data "<<num<<" terdapat pada indeks ke: ";
	for (int i=0; i < j; i++){
		cout << index[i]+1<<", ";
	}
	
	return 0;
}