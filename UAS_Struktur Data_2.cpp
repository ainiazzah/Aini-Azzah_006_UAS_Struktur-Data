/*
		D4 Manajemen Informatika
		NAMA	: Aini Azzah
		NIM		: 21091397006
		KELAS	: 2021 B
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    int jumlah, panjang, hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7;
	char kota1,kota2,kota3,kota4,kota5;
    
    // Menginiput jumlah kota di kerajaan Britan
    cout<<"=> Jumlah kota yang terdapat di kerajaan Britan : "<< endl;
    cin>>jumlah;
    
    // Deklarasi vertex serta menginputkan nama masing-masing vertex dengan inisialisasi kota
    cout<<"=> Kota Pertama : ";
    cin>>kota1;
    cout<<"=> Kota Kedua   : ";
    cin>>kota2;
    cout<<"=> Kota Ketiga  : ";
    cin>>kota3;
    cout<<"=> Kota Keempat : ";
    cin>>kota4;
	cout<<"=> Kota kelima  : ";
	cin>>kota5;
	cout<<endl;
	
	// Deklarasi edge serta menampilkan setiap edge
	cout<<"=> Edges-nya adalah : "<<endl<<endl;
    cout<<kota1<<"-"<<kota2<<", ";
    cout<<kota1<<"-"<<kota4<<", ";
    cout<<kota1<<"-"<<kota5<<", ";
    cout<<kota2<<"-"<<kota3<<", ";
    cout<<kota3<<"-"<<kota5<<", ";
    cout<<kota3<<"-"<<kota4<<", ";
    cout<<kota4<<"-"<<kota5<<endl<<endl;
	
	// Deklarasi weight, yaitu dengan menginputkan panjang jalan penghubung antar vertex
	cout<<"=> Panjang jalan antar kota : "<<endl;
	cout<<" Panjang "<<kota1<<" ke "<<kota2<< ": "; cin>> hasil1;
	cout<<" Panjang "<<kota1<<" ke "<<kota4<< ": "; cin>> hasil2;
	cout<<" Panjang "<<kota1<<" ke "<<kota5<< ": "; cin>> hasil3;
	cout<<" Panjang "<<kota2<<" ke "<<kota3<< ": "; cin>> hasil4;
	cout<<" Panjang "<<kota3<<" ke "<<kota5<< ": "; cin>> hasil5;
	cout<<" Panjang "<<kota3<<" ke "<<kota4<< ": "; cin>> hasil6;
	cout<<" Panjang "<<kota4<<" ke "<<kota5<< ": "; cin>> hasil7;
	cout<<endl;
	
	// Menampilkan jalan yang menghubungkan kedua simpul (x,y,z)
	cout<<"=> Seluruh jalan yang ada dalam kerajaan britan dan panjang jalannya : "<< endl;
	cout<<"("<<kota1<<","<<kota2<<","<<hasil1<<") ";
	cout<<"("<<kota1<<","<<kota4<<","<<hasil2<<") ";
	cout<<"("<<kota1<<","<<kota5<<","<<hasil3<<") ";
	cout<<"("<<kota2<<","<<kota3<<","<<hasil4<<") ";
	cout<<"("<<kota3<<","<<kota5<<","<<hasil5<<") ";
	cout<<"("<<kota3<<","<<kota4<<","<<hasil6<<") ";
	cout<<"("<<kota4<<","<<kota5<<","<<hasil7<<") ";
	cout<<endl<<endl;
	
	// Hasil yang dikeluarkan
	// Menampilkan kota tempat pedagang berada
	cout<<"=> Kota tempat pedagang sekarang berada : "<<kota1<<endl<<endl;
	
	// Menampilkan kota yang diserang oleh naga
	cout<<"=> Kota yang diserang naga : "<<kota3<<endl<<endl;
	
	// Menampilkan kota yang terdapat kastil
	cout<<"=> Kota yang memiliki kastil : "<<kota5<<endl<<endl;
	
	// Menampilkan jalan tecepat mencapai istana
	cout<<"=> Jalur yang paling cepat ditempuh : "<<kota1<<"-"<<kota4<<"-"<<kota5<<endl<<endl<<endl;
	
	// Menampilkan jarak jalan tercepat mencapai istana
	cout<< "=> Dengan jarak : "<<hasil2+hasil7<<endl<<endl;
	
	
	getch();
	return 0;
}
