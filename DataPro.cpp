#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <windows.h>

using namespace std;

void processing(string filename){
	string inputFile = filename + string(".txt");
	string outputFile = filename + string(".csv");
	ifstream input;
	ofstream output;
	input.open(inputFile);
	output.open(outputFile);
	output<<"$GPGGA,UTC,"<<endl;
	while(input.good()){
		string line;
		getline(input, line);
//			cout<<line<<endl;
		if(line.find("$GNRMC") != string::npos){
			output<<line<<endl;
		}
	}
	input.close();
	output.close();
	input.open(outputFile);
	output.open(filename+string(".xls"));
	while(input.good()){
		char ch;
		input.get(ch);
		if(ch != ','){
			output<<ch;
		}else{
			output<<'\t';
		}
	} 
	input.close();
	output.close();
}

int main(){
	string filename;
	cin>>filename;
	processing(filename);
	system("pause");
	return 0;
} 
