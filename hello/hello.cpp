#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ofstream ofs("output.txt", ios::out);
  ofs << "TEST\n";
  ofs << "TEST\n";
  ofs.close();
  
  
  return 0;
}
