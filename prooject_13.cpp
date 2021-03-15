#include <iostream>
#include <fstream>
using namespace std;

         

int main()
{
    ofstream file_out("111.pxt");
    file_out << "hello wold!" << endl;
    file_out.close();

    char buf[50];
    ifstream file_in("111.txt");
    file_in.getline (buf,50,';');
    cout << buf << endl;
}
