#include <bits/stdc++.h>
using namespace std;

class Mahasiswa{
    private:
        char nama[1001];
        float IPK;
    public:
        void setMahasiswa(char str[1001], float x){
            strcpy(nama, str);
            IPK = x;
        }
        void getMahasiswa(){
            printf("%s", nama); 
        }
        float getIPK(){
            return IPK;
        }
};

int main(){
    Mahasiswa Data;
    char temp[1001];
    float dam;
    scanf("%[^\n]s", temp);
    scanf("%f", &dam);
    Data.setMahasiswa(temp, dam);
    Data.getMahasiswa();
    printf("\n%.2f", Data.getIPK());

    return 0;
}