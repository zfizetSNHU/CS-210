#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

// Function to load items and frequency of items from the input file

void loadItems(map<string, int>& items, const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) { // error checking for file
        cerr << "Error opening file: " << filename << endl;
        return;
    }
    string item;
    while (file >> item) {
        // increments the count of the item in the map
        items[item]++;
    }
    file.close();
}

// Function to write the frequency data onto a backup file
void writeBackupFile(const map<string, int>& items, const string& backupFilename) {
    ofstream backupFile(backupFilename);
    if (!backupFile.is_open()) {
        cerr << "Error opening file: " << backupFilename << endl;
        return;
    }
    for (const auto& pair : items) {
        // writes each item and its frequency to a backup file
        backupFile << pair.first << " " << pair.second << endl;
    }
    backupFile.close();
}

// Menu Option 1, finds the frequency of a specific item
void findItemFrequency(const map<string, int>& items) {
    string item;
    cout << "Enter the item to search for: ";
    cin >> item;

    auto it = items.find(item);
    if (it != items.end()) {
        cout << item << " appears " << it->second << " times." << endl;
    }
    else {
        cout << item << " does not appear in the records." << endl;
    }
}

// Menu Option 2, prints all items and all of their frequencies
void printAllFrequencies(const map<string, int>& items) {
    cout << setw(15) << left << "Item" << "Frequency" << endl;
    cout << "----------------------" << endl;
    for (const auto& pair : items) {
        cout << setw(15) << left << pair.first << pair.second << endl;
    }
}

// Menu Option 3, prints a histogram of items
void printHistogram(const map<string, int>& items) {
    cout << setw(15) << left << "Item" << "Histogram" << endl;
    cout << "----------------------" << endl;
    for (const auto& pair : items) {
        // prints the item name
        cout << setw(15) << left << pair.first;
        // prints * to represent the amount of times the item shows up
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}


// main function of program

int main() {
    map<string, int> items;
    string inputFilename = "C:\\Users\\fizzy\\Desktop\\CS210_Project_Three_Input_File.txt"; // input file location
    string backupFilename = "C:\\Users\\fizzy\\Desktop\\frequency.dat"; // output file

    // loads the items and their frequencies from the input file
    loadItems(items, inputFilename);

    // Write the backup file
    writeBackupFile(items, backupFilename);

    int choice;

    do {
        // displays the menu
        cout << "\nMenu Options:\n";
        cout << "1. Find the frequency of a specific item\n";
        cout << "2. Print all items and their frequencies\n";
        cout << "3. Print a histogram of items\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        if (cin.fail()) { // checks for invalid input
            cin.clear(); // clears the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            continue; // Restart the loop
        }

        switch (choice) {
        case 1:
            // finds the frequency of an item
            findItemFrequency(items);
            break;
        case 2:
            // prints all items and their frequencies
            printAllFrequencies(items);
            break;
        case 3:
            // prints the histogram of the items
            printHistogram(items);
            break;
        case 4:
            // exits the program
            cout << "Exiting program..." << endl;
            break;
        default:
            // error handling
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

    } while (choice != 4); // Loop until the user exits the program

    return 0;
}
