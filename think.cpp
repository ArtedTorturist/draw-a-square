#include <iostream>
#include <string>
using namespace std;

int* dims();
int* vchk(int, string, string=",");


int main(){
}

int* vchk(int nargs, string input, string dem){
  int loss[2];
  char ctk;
  int* sai;
  sai=new int[nargs];
  int a[3]{0,0};
  int dc=0;
  if(input==""){
    sai[0]=-1;
  } else if((loss[1]+1)*nargs>loss[0]){
    sai[0]=-2;
  } else if(dem.at(0)>='0'&&dem.at(0)<='9'){
  } else {
    while(a[0]<nargs){
      while(a[1]<loss[0]){
        ctk=input.at(a[1]);
        if(ctk>='0'&&ctk<='9'){
          ++a[1];
          ++dc;
        } else if(loss[1]>a[1]-dc&&ctk==dem.at(a[1]-dc)){
          if(a[1]-dc==loss[1]){
             dc=0;
           {
        }
      }
    }
  }
  return sai;
}
