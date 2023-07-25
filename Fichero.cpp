#include<iostream>
#include<fstream>
using namespace std;
int main() {
string a;
ofstream fich("ficha.txt");
cout<<"ingrese una frase:";
getline(cin,a);
fich<<a;


}
