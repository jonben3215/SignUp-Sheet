#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    ofstream oFile;
    string input;
    string last;
    string first;
    int num_student = 0 ;
    oFile.open("name1.txt", ios::app); // create file
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds
    while(true)
    {
        system("clear");
        cout << endl;
        cout << "\033[32;5m" << "▮" << flush;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\033[0m" << "▮ ";
        cout << "PRESS Y AND ENTER WHEN YOU ARE READY: ";
        cin >> input;

        while(input != "y" && input != "Y")
        {   cout << "\033[31;5m" << "▮" << flush;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "INVALID INPUT" << endl;
            cout << "\033[32;5m" << "▮" << flush;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "\033[0m" << "▮ ";
            cout << "PRESS Y AND ENTER WHEN YOU ARE READY: ";
            cin >> input;
        }

        cout << "\033[32;5m" << "▮" << flush;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\033[0m" << "▮ ";
        cout << "\033[33m" << "\u{26A0}" << " NOTE:" << "\033[0m"<< " DO NOT PASS THE LAPTOP UNTIL PROMPTED TO." << endl;
        sleep_for(seconds(3));
        sleep_until(system_clock::now() + seconds(2));

        cout << "\033[32;5m" << "▮" << flush;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\033[0m" << "▮ ";
        cout << "\033[0m"<< " PLEASE WAIT! PROGRAM IS STARTING UP . . ." << endl;
        sleep_for(seconds(5));
        sleep_until(system_clock::now() + seconds(2));

        cout << "\033[32;5m" << "▮" << flush;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\033[0m" << "▮ ";
        cout << "\033[33m" << "\u{26A0}" << " NOTE:" << "\033[0m " << "PLEASE FOLLOW THE FOLLOWING PROMPT: " << endl;
        
        cout << "\033[32;5m" << "▮" << flush;
        this_thread::sleep_for(chrono::seconds(3));
        cout << "\033[0m" << "▮ ";
        cout << "\033[31m" << "\u{26A0}" << " READ CAREFULLY:" << "\033[0m" << " ENTER FIRST AND LAST WITH A SPACE IN BETWEEN. FOR EXMAPLE: JOHN DOE" << endl;
        this_thread::sleep_for(chrono::seconds(1));
       cout << "\033[32;5m" << "▮" << flush;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\033[0m" << "▮ ";
        cout << "\033[32m" << "\u{26A0}" << " BEGIN TYPING:" << "\033[0m " << "TYPE YOUR NAME HERE: ";
      
        cin >> first;
        cin >> last;
        oFile << last << "," << first << endl;
        
        oFile.flush();
        cout << endl;
        cout << "\u{1F44D} "<< first << " " <<  last << " HAS BEEN RECORDED." << endl;
        cout << "PLEASE PASS THE LAPTOP ON TO THE NEXT PERSON OR RETURN IT TO ME!" << endl;
        num_student++;
        sleep_for(seconds(7));
        sleep_until(system_clock::now() + seconds(1));
    }
    return 0;
}