/*Q116
Write a program to Create inventory management system.*/

#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product item[100];
    int n = 0, choice, id;
    bool found;

    while (true) {
        cout << "\n====== INVENTORY MANAGEMENT SYSTEM ======\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Product ID: ";
            cin >> item[n].id;

            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, item[n].name);

            cout << "Enter Quantity: ";
            cin >> item[n].quantity;

            cout << "Enter Price: ";
            cin >> item[n].price;

            n++;
            cout << "Product Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No Products Available!\n";
                break;
            }

            cout << "\nID\tName\t\tQuantity\tPrice\n";
            cout << "---------------------------------------------\n";

            for (int i = 0; i < n; i++) {
                cout << item[i].id << "\t"
                     << item[i].name << "\t\t"
                     << item[i].quantity << "\t\t"
                     << item[i].price << endl;
            }
            break;

        case 3:
            if (n == 0) {
                cout << "No Products Available!\n";
                break;
            }

            cout << "Enter Product ID to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (item[i].id == id) {
                    cout << "\nProduct Found\n";
                    cout << "ID : " << item[i].id << endl;
                    cout << "Name : " << item[i].name << endl;
                    cout << "Quantity : " << item[i].quantity << endl;
                    cout << "Price : " << item[i].price << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found!\n";

            break;

        case 4:
            if (n == 0) {
                cout << "No Products Available!\n";
                break;
            }

            cout << "Enter Product ID: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (item[i].id == id) {
                    cout << "Enter New Quantity: ";
                    cin >> item[i].quantity;

                    cout << "Quantity Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found!\n";

            break;

        case 5:
            cout << "Exiting Program...\n";
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }

    return 0;
}