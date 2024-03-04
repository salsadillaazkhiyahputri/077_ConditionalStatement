#include <iostream>
using namespace std;

int main(){
    int nNilMat, nNilFis, nRerata;
    string status;

    cout << "Masukkan Nilai Matematikanya = " << endl;
    cin >> nNilMat;
    cout << "Masukkan Nilai Fisikanya = " << endl;
    cin >> nNilFis;

    nRerata = (nNilMat + nNilFis) / 2;

    if(nRerata > 60 || nNilMat > 70){
        status = "Lulus";
    }
    else{
        status = "Tidak Lulus";
    }
    
    cout << "Rata - rata kedua nilainya adalah = " << nRerata << endl;
    cout << "Kamu dinyatakan = " << status << endl;

    return 0;


}