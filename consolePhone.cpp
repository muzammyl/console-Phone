#include<iostream>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;

clock_t clock() {
    time_t now = time(0);
    char *date = ctime(& now);
    cout << date;
    cout << "==============================" << endl;
}

void contact() {
    int c, counter = 0, s1, e5, e2, found;
    char exit, e6, e7;
    string name[100], num[100], s2, s3, e1, e3, e4, d1;
    do {
        cout << "====================" << endl;
        cout << "1. Add new Contact\n2. List all Contacts\n3. Search for Contact\n4. Edit a Contact\n5. Delete a Contact\n0. Exit" << endl;
        cout << "====================" << endl;
        cout << "Enter choice: ";
        cin >> c;
        if(c == 1) {
            for(int i = 0; i < 100; i++) {
                cout << "Enter contact's name: ";
                cin >> name[i];
                cout << "Enter contact's number: ";
                cin >> num[i];
                counter++;
                cout << "Press any key to add more (press 'e' to exit): ";
                cin >> exit;
                if(exit == 'e') {
                    break;
                }
            }
        }

        else if(c == 2) {
            cout << "Contacts\n====================" << endl;
            cout << "Name" << setw(20) << "Number" << endl;
            cout << "====================" << endl;
            for(int j = 0; j <= counter; j++) {
                cout << name[j] << setw(20) << num[j] << endl;
            }
        }

        else if(c == 3) {
            cout << "Search for contact\n====================" << endl;
            cout << "Press 1 to search with name, press 2 to search with number: ";
            cin >> s1;
            if(s1 == 1) {
                cout << "Enter name of contact: ";
                cin >> s2;
                for(int k = 0; k <= counter; k++) {
                    if(s2 == name[k]) {
                        cout << name[k] << setw(20) << num[k] << endl;
                        break;
                    }
                    else {
                        cout << "Contact not found!";
                    }
                }
            }
            else if(s1 == 2) {
                cout << "Enter number of contact: ";
                cin >> s3;
                for(int l = 0; l <= counter; l++) {
                    if(s3 == num[l]) {
                        cout << name[l] << setw(20) << num[l] << endl;
                        break;
                    }
                    else {
                        cout << "Contact not found!" << endl;
                    }
                }
            }
            else {
                cout << "Invalid choice!";
            }
        }

        else if(c == 4) {
            cout << "Edit contacts\n====================" << endl;
            cout << "Enter name of contact you want to edit: ";
            cin >> e1;
            for(int m = 0; m <= counter; m++) {
                if(e1 == name[m]) {
                    e2 = m;
                    break;
                }
                else {
                    cout << "Contact not found!";
                }
            }
            while(e6 != 'e') {
                cout << "Press 1 to change name & 2 to change number, press 3 to change both: ";
            cin >> e5;
            if(e5 == 1) {
                cout << "Enter new name of contact: ";
                cin >> e3;
                name[e2] = e3;
            }
            else if(e5 == 2) {
                cout << "Enter new number of contact for edit";
                cin >> e4;
                num[e2] = e4;
            }
            else if(e5 == 3) {
                cout << "Enter new name of contact: ";
                cin >> e3;
                name[e2] = e3;
                cout << "Enter new number of contact for edit";
                cin >> e4;
                num[e2] = e4;
            }
            else {
                cout << "Invalid selection!" << endl;
            }
            cout << "Press any key to edit more (press e to exit): ";
            cin >> e6;
            }
            cout << "Edited contacts:\n====================" << endl;
            for(int n = 0; n <= counter; n++) {
                cout << name[n] << setw(20) << num[n] << endl;
            }
        }

        else if(c == 5) {
            cout << "Enter the name of contact you want to delete: ";
            cin >> d1;
            for(int o = 0; o <= counter; o++) {
                if(d1 == name[o]) {
                    for(int p = o; p <= (counter-1); p++) {
                        name[p] = name[p+1];
                        num[p] = num[p+1];
                        found++;
                        o--;
                        counter--;
                    }
                }
            }
            if(found == 0) {
                cout << "Contact didn't found!" << endl;
            }
            else {
                cout << "Contact deleted successfully!" << endl;
            }
            cout << "After deleting contacts:\n====================" << endl;
            for(int q = 0; q <= counter; q++) {
                cout << name[q] << setw(20) << num[q] << endl;
            }
        }

        else {
            cout << "Invalid choice!" << endl;
        }
    } while(c != 0);
}

void phone() {
    string d1;
    cout << "Phone Dialler\n====================" << endl;
    cout << "1\t2\t3\n4\t5\t6\n7\t8\t9\n*\t0\t#" << endl;
    cout << "====================" << endl;
    while(d1 != "q") {
        char d2;
        cout << "Enter number (press q to quit): ";
        cin >> d1;
        if(d1 == "q") {
            break;
        }
        else {
            cout << "Calling..." << endl;
            cout << d1 << endl;
            cout << "Press e to exit call: ";
            cin >> d2;
            if(d2 == 'e') {
                cout << "Declined..." << endl;
            }
        }
    }
}

