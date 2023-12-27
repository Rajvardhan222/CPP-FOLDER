#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

   ofstream out("example.txt");
   out<<"Test passed";
   out.close();
   ifstream in("C://Users//Admin//Desktop//CPP FOLDER//sem1-cpp//example.txt");
   char ch;  int cnt = 0;
   while(!in.eof()){
	 in>>ch  ;
    cnt++;
   }
   int wordcnt = 0;
   string word;
     while(in>>word ){
	 
    wordcnt++;
   }
      if (!in) {
        cerr << "Error opening the file!" << endl;
        return 1; // return an error code
    }
   in.close();
   cout<<"this file contain this much word "<<wordcnt;
   

}