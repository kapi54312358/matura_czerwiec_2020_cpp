#include <iostream>
#include <fstream>

using namespace std;

int const n=100;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/pary.txt");
	int i=0, j=0, k=0, l=0, najd_c=0;
	char litera=0;
	string a="";
	int liczby[n];
	string wyrazy[n];

	

	for(i=0; i<n; i++){
		we>>liczby[i];
		we>>wyrazy[i];
	}

	for(i=0; i<n; i++){
		a=wyrazy[i];
		najd_c=0;
		l=0;
		
		for(j=1; j<a.size(); j++){
			while(a[j-1]==a[j]){
				l++;
				j++;
			}
			l++;
			if(l>najd_c){
				najd_c=l;
				litera=a[j-1];	
			}
			l=0;	
		}
		
		for(k=0; k<najd_c; k++){
			cout<<litera;
		}	
		cout<<" "<<najd_c<<" "<<endl;
	}
	
	return 0;
}
