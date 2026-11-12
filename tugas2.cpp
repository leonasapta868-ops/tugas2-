#include <iostream>
using namespace std;

int main() {
  int soto, rawon, pecel;
  int teh, kopi;
  int total;

  cout << "====================" << endl;
  cout << "  MENU MAKANAN  " << endl;
  cout << "====================" << endl;
  cout << "1. soto : Rp15.000" << endl;
  cout << "2. rawon : Rp20.000" << endl;
  cout << "3. pecel : Rp10.000" << endl;
  cout << "=====================" << endl;

  cout << endl;

cout << "==================================" << endl;
cout << "       MENU MINUMAN         " << endl;
cout << "==================================" << endl;
cout << "1. teh : Rp3.000" << endl;
cout << "2. kopi : Rp5.000" << endl;
cout << "===================================" << endl;

  cout << endl;

cout << "Jumlah soto  (0 jika tidak beli): ";
cin >> soto;

cout << "Jumlah rawon (0 jika tidak beli): ";
cin >> rawon;

cout << "Jumlah pecel (0 jika tidak beli): ";
cin >> pecel;

cout << "Jumlah teh (0 jika tidak beli): ";
cin >> teh;

cout << "Jumlah kopi (0 jika tidak beli): ";
cin >> kopi;

total = (soto * 15000) +
        (rawon * 20000) +
        (pecel * 10000) +
        (teh * 3000) +
        (kopi * 5000) ;

cout << endl;
cout << "===============================" << endl;
cout << "        STRUK PEMBELIAN        " << endll;
cout << "===============================" << endl;
cout << "soto : " << soto << " x Rp15.000" << endl;
cout << "rawon : " << rawon << " x Rp20.000" << endl;
cout << "pecel : " << pecel << " x Rp10.000" << endl;
cout << "teh : " << teh << " x Rp3.000" << endl;
cout << "kopi : " << kopi << " x Rp5.000" << endl;
cout << "--------------------------------" << endl;
cout << "total : Rp" << total << endl;
cout << "=================================" << endl;

system("pause");

return 0;
}
