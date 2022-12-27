#include <bits/stdc++.h>
using namespace std;

struct Huh{
    char ID[1001];
    char Nama[1001];
    char Matkul[1001];
    int Nilai;
};


int main(){
    int x;
    scanf("%d", &x);
    Huh mahasiswa[x];
    for (int i = 0; i < x; i++){
        scanf("%s", mahasiswa[i].ID);
        scanf("\n%[^\n]s", mahasiswa[i].Nama);
        scanf("\n%[^\n]s", mahasiswa[i].Matkul);
        scanf("%d", &mahasiswa[i].Nilai);
    }
    printf("DATA MAHASISWA: \n");
    printf("=======================\n");
    for (int i = 0; i < x; i++){
        printf("%d. NRP: %s\n", (i + 1), mahasiswa[i].ID);
        printf("   Nama Mahasiswa: %s\n", mahasiswa[i].Nama);
        printf("   Mata Kuliah: %s\n", mahasiswa[i].Matkul);
        printf("   Nilai %s: %d\n", mahasiswa[i].Matkul, mahasiswa[i].Nilai);
        printf("\n");
    }
    

    return 0;
}