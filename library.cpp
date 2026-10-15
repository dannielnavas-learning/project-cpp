#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile("example.txt");
    if(myFile.is_open())
    {
        myFile << "Hello, World!" << endl;
        for(int i = 0; i < 10; i++)
            myFile << "Line " << i + 1 << endl;
    }
    myFile.close();
    return 0;
}
