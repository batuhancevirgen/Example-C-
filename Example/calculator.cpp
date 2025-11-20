#include <iostream>
using namespace std;

int main(){
    float sayi1, sayi2, sonuc;
    int secim;

    do
    {
    cout<<"--------Hesap Makinesi-----------\n";
    cout<<"1. Toplama"<<endl;
    cout<<"2. Cikarma"<<endl;
    cout<<"3. Bolme"<<endl;
    cout<<"4. Carpma"<<endl;
    cout<<"5. Cikis"<<endl;

    cout<<"Secim"<<endl;
    cin>>secim;

    if(secim >=1 && secim < 5){
        cout<<"sayi1: ";
        cin>>sayi1;
        cout<<"sayi2: ";
        cin>> sayi2;
    }
    switch(secim){
        case 1:
            sonuc= sayi1 + sayi2;
            cout<<"sonuc:"<<sonuc<<endl;
            break;
        case 2:
            sonuc = sayi1 - sayi2;
            cout<<"sonuc:"<<sonuc<<endl;
            break;
        case 3:
            if(sayi2 == 0){
                cout<<"Sifira bolme hatasi " <<endl;
            }
            else {
                sonuc = sayi1/sayi2;
                cout<<"sonuc: "<<sonuc<<endl;
            }
            break;
        case 4 :
            sonuc = sayi1*sayi2;
            cout<<"sonuc:"<<sonuc<<endl;
            break;
        case 5:
            cout<<"Hesap makinesi kapandi"<<endl;
            break;
        default:
            cout<<"gecersiz secim yaptiniz"<<endl;
    }
    cout<<"---------------------";
    } while (secim != 5);
    
return 0;
}