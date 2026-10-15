#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile("GameData.txt");
    string playerName = " ";
    if (myFile.is_open())
    {
        // myFile << "Hello, World!" << endl;
        // for(int i = 0; i < 10; i++)
        //     myFile << "Line " << i + 1 << endl;
        cout << "Enter player name: ";
        cin >> playerName;

        myFile << "Player Name: "  << endl;
        myFile << playerName << endl;
        myFile << "Score: "  << endl;
        myFile  << 0 << endl;
    }
    myFile.close();

    ifstream myFileRead("GameData.txt");
    string line;
    string playerNameFromFile;
    string scoreFromFile;
    int renglon = 0;

    if(myFileRead.is_open()){

        getline(myFileRead, line);
        while(getline(myFileRead, line)){
            cout << line << endl; // pinta la linea de cada oracion hasta que encuentre un ;

            renglon++;

            if(renglon == 1)
                playerNameFromFile = line;
            else if(renglon == 3)
                scoreFromFile = line;

        }
    }
    else
    {
        cout << "Failed to open file." << endl;
    }

    cout << "Welcome to the adventure, " << playerNameFromFile << endl;
    cout << "Score from file: " << scoreFromFile << endl;

    return 0;
}
