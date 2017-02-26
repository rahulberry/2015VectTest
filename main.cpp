#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

struct prod{
	string name;
	int quant;
};

void merge_items(vector<prod> warehouse1, vector<prod>& warehouse2);

int main(){
	vector<prod> warehouse1;
	vector<prod> warehouse2;

	ifstream infile, infile2;

	cout << "Please enter the file name for the first warehouses stock:" << endl;
		string infilename;
		cin >> infilename;
		infile.open(infilename.c_str());
		 if ( ! infile.is_open()) {
			 cout << "could not open input file" << endl ;
			 exit ( EXIT_FAILURE ) ;
		 }
		 else{
			 prod product;
			 int q = 0;
			 while(infile >> product.name >> product.quant){
				 warehouse1.push_back(product);
				 cout << warehouse1[q].name << "  "<< warehouse1[q].quant << endl;
				 q++;
			 }
		 }

	cout << "\nPlease enter the file name for the second warehouses stock:" << endl;
		 string infilename2;
		 cin >> infilename2;
		 infile2.open(infilename2.c_str());
		 	if (!infile2.is_open()) {
		 		cout << "could not open input file" << endl ;
		 			exit ( EXIT_FAILURE ) ;
		 		 }
		 		 else{
		 			 int q = 0;
		 			 prod product2;
		 			 while(infile2 >> product2.name >> product2.quant){
		 				 warehouse2.push_back(product2);
		 				 cout << warehouse2[q].name << "  " << warehouse2[q].quant << endl;
		 				 q++;
		 			 }
		 		 }

	cout << "The total contents of both warehouses are:" << endl;
		merge_items(warehouse1, warehouse2);
		for(int i=0; i<= warehouse2.size()-1; i++){
			cout << warehouse1[i].name << warehouse1[i].quant;
		}
}

void merge_items(vector<prod>& warehouse1, vector<prod> warehouse2){
	prod product2;
	for(int i = 0; i <= warehouse1.size()-1; i++){
		for(int j = 0; j <= warehouse2.size()-1; j++){
			if(warehouse1[i].name == warehouse2[j].name){
				warehouse1[i].quant = warehouse1[i].quant + warehouse2[j].quant;
			}
		}
	}
}

