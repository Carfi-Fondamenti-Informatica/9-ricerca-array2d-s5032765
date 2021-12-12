#include <iostream>
#include <string>
#include "lib.h"

using namespace std;

int main(){
	char elenco[10][20];
	for(int i=0; i<10; i++)
		cin>>elenco[i];
	string nome;
	cin>>nome;
	if(presente(nome,elenco)==-1)
		cout<<"non presente";
	else
		cout<<presente(nome,elenco);
	return 0;
}
