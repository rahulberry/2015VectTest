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

/*string functions
.find('a')

string word = banana;
word.fina('a'); will return 1;

Counter:
string fruit = "banana";
int length = fruit.length();
int count = 0;
int index = 0;
	while (index < length) {
		if (fruit[index] == ÕaÕ) {
				count = count + 1;
		}
			index = index + 1;
		}
			cout << count << endl;

#include ctype.h
to use functions toupper tolower to make the letters upper/lower case;

function isalpha checks whether the character is a letter;
isdigit identifies numbers
isspace identifies white space
isupper islower identifies lower and upper case;

vector stuff:
vector<int> count (4);
adding the brackets at the end specifies the vector size

Under cstdlib there is a function that generates pseudorandom numbers between 0 and RAND_MAX(very large number)
call using
x = random()

to create a bound
int x = random ();
int y = x % upperBound;
where upperbound is the chosen limit - 1;
