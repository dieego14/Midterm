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
//      Programming: grossBoxOffice = (adultTicketsSold * ADULT_TICKET_PRICE) +
//                   (childTicketsSold * CHILD_TICKET_PRICE);
//                   amountPaidToDistributer = (grossBoxOffice * DISTRIBUTER_CUT);
//                   netBoxOffice = (grossBoxOffice * MOVIE_THEATER_CUT);
//
//
//
//      Output: Display the name of the movie input by the user, the number of
//              adult & child tickets sold, gross box office revenue,
//              amount paid to distributer, and net box office revenue
//
// Stop

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    const double DISTRIBUTER_CUT = 0.20;
    const double MOVIE_THEATER_CUT = 0.80;
    int adultTicketsSold;
    int childTicketsSold;
    double grossBoxOffice;
    double amountPaidToDistributer;
    double netBoxOffice;
    string movieName;

    cout << "Enter movie name: ";
    getline(cin, movieName);
    cout << "Adult ticket sales: ";
    cin >> adultTicketsSold;
    cout << "Child ticket sales: ";
    cin >> childTicketsSold;
    cout << endl;
    cout << "-------------------------------------------------------\n";

    grossBoxOffice = (adultTicketsSold * ADULT_TICKET_PRICE) + (childTicketsSold * CHILD_TICKET_PRICE);
    amountPaidToDistributer = (grossBoxOffice * DISTRIBUTER_CUT);
    netBoxOffice = (grossBoxOffice * MOVIE_THEATER_CUT);

    cout << fixed << setprecision(2);
    cout << "Movie name:" << right << setw(21) << "\"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold:" << right << setw(12) << " " << left << setw(16) << adultTicketsSold << endl;
    cout << "Child Tickets Sold:" << right << setw(12) << " " << left << setw(6) << childTicketsSold << endl;
    cout << "Gross Box Office Revenue:" << right << setw(8) << "$ " << left << setw(8) << grossBoxOffice << endl;
    cout << "Amount Paid to Distributer:" << right << setw(6) << "-$ " << setw(7) << amountPaidToDistributer << endl;
    cout << "Net Box Office Revenue:" << right << setw(10) << "$ " << left << setw(8) << netBoxOffice << endl;

    return 0;
}