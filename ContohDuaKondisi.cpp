#include <iostream> 
using namespace std;
int main(){
    int nBilangan;
    string status;

    srand(time(0));

    if (nBilangan % 2 == 0){
        status = "Genap";
    }

    else{
        status = "Ganjil";
    }
    
    cout << "Bilangannya adalah = " << nBilangan << endl;
    cout << "Status bilangannya adalah bilangan = " << status << endl;

    return 0;

}