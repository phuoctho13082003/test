#include<iostream>
using namespace std;
int main() {
	string xau;
	char batki;
	int i=0, dem=0;
	cout <<"nhap mot xau ky tu\n";
	getline (cin , xau);
	cout<<"nhap ki tu: ";
	cin>>batki;
	while( i<xau.size()){
	
		if(xau[i]==batki)
			dem++;
		
	i++;}
	cout<< "so lan ki tu : "<<dem;
	return 0;
}
