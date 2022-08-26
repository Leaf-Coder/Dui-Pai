#include<iostream>
#include<algorithm>
#include<cstring>
#include<windows.h>
#include<string>
using namespace std;

const int NOTICE_FREQUENCY = 10;
const int DIVIDING_LINE_LENGTH = 32;


int main(){
	string div_line="\n"+string(DIVIDING_LINE_LENGTH, '-')+"\n";

	cout<<"Compiling Programs..."<<"\n";
	if(
		system("g++ ..\\Data_Generator.cpp -o Data_Generator") ||
		system("g++ ..\\Program.cpp -o Program") ||
		system("g++ ..\\Std.cpp -o Std")
	){
		cout<<"Compile Error. Press any key to close this window and check your programs.\n";
		system("pause >nul");
		return 0;
	}
	cout<<"Compilation Successful. Trying begins.\n";
	for(int i=0; ; i++){
		if(i%NOTICE_FREQUENCY==0){
			cout<<""<<i<<" data sets have been tried.\r";
		}
		system("Data_Generator >..\\Input.txt");
		system("Program <..\\Input.txt >..\\Read.txt");
		system("Std <..\\Input.txt >..\\Expected.txt");
		if(system("fc ..\\Read.txt ..\\Expected.txt >nul")){
			cout<<"\nHack data found:"<<div_line;
			system("type ..\\Input.txt");
			cout<<div_line<<"Your Program Outputs:"<<div_line;
			system("type ..\\Read.txt");
			cout<<div_line<<"The Std Outputs:"<<div_line;
			system("type ..\\Expected.txt");
			cout<<div_line<<"You may close this window to fix the problem, or press any key to continue to try...\n";
			system("pause >nul");
		}
	}
}