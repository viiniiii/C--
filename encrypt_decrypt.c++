#include <iostream>
#include <cmath>
#include <iomanip>
int enkriptim(int numer);
int dekriptim(int numer);
int main(){
 int numer, sherbimi;
 std::cout << "Shtypni 1 - Per te enkriptuar" << std::endl;
 std::cout << "Shtypni 2 - Per te dekriptuar" << std::endl;
 std::cin >> sherbimi;
 if (sherbimi == 1){
 std::cout << "Keni zgjedhur enkriptimin." << std::endl;
 std::cout << "Vendosni nje number 4 shifror i cili nuk permban numrat 8 dhe 9." << std::endl;
 std::cout << "Ne rast se vendosni nje number me me pak se 4 shifra, shifrat para shifrave te vendosura do te merren automatikisht si 0." << std::endl;
 }else if (sherbimi == 2){
 std::cout << "Keni zgjedhur dekriptimin." << std::endl;
 std::cout << "Vendosni nje number 4 shifror i cili nuk permban numrat 8 dhe 9." << std::endl;
 std::cout << "Ne rast se vendosni nje number me me pak se 4 shifra, shifrat para shifrave te vendosura do te merren automatikisht si 0." << std::endl;
 } 
else {
std::cout << "Ju lutem vendosni nje nga numrat e kerkuar!" << std::endl;
}
std::cin >> numer;
 if (sherbimi == 1){
 std::cout << "Numri i enkriptuar: ";
 std::cout << std::setw(4) << std::right << std::setfill('0') << enkriptim(numer) << std::endl;
 }else{
       if(sherbimi==2)
 std::cout << "Numri i dekriptuar: ";
 std::cout << std::setw(4) << std::right << std::setfill('0') << dekriptim(numer) << std::endl;
 }
}
int enkriptim(int numer) {

 int shifra1 = numer / 1000;
 int shifra2 = (numer / 100) % 10;
 int shifra3 = (numer / 10) % 10;
 int shifra4 = numer % 10;
if (shifra1 == 8 || shifra1 == 9 || shifra2 == 8 || shifra2 == 9 || shifra3 == 8 || shifra3 == 9 || shifra4
== 8 || shifra4 == 9 ){
 std::cout << "Numri nuk duhet te permbaje numrat 8 dhe 9" << std::endl;
 return -1;
} else if (log10(numer) > 4){
 std::cout << "Numri duhet te kete 4 shifra." << std::endl;
 return -1;
 }
else{
 shifra1 = (shifra1 + 3) % 8;
 shifra2 = (shifra2 + 3) % 8;
 shifra3 = (shifra3 + 3) % 8;
 shifra4 = (shifra4 + 3) % 8;

 int enkriptuar = shifra2 * 1000 + shifra1 * 100 + shifra4 * 10 + shifra3;
 return enkriptuar;
}
}
int dekriptim(int numer) {

 int shifra1 = numer / 1000;
 int shifra2 = (numer / 100) % 10;
 int shifra3 = (numer / 10) % 10;
 int shifra4 = numer % 10;
 shifra1 = (shifra1 + 5) % 8;
 shifra2 = (shifra2 + 5) % 8;
 shifra3 = (shifra3 + 5) % 8;
 shifra4 = (shifra4 + 5) % 8;
 if (shifra1 == 8 || shifra1 == 9 || shifra2 == 8 || shifra2 == 9 || shifra3 == 8 || shifra3 == 9 ||
shifra4 == 8 || shifra4 == 9 ){
 std::cout << "Numri i enkriptuar nuk perkon me nje numer." << std::endl;
 return -1;
 }
 else if (log10(numer) > 4){
 std::cout << "Numri duhet te kete 4 shifra." << std::endl;
 return -1;
 }
 else{
 int dekriptuar = shifra2 * 1000 + shifra1 * 100 + shifra4 * 10 + shifra3;
 return dekriptuar;
}
} 
