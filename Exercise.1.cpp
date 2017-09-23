//First Exercise
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    long nodeA;
    long nodeB;

    int lines_count;
    string line;

    ifstream matrix_file("matrix.txt");

  if(matrix_file.is_open())
  {


      while (getline(matrix_file,line)){
          ++lines_count;

          matrix_file>>nodeA;
          matrix_file>>nodeB;

          cout << "Value of Node A: "<< nodeA << '\n';
          cout << "Value of Node B: "<< nodeB << '\n';
      }

        cout << "Number of lines: " << lines_count << " \n";

    matrix_file.close();
  }
    else
    {
      std::cout << "File could not be opened" << '\n';
    }
    return  0;
}
