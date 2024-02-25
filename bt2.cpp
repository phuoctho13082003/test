#include<iostream>
using namespace std;
int main() {
	string xau;
	int i=0;
	cout <<"nhap mot xau ky tu\n";
	getline (cin , xau);
	while( i<xau.size()){
		xau[i]=tolower(xau[i]);
		i++;
	}
	cout<< "sau khi chuyen sang chu thuong: "<<xau;
	return 0;
}
