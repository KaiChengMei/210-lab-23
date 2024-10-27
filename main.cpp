#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu() {
    int choice;

    while(true) {
        // Menu
        cout << "*** GOAT MANAGER 3001 ***" << endl ;
        cout << "[1] Add a goat" << endl ;
        cout << "[2] Delete a goat" << endl ;
        cout << "[3] List goats" << endl ;
        cout << "4] Quit" << endl ;
        cout << "Choice --> " << endl ;
        cin >> choice;

        if (choice! || choice < 1 || choice > 4 ) {
            cout << "Invalid choice. Enter number 1-4" << endl ;
        }
        else {
            break;
        }
    }
}

int main() {
    srand(time(0));
    bool again;
    int choice;
    bool run = true;
    while (run) {
        choice = main_menu();
    }

    switch (choice)
    {
        case 1:
            cout << "Adding goat......." << endl ;
            break;
        case 2:
            cout << "deleting goat......." << endl ;
            break;
        case 3:
            cout << "listing goat......." << endl ;
            break;
        case 4:
            cout << "bye bye......." << endl ;
            run = false;
            break;
    } 


    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();




    return 0;
}

