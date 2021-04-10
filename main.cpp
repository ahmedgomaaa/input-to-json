#include <iostream>
#include <fstream>
using namespace std;
string aa;
int ctr=0, cnt=0, uni=0;
string third() {
string holder;
string line;

  ifstream myfile("input.txt");
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      if (cnt == ctr && cnt==0 ) {
        aa = aa + "[ \"" + line + "\" "  ;
        ctr++;}
         else if (cnt == ctr ) {
      aa = aa +" , \"" + line + "\" "  ;
        ctr++;

      }

      else {
        cnt++;
        continue;
      }
      ctr = ctr + uni;
      break;
    }}
    return aa;}

int main()
{

do {
 third();
 uni++; //ctr=  ctr + 2;
}
while (ctr != cnt) ;
aa = aa + "] ";
cout << aa;
ofstream output("output.txt");
output<< aa;

  return 0;
}
