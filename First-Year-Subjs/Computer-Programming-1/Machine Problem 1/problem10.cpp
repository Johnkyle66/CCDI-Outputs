/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 10 */

/* A movie in a local theater is in great demand. To help a local
charity, the theater owner has decided to donate a portion of the gross
amount generated from the movie to the charity. This example designs
and implements a program that prompts the user to input the movie
name, adult ticket price, child ticket price, number of adult tickets sold,
number of child tickets sold, and percentage of the gross amount to be
donated to the charity. The output of the program is as follows:

** The input to the program consists of the movie name, adult ticket
price, child ticket price, number of adult tickets sold, number of child
tickets sold and percentage of the gross amount to be donated to the
charity. */

#include<iostream>
#include<string>

using namespace std;

int main(){
    // variables
    string movie_name;
    float price_adult_tckt;
    float price_child_tckt;
    int sold_adult_tckt;
    int sold_child_tckt;
    float donation;

    cout << "/* Problem Number 10 */\n" << endl;

    // get user input
    cout << "Enter the movie name: ";
    getline(cin, movie_name);
    cout << "Enter the price of an adult ticket: ";
    cin >> price_adult_tckt;
    cout << "Enter the price of a child ticket: ";
    cin >> price_child_tckt;
    cout << "Enter the number of adult tickets sold: ";
    cin >> sold_adult_tckt;
    cout << "Enter the number of child tickets sold: ";
    cin >> sold_child_tckt;
    cout << "Enter the percentage of donation: ";
    cin >> donation;

    // computation
    float gross_amount = (price_child_tckt * sold_child_tckt) + (price_adult_tckt * sold_adult_tckt);
    donation = gross_amount / donation;

    // output
    cout << "\nMovie Name\t\t: " << movie_name << endl;
    cout << "Number of ticket sold\t: " << sold_adult_tckt + sold_child_tckt << endl;
    cout << "Gross amount\t\t: " << gross_amount << endl;
    cout << "Amount donated\t\t: " << donation << endl;
    cout << "Net Sale\t\t: " << gross_amount - donation << endl;

    cout << "\n-- Press Enter to close --";
    cin.ignore();
    cin.get();

    return 0;
}