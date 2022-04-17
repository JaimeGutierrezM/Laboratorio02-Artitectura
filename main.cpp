#include <iostream>
#include <bitset> 
using namespace std;

int main() {

    int a=0;
    int q;
    int m;
    int n;
    
    cout << "Numero de bits: " << "\n";
    cin >> n; 
    cout << "Dividendo: " << "\n";
    cin >> q;
    cout << "Divisor: " << "\n";
    cin >> m;

    bitset<4> bina(a), binq(q), binm(m), bina2;

    if (n==4)
        bitset<4> bina(a), binq(q), binm(m), bina2;
    if (n==8)
        bitset<8> bina(a), binq(q), binm(m), bina2;
    if (n==16)
        bitset<16> bina(a), binq(q), binm(m), bina2;

    for (int i =n; n > 0; n=n-1){

        cout << "\n";
        cout << "\n";

        bina = (bina << 1);

        cout << "Bits de a: " << bina<< "\n";

        bina[0] = binq[3];


        cout << "Bits de q: " << binq << "\n";
        cout << "bits de a: " << bina << "\n";

        binq = (binq << 1);

        cout << "\n";
        cout << "Despues del shift: " << "\n";
        cout << "Bits de q: " << binq << "\n";

        a = bina.to_ulong();


        binm.flip();

        bina2= bina;
        bina = bina.to_ulong() + binm.to_ulong() + 1;

        binm.flip();

        cout << "\n";
        cout << "Despues de la resta: " << "\n";
        cout << "Bits de a: " << bina<< "\n";

        


        if (a - m < 0){
            binq[0]=0;
            cout << "Bits de q: " << binq << "\n";

            cout << "Es negativo" << "\n";
            bina = bina2;

            cout << bina << "\n";
            cout << "---------------" << "\n";            
        }

        if (a - m >= 0){
            cout << "Es positivo" << "\n";
            cout << "---------------" << "\n";   
            binq[0]=1;

        }



    }
  
    cout << "Conciente: " << binq.to_ulong() << "\n";
    cout << "Residuo: " << bina.to_ulong() << "\n";
    return 0;
}