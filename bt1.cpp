#include<iostream>
using namespace std;
int main() {
	string xau;
	cout <<"nhap mot xau ky tu\n";
	getline (cin , xau);
	int i=0 , dem=0;
	for (i=0; xau[i]!='\0'; i++){
		if(isupper(xau[i])) dem++;
		
	}
	cout <<"so ky tu in hoa la:"<<dem;
	return 0;
}
