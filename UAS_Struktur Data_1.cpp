/*
		D4 Manajemen Informatika
		NAMA	: Aini Azzah
		NIM		: 21091397006
		KELAS	: 2021 B
*/

//	PROGRAM ADJACENCY MATRIX UTS STRUKTUR DATA NO. 1

#include<iostream>
#define Max 100
using namespace std;

// inisialisasi variable adjacency matrix
int AdjMatrix[Max][Max];

// inisialisasi matriks ke nol
void Inisialisasi_AdjMatrix(int v)
{
	for(int i = 0; i < v; i++)
	{ 
	    for(int j = 0; j < v; j++ )
	    { 
	    AdjMatrix[i][j] =0;
		}
	}
}

// menambahkan edges
void TambahEdge(int u, int v, int w)
{
	AdjMatrix[u][v] = w;
	AdjMatrix[v][u] = w;
}

// program mencetak adjacency matriks
void TampilkanAdjMatrix(int v)
{
    
	for (int i = 1; i <= v; i++)
	{
		for (int j = 1; j <= v; j++)
		{
			cout << AdjMatrix[i][j] <<"\t";
		}
		
		cout << endl;
	}
}

int main()
{
	 
	int JumlahVertex = 4;
	
	// memanggil program inisialisasi adjacency matrix
	Inisialisasi_AdjMatrix (JumlahVertex);
	
	// menginputkan vertex 1, vertex 2, dan weight-nya
	TambahEdge(1,2,5);
	TambahEdge(2,3,1);
	TambahEdge(4,1,3);
	TambahEdge(2,4,1);
	TambahEdge(3,1,1);
	
	// memanggil perintah mencetak program adjacency matrix
	TampilkanAdjMatrix (JumlahVertex);
	
	return 0;
}
