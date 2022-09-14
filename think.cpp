#include <iostream>
#include <string>
using namespace std;

const char alilnumchar='0';

int* dims();
int* vchk(int, string, string=",");


int main(){
}

int* vchk(int nargs, string input, string dem){
  int lens[2]{input.length(), dem.length()};
  char ctk;
  int* sai;
  sai=new int[nargs];
  int a[3]{0,0};
  if(input==""){
    sai[0]=-1;
  } else if((dem.length()+1)*nargs>input.length()){
    sai[0]=-2;
  } else if(){
  } else {
    while(a[0]<nargs){
      while(a[1]<input.length()){
        ctk=input.at(a[1]);
        if(ctk>='0'&&ctk<='9'){
          ++a[1];
        } else if
      }
    }
  }
  return sai;
}
