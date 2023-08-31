#include <iostream>
#include <vector>
#include <string>

using namespace std;

// This is a movie class to store movie details
class Movie {
public:
    string title;
    int availableSeats;

    Movie(string _title, int _availableSeats) {
        title = _title;
        availableSeats = _availableSeats;
    }
};

// Function to display available movies
void displayMovies(const vector<Movie>& movies) {
    cout << "Available Movies:\n";
    for (const Movie& movie : movies) {
        cout << movie.title << " (" << movie.availableSeats << " seats available)\n";
    }
}

int main() {
    vector<Movie> movies;
    movies.push_back(Movie("Movie 1: Jawan", 50));
    movies.push_back(Movie("Movie 2: Jailer ", 30));
    movies.push_back(Movie("Movie 3: Haddi", 40));

    cout << "Welcome to the Movie Ticket Booking System!\n";

    while (true) {
        displayMovies(movies);

        int choice;
        cout << "Enter the number of the movie you want to watch (1-" << movies.size() << "), or 0 to exit: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Thank you for using the Movie Ticket Booking System. Goodbye!\n";
            break;
        } else if (choice >= 1 && choice <= movies.size()) {
            Movie& selectedMovie = movies[choice - 1];

            int numTickets;
            cout << "Enter the number of tickets you want to book (1-" << selectedMovie.availableSeats << "): ";
            cin >> numTickets;

            if (numTickets >= 1 && numTickets <= selectedMovie.availableSeats) {
                selectedMovie.availableSeats -= numTickets;
                cout << "Tickets booked successfully for " << selectedMovie.title << " (" << numTickets << " tickets).\n";
            } else {
                cout << "Invalid number of tickets. Please try again.\n";
            }
        } else {
            cout << "Invalid choice. Please select a valid movie number.\n";
        }
    }

    return 0;
}





































































































































