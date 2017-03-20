#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){

ofstream myfile;

myfile.open("yangming1.txt");//it can create a file
myfile<<"hello fudan \n";
myfile<<"hope me"<<30;
myfile.close();



return 0;
}







