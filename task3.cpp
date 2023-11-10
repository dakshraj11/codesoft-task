#include <iostream>
#include <iomanip>

using namespace std;
//***************************  booking Movie ticket ********************************       

void displayMovies() {
    cout << "Movies   List="<<endl;
    cout << "1. hero"<<endl;
    cout << "2. 2012 movies"<<endl;
    cout << "3. jumanji"<<endl;
    cout << "4. Spider-Man: Far From Home"<<endl;
    cout << "5. baby"<<endl;
}

int main() {
    const int PRICE_PER_TICKET = 10;  
    int choice, numTickets;

    
    displayMovies();

    
    cout << "Enter the number corresponding to the movie you want to watch= ";
    cin >> choice;

   
    if (choice < 1 || choice > 5) {
        cout << "Invalid choice. Please select a valid movie"<<endl;
        return 1;  
    }

    
    cout << "Enter the number of tickets: ";
    cin >> numTickets;

   
    if (numTickets <= 0) {
        cout << "Invalid number of tickets. Please enter a positive number"<<endl;
        return 1;
    }

  
    int totalCost = PRICE_PER_TICKET * numTickets;

 
    cout << "\nBooking Details:"<<endl;
    cout << "Movie: ";
    switch (choice) {
        case 1:
            cout << " hero"<<endl;
            break;
        case 2:
            cout << " 2012 movies"<<endl;
            break;
        case 3:
            cout << " jumanji"<<endl;
            break;
        case 4:
            cout << "Spider-Man: Far From Home"<<endl;
            break;
        case 5:
            cout << "baby"<<endl;
            break;
    }
    cout << "Number of Tickets: " << numTickets <<endl;
    cout << "Total Cost: $" << totalCost <<endl;

    return 0;
}
