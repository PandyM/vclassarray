#include <iostream>
#include "vclassarray.h"
using namespace std;

int main()
 {
 int aray[10];

for(int i=0;i<10;i++){
 cout<<"masukkan data aray["<<i+1<<"] : ";
 cin>>aray[i];
 }
 cout<<endl;

for(int i=0;i<10;i++){
 cout<<"isi data aray["<<i+1<<"] : ";
 cout<<aray[i]<<endl;
 }

return 0;
 }
