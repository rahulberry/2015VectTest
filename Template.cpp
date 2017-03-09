#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

struct name{

};

int main(){

	ifstream infile;
	ofstream outfile ;

	string infilename1;
	string infilename2;
	string infilename3;
	string outfilename;

	cout << "Please enter the name of the text" << endl;
	cin >> infilename1 ;

	infile.open(infilename1.c_str());

	 if (!infile.is_open()){
	 cout << "could not open input file" << endl ;
	 exit ( EXIT_FAILURE ) ;
	 }
	 else{
		 name words;
		 while(infile >> words){
			 push_back(words);
		 }
	 }

	 infile.close();
	 cout << "Please enter the file name of the separators" << endl;
	 	cin >> infilename2 ;

	 	infile . open ( infilename2 . c_str ( ) ) ;

	 	 if ( ! infile . is_open ( ) ) {
	 	 cout << "could not open input file" << endl ;
	 	 exit ( EXIT_FAILURE ) ;
	 	 }
	 	 else{
	 		 name separated;
	 		 while(infile >> separated.word >> separated.letter){
	 			 separate.push_back(separated);
	 		 }
	 	 }

	 	 infile.close();


	 		cout << "Please enter the file name of the output file" << endl;
 		 	cin >> outfilename;
 		 	outfile . open(outfilename.c_str());

 		 	if(!outfile.is_open()){
 		 	cout << "could not open output file" << endl;
 		 	exit ( EXIT_FAILURE ) ;
 		 	}

	 		 	 for(int q = 0; q < output.size(); q++){
	 		 		 	 outfile << output[q] << " ";
	 		 	 }


	 		 	 outfile.close();
	}

