#include <bits/stdc++.h>
using namespace std;

void recur(int&);

//paso por valor
int suma(int a, int b){
	return a+b;
}
//paso por referencia
void recur(int& r){
	r=r+1;
}
//recursividad
int fac(int x){
	if (x==0){
		x=1;
	}
	else{
		x=x*fac(x-1);
	}
	return x;
}


int main(){
	
	
	int a,b,r,t;
	cout<<"ingresa los valores: \n";
	cin>>a>>b;
	cout<<"la suma de: "<<a<<" + "<<b<<" es igual a: "<< suma(a,b)<<endl;//Resultado de poso por valor	
	r=a+b;
	recur(r);
	cout<<"Aumenntando uno a la suma: "<<r<<endl;//resultado de paso por referencia
	system("pause");
	cout<<"ingresa el valor para sacar factorial: ";
	cin>>t;
	cout<<"Factorial igual a: "<<fac(t)<<endl;	

	return 0;
}
