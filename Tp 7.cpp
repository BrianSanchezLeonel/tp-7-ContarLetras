#include<bits/stdc++.h>
using namespace std;
int ContarLetraA(string f);
int main(){
	string f;
	cout<<"Ingrese una frase:"<<endl;
	cin>>f;
	int C=ContarLetraA(f);
	cout<<"Tiene "<<C<<" vocales"<<endl;
	return 0;
}
int ContarLetraA(string f){
	int contar,i=0;     
	while(i <= f.size()){
		f[i]=tolower(f[i]);
		if(f[i]=='a' || f[i]=='e' || f[i]=='i' || f[i]=='o' || f[i]=='u'){
			contar+=1;
	    }
		i++;
	}
	return contar;
  }