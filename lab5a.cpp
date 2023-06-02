#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream my_file;
	my_file.open("new_out.txt", ios::out);
	
    for (int i = 0; i < 200000; i++)
    {
        int random = rand();
        my_file<<random; 
    }
    my_file.close();
	return 0;
}