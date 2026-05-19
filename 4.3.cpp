#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int const n=100;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/pary.txt");
	int i=0, j=0, iterator=0, najm_l=1000;
	int liczby[n];
	char obecna=0, najmniejsza=0;
	string wyrazy[n];
	string a="", najm_w="";
	vector<int> para;

	for(i=0; i<n; i++){
		we>>liczby[i];
		we>>wyrazy[i];
	}

	for(i=0; i<n; i++){
		a=wyrazy[i];
		if(liczby[i]==a.size()){
			para.push_back(i);
		}
	}

	for(i=0; i<para.size(); i++){
		iterator=para[i];
		a=wyrazy[iterator];
		
		if(liczby[iterator]<najm_l){
			najm_l=liczby[iterator];
			najm_w=wyrazy[iterator];
		}
		
		if(liczby[iterator]==najm_l){
			j=0;
			obecna=a[j];
			najmniejsza=najm_w[j];
			while(obecna>=najmniejsza && j<a.size()){
				j++;
				obecna=a[j];
				najmniejsza=najm_w[j];
			}
			if(j<a.size()){
				najm_l=liczby[iterator];
				najm_w=wyrazy[iterator];
			}
		}	
	}
	
	cout<<najm_l<<" "<<najm_w;
	
	return 0;
}
