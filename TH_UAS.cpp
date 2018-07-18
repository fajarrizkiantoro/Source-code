#include <iostream>

using namespace std;

class ATM{
private:
    int saldo;
public:
    ATM(){
        saldo=50000;
    }
    void dapetkiriman(int uang){
        saldo=saldo+uang;
    }

    void penarikan(int uang){
        saldo=saldo-uang;
    }

    void cetakSaldo(){
        cout<<saldo<<endl;
    }
};

int main(){
    ATM saldo;
    cout<<"Saldo Awal                  : Rp ";
    saldo.cetakSaldo();
    cout<<"Saldo Setelah Dapat Kiriman : Rp ";
    saldo.dapetkiriman(2000000);
    saldo.cetakSaldo();
    cout<<"Saldo Setelah Penarikan	    : Rp ";
    saldo.penarikan(500000);
    saldo.cetakSaldo();
}