void message() {
    int m1, counter = 0, r = 0;
    string m2[100], m3[100];
    do {
        cout << "Messages\n====================" << endl;
        cout << "1. Create new message" << endl;
        cout << "2. List all messages" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> m1;
        if(m1 == 0) {
            break;
        }
        else if(m1 == 1) {
                do {
                    cout << "Enter number (press e to exit): ";
                    cin >> m2[r];
                    if (m2[r] != "e") {
                        cout << "Enter message\n>> ";
                        cin >> m3[r];
                        counter++;
                        r++;
                    }
                    else {
                        break;
                    }
                } while(m2[r] != "e");
        }
        else if(m1 == 2) {
            cout << "All messages" << endl;
            for(int s = 0; s < counter; s++) {
                cout << m2[s] << setw(15) << m3[s] << endl;
            }
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    } while(m1 != 0);
}

void calculator() {
    int c1, c2, c3;
    char c4;
    cout << "Calculator\n====================" << endl;
    cout << "1\t2\t3\t%\n4\t5\t6\t/\n7\t8\t9\t*\n.\t0\t-\t+" << endl;
    cout << "====================" << endl;
    do {
        cout << "Press any number to start, press 0 to quit calculator: ";
        cin >> c1;
        if(c1 == 0) {
            break;
        }
        else {
            cout << "Enter first number: ";
            cin >> c2;
            cout << "Enter second number: ";
            cin >> c3;
            cout << "Enter operator(+,-,/,*,%): ";
            cin >> c4;
            switch(c4) {
                case '-': {
                    cout << c2 << " " << c4 << " " << c3 << " = " << (c2 - c3) << endl;
                    break;
                }
                case '+': {
                    cout << c2 << " " << c4 << " " << c3 << " = " << (c2 + c3) << endl;
                    break;
                }
                case '/': {
                    cout << c2 << " " << c4 << " " << c3 << " = " << (c2 / c3) << endl;
                    break;
                }
                case '*': {
                    cout << c2 << " " << c4 << " " << c3 << " = " << (c2 * c3) << endl;
                    break;
                }
                case '%': {
                    cout << c2 << " " << c4 << " " << c3 << " = " << (c2 % c3) << endl;
                    break;
                }
                default: {
                    cout << "Invalid operator";
                }
            }
        }
    } while(c1 != 0);
}

void notes() {
    int n1, n3 = 0, counter, n4;
    string n2[100];
    cout << "NotePad\n====================" << endl;
    do {
        cout << "1. Add notes\n2. List notes\n0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> n4;
        switch(n4) {
            case 1: {
                do {
                cout << "Press any number to add notes, press 0 to quit: ";
                cin >> n1;
                if(n1 == 0) {
                    break;
                }
                else {
                    cout << "Add a note\n>> ";
                    cin >> n2[n3];
                    n3++;
                    counter++;
                }
                } while(n1 != 0);
                break;
            }
            case 2: {
                cout << "List notes\n====================" << endl;
                for(int r = 0; r <= counter; r++) {
                    cout << n2[r] << endl << endl;
                }
                break;
            }
            case 0: {
                break;
            }
        }
    } while(n4 != 0);
}

void games() {
    int g1, g2, g3, g4, g5;
    do {
        cout << "Games\n====================" << endl;
        cout << "1. Guessing number\n2. Maths answers\n0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> g1;
        if(g1 == 1) {
            cout << "Guessing number\n====================" << endl;
            do {
                cout << "Press any number to start (press 0 to quit): ";
                cin >> g2;
                if(g2 == 0) {
                    break;
                }
                else {
                    g3 = rand() % 100;
                    cout << "HINT: The number is between " << g3-3 << " & " << g3+3 << endl;
                    cout << "Enter your guess: ";
                    cin >> g4;
                    if(g4 == g3) {
                        cout << "Right answer!" << endl;
                    }
                    else {
                        cout << "Wrong answer! The answer is " << g3 << endl;
                    }
                }
            } while(g2 != 0);
        }
        else if(g1 == 2) {
            cout << "Maths answers\n====================" << endl;
            do {
                cout << "Press any number to start (Press 0 to quit): ";
                cin >> g2;
                if(g2 == 0) {
                    break;
                }
                else {
                    g3 = rand() % 20;
                    g4 = rand() % 14;
                    cout << "What is " << g3 << " + " << g4 << " = ";
                    cin >> g5;
                    if(g5 == (g3+g4)) {
                        cout << "Right answer!" << endl;
                    }
                    else {
                        cout << "Wrong answer! The answer is " << g3+g4 << endl;
                    }
                }
            } while(g2 != 0);
        }
        else {
            cout << "Exiting..." << endl;
        }
    } while(g1 != 0);
}

main() {
    int ch;
    do {
        cout << setw(20) << "Console Phone" << endl;
        cout << "==============================" << endl;
        clock();
        cout << setw(20) << "Main Menu" << endl;
        cout << "==============================" << endl;
        cout << "1. Phone\t2. Contacts\t3. Messages\n4. Calculator\t5. Notes\t6. Games\n\t\t0. Shutdown" << endl;
        cout << "\nEnter choice: ";
        cin >> ch;
        switch(ch) {
            case 1: {
                phone();
                system("clear");
                break;
            }
            case 2: {
                contact();
                system("clear");
                break;
            }
            case 3: {
                message();
                system("clear");
                break;
            }
            case 4: {
                calculator();
                system("clear");
                break;
            }
            case 5: {
                notes();
                system("clear");
                break;
            }
            case 6: {
                games();
                system("clear");
                break;
            }
            default: {
                cout << "Exiting..." << endl;
                system("clear");
            }
        }
        if(ch == 0) {
            cout << "Shutting down..." << endl;
            break;
        }
    } while(ch != 0);
}