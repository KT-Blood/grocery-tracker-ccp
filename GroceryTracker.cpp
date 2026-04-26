#include <iostream>
#include <fstream> //read input file and creates backup file
#include <string> 
#include <map> 
using namespace std;


class GroceryTracker {       //Class for tracking grocery items. 


private:
    map<string, int> itemFrequency;     //Stores product name and frequency together.          

public:
    void LoadFile(const string& fileName); //stores product name and frequency in map.

    void CreateBackupFile(const string& fileName);    //creates frequency.dat  

    int GetItemFrequency(const string& itemName); //Menu Option 1: search one product

    void PrintAllFrequencies();         //Menu Option 2:Print all product and frequency
    void PrintHistogram();              //Menu Option3: Print histogram

    

};

//Function to open file
void GroceryTracker::LoadFile(const string& fileName) {        
    ifstream inFile;
    inFile.open(fileName);

    //check to see if file opened
    if (!inFile.is_open()) {                                
        cout << "Error opening file" << endl;
        return;
    }

    string item;

    //loop to read each item in the file
    while (inFile >> item) {  
        itemFrequency[item]++;

    }

    //close file
    inFile.close(); //close file
}

//Function for Option 1: Search One Item Frequency
int GroceryTracker::GetItemFrequency(const string& itemName) {

    //loop to check for item and return if found
    if (itemFrequency.find(itemName) != itemFrequency.end()) {
        return itemFrequency[itemName];
    }
    return 0;
    
}

//Function for Option 3: Print Histogram
void GroceryTracker::PrintHistogram() {

    //Loop that prints item and takes frequence and adds '*'
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " "; //prints item

        for (int i = 0; i < pair.second; i++) { //prints '*' for frequency
            cout << "*";
        }
        cout << endl;


    }
}


void GroceryTracker::PrintAllFrequencies() {
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}

//create out file
void GroceryTracker::CreateBackupFile(const string& fileName) {
    ofstream outFile;
    outFile.open(fileName);

    //check if outfile opens
    if (!outFile.is_open()) {
        cout << "Error creating file." << endl;
        return;
    }
    //write to outfile
    for (const auto& pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << endl;
    }

    //close file
    outFile.close();
}

int main() {

    GroceryTracker tracker;
    
    //Load data from input file
    tracker.LoadFile("CS210_Project_Three_Input_File.txt");

    //Create backup file automatically
    tracker.CreateBackupFile("frequency.dat");

    int userChoice = 0; 

    //Menu Loop
    while (userChoice != 4) {  //print menu options
        cout << "\n===== Grocery Tracker Menu=====" << endl;
        cout << "1.Search for an item" << endl;
        cout << "2.Print all item frequencies" << endl;
        cout << "3.Print histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: "; //Get user choice

        cin >> userChoice;

        //Option 1: Search for item
        if (userChoice == 1) {
            string itemName;

            cout << "Enter item name (case-senstive): ";
            cin >> itemName;

            int frequency = tracker.GetItemFrequency(itemName);

            cout << itemName << " was purchased " << frequency << " times." << endl;
        }

        //Option 2: Print all frequencies
        else if (userChoice == 2) {
            tracker.PrintAllFrequencies();
        }

        //Option 3: Print Histogram
        else if (userChoice == 3) {
            tracker.PrintHistogram();
        }
        
        //Option 4: Exit
        else if (userChoice == 4) {
            cout << "Exiting program." << endl;
        }

        //Invalid Input
        else {
            cout << "Invalid menu option. Please try again." << endl;
        }
    }

    return 0;
}