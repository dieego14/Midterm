// Programmer: Diego
//
// Purpose: Create a program that calculates the gross and 
//          net box office revenue for a night
//
// Start
//
//      Input: Prompt user to enter the name of movie
//             Wait for user to enter the name of the movie
//             Prompt user to enter the number of adult tickets sold
//             Wait for user to enter the number of adult tickets sold
//             Prompt user to enter the number of child tickets sold
//             Wait for user to enter the number of child tickets sold
//
//      Programming: 
//             
//
//      Output: Display the name of the movie input by the user, the number of adult & child tickets sold,
//              gross box office revenue, amount paid to distributer, and net box office revenue 
//
// Stop

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    const double ADULT_TICKET_PRICE = 10.00;
    int adultTicketsSold;
    const double CHILD_TICKET_PRICE = 6.00;
    int childTicketsSold;
    string movieName;




    cout << "Enter movie name: ";
    getline(cin,movieName);
    cout << "Adult ticket sales: ";
    cin >> adultTicketsSold;
    cout <<"Child ticket sales: ";
    cin >> childTicketsSold;
    cout <<endl<<endl;
    
    cout << "------------------------------------------";

    cout<<"Movie name: ";
    cout<<"Adult Tickets Sold";







}