#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int Choice;
bool cleasChoice = false;

void BookingMovieTicket();
void ScheduleMovie(string movie_id, string movie_name);
void CinemaSeats(string schedule_id, string movie_name);
void ResultTicket(string schedule[1][5], int seat, string movie_name, string cinema);

void ManageMovieShowTime();

void ManageMovie();
void AddMovie();
void ShowMovie();

void ManageCinema();
void AddCinema();
void ShowCinema();

void ManageSchedule();
void AddSchedule();
void DeleteSchedule();
void ShowSchedule();

void ManageTicket();
void ShowTicket();
void DeleteTicket();

void set_movie(string movie_id, string movie_name);
void get_movie(string arr[][2], int &record);

void set_cinema(string cinema_id, string cinema_name, string seat);
void get_cinema(string arr[][3], int &record);

void set_schedule(string schedule_id, string movie_id, string date, string s_time, string cinema_id);
void get_schedule(string arr[][5], int &record);

void set_ticket(string ticket_id, string schedule_id, string seat, string price);
void get_ticket(string arr[][4], int &record);

void delete_record(string id, string fn);

string short_month(int n)
{
    string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return month[n - 1];
}

string Format_date(string date)
{
    string format;
    string new_date[3];
    int index = 0;
    for (int i = 0; i < date.length(); i++)
    {
        if (date[i] != '/')
        {
            new_date[index] += date[i];
        }
        else
        {
            index++;
        }
    }
    int month = stoi(new_date[1]);
    format += new_date[0] + " " + short_month(month) + " " + new_date[2];
    return format;
}

int main()
{
    do
    {
        cleasChoice = false;
        cout << "-------------------------" << endl;
        cout << "Movie Ticket" << endl;
        cout << "-------------------------" << endl;
        cout << "* Select Menu" << endl;
        cout << " 1. Manage Movie Showtime" << endl;
        cout << " 2. Booking Movie Ticket" << endl;
        cout << " 0. Exit Program" << endl;
        cout << "Please Input : ";
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            ManageMovieShowTime();
            break;

        case 2:
            BookingMovieTicket();
            break;
        
        default:
            if (Choice != 0)
            {
                cout << "Error!! Not in Choice" << endl;
            }
            else
            {
                cout << "--- Exit Program ---" << endl;
            }
            break;
        }

    } while (Choice != 0);
    Choice = 999;
}

// Booking Movie Ticket
void BookingMovieTicket()
{
    string m_arr[100][2] = {};
    int record = 0;
    get_movie(m_arr, record);
    do
    {
        cout << "-------------------------" << endl;
        cout << "Booking Movie Ticket" << endl;
        cout << "-------------------------" << endl;
        cout << "* List Movie" << endl;
        for (int i = 0; i < record; i++) {
            cout << i + 1 << ". " << m_arr[i][1] << endl;
        }
        cout << "0. Back" << endl;
        cout << "Please Input : ";
        cin >> Choice;

        if (Choice != 0)
        {
            ScheduleMovie(m_arr[Choice - 1][0], m_arr[Choice - 1][1]);
        }
        

    } while (Choice != 0 && !cleasChoice);  
    Choice = 999;
}

void ScheduleMovie(string movie_id, string movie_name)
{
    string s_arr[100][5] = {};
    string c_arr[100][3] = {};
    string arr_schedule_id[] = {};
    int record = 0;
    int c_record = 0;
    get_schedule(s_arr, record);
    get_cinema(c_arr, c_record);
    do
    {
        cout << "-------------------------" << endl;
        cout << "Schedule of "<< movie_name << endl;
        cout << "-------------------------" << endl;
        cout << "* List Schedule" << endl;
        for (int i = 0; i < record; i++) {
            if (s_arr[i][1].compare(movie_id) == 0) {
                // get cinema name by s_arr[i][4] (cinema id)
                string cinema_name;
                for (int j = 0; j < c_record; j++) {
                    if (c_arr[j][0].compare(s_arr[i][4]) == 0) {
                        cinema_name = c_arr[j][1];
                    }
                }
                arr_schedule_id[i] = s_arr[i][0];
                cout << i + 1 << ". Date : " << Format_date(s_arr[i][2]) << " | Time : " <<  s_arr[i][3] << " | Cinema : " << cinema_name << endl;
            }
        }
        cout << " 0. Back" << endl;
        cout << "Please Input : ";
        cin >> Choice;

        if (Choice != 0)
        {
            CinemaSeats(arr_schedule_id[Choice - 1], movie_name);
        }
        
    } while (Choice != 0 && !cleasChoice);  
    Choice = 999;
}

void CinemaSeats(string schedule_id, string movie_name)
{
    string c_arr[100][3] = {};
    string s_arr[100][5] = {};
    string t_arr[100][4] = {};
    string schedule[1][5] = {};
    string cinema_name;
    int seat_ticket[100] = {};
    int c_seat = 0;
    int c_record = 0;
    int s_record = 0;
    int t_record = 0;
    get_cinema(c_arr, c_record);
    get_schedule(s_arr, s_record);
    get_ticket(t_arr, t_record);

    // loop data schedule
    for (int i = 0; i < s_record; i++) {
        if (s_arr[i][0].compare(schedule_id) == 0) {
            for (int j = 0; j < 5; j++) {
                schedule[0][j] = s_arr[i][j];
            }
        }
    }
    // loop data cinema 
    for (int i = 0; i < c_record; i++) {
        if (c_arr[i][0].compare(schedule[0][4]) == 0) {
            c_seat = stoi(c_arr[i][2]);
            cinema_name = c_arr[i][1];
        }
    }
    // loop seat ticket
    int index = 0;
    cout << "t_record : " << t_record << endl;
    for (int i = 0; i < t_record; i++) {
        if (t_arr[i][1].compare(schedule_id) == 0) {
            seat_ticket[index] = stoi(t_arr[i][2]);
            index++;
        }
    }

    do
    {
        cout << "-------------------------" << endl;
        cout << "Cinema : " << cinema_name << endl;
        cout << "-------------------------" << endl;
        cout << "* List Seats\t\t\t\tPrice" << endl;
        for (int i = 1; i <= c_seat; i++) {
            bool ismath = false;
            for (int j = 0; j < index; j++) {
                if (i == seat_ticket[j]) {
                    ismath = true;
                }
            }
            if (ismath) {
                if (i % 5 == 0 && i != 2) {
                    cout << " \t" << (i == 5 || i == 10 ? "100" : i == 15 || i == 20 ? "150" : i == 25 || i == 30 ? "200" : "") << endl;
                } else {
                    cout << " " << "\t";
                }
            } else {
                if (i % 5 == 0 && i != 2) {
                    cout << i  << "\t"<< (i == 5 || i == 10 ? "100" : i == 15 || i == 20 ? "150" : i == 25 || i == 30 ? "200" : "") << endl;
                } else {
                    cout << i << "\t";
                }
            }
        }
        cout << "0. Back" << endl;
        cout << "Please Input : ";
        cin >> Choice;
        bool ismath = false;
        for (int j = 0; j < index; j++) {
            if (Choice == seat_ticket[j]) {
                ismath = true;
            }
        }
        if (!ismath && Choice != 0)
        {
            ResultTicket(schedule, Choice, movie_name, cinema_name);
        } else {
            cout << "Seat is not available\n";
        }
        
    } while (Choice != 0 && !cleasChoice);  
    Choice = 999;
}

void ResultTicket(string schedule[1][5], int seat, string movie_name, string cinema_name)
{
    string t_arr[100][4] = {};
    int record = 0;
    get_ticket(t_arr, record);
    int option = 0;
    int price = (seat >= 1 || seat <= 10 ? 100 : seat >= 11 || seat <= 20 ? 150 : seat >= 21 || seat <= 30 ? 200 : 0);
    cout << "-------------------------" << endl;
    cout << "Result Ticket" << endl;
    cout << "-------------------------" << endl;
    cout << "Ticket ID : \t "<< schedule[0][0] << endl;
    cout << "Movie : \t " << movie_name << endl;
    cout << "Date : \t\t " << Format_date(schedule[0][2]) << endl;
    cout << "Time : \t\t "<< schedule[0][3] << endl;
    cout << "Cinema : \t " << cinema_name << endl;
    cout << "Seat : \t\t " << seat << endl;
    cout << "Price : \t " << price << endl;
    cout << "-------------------\n";
    cout << "confirm Payment\n";
    cout << "1. Confirm\n2. Cancel\n";
    do {
        cout << "Enter Options : ";
        cin >> option;
    } while (option > 2 || option == 0);

    string ticket_id = "t" + to_string(record += 1);
    switch (option)
    {
    case 1:
        set_ticket(ticket_id, schedule[0][0], to_string(seat), to_string(price));
        break;
    case 2:
        cout << "Cancel\n";
        break;
    default:
        break;
    }

    cleasChoice = true;
}

// Manage Movie ShowTime
void ManageMovieShowTime()
{
    do
    {
        cout << "-------------------------" << endl;
        cout << "Manage Movie ShowTime" << endl;
        cout << "-------------------------" << endl;
        cout << " 1. Manage Movie" << endl;
        cout << " 2. Manage Cinema" << endl;
        cout << " 3. Manage Schedule" << endl;
        cout << " 4. Manage Ticket" << endl;
        cout << " 0. Back" << endl;
        cout << "Please Input : ";
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            ManageMovie();
            break;

        case 2:
            ManageCinema();
            break;

        case 3:
             ManageSchedule();
            break;

        case 4:
             ManageTicket();
            break;
        
        default:
            if (Choice != 0)
            {
                cout << "Error!! Not in Choice" << endl;
            }
            break;
        }
        

    } while (Choice != 0 && !cleasChoice);  
    Choice = 999;
}

// Manage Movie
void ManageMovie()
{
    do
    {
        cout << "-------------------------" << endl;
        cout << "Manage Movie" << endl;
        cout << "-------------------------" << endl;
        cout << " 1. Add Movie" << endl;
        cout << " 2. Show Movie" << endl;
        cout << " 0. Back" << endl;
        cout << "Please Input : ";
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            AddMovie();
            break;

        case 2:
            ShowMovie();
            break;
        
        default:
            if (Choice != 0)
            {
                cout << "Error!! Not in Choice" << endl;
            }
            break;
        }
        

    } while (Choice != 0 && !cleasChoice);  
    Choice = 999;
}

void AddMovie()
{
    string movie_id, movie_name;
    cout << "Add Movie " << endl;
    cout << "=======================" << endl;
    cout << "Please Input movie_id movie_name : ";
    cin >> movie_id >> movie_name;
    set_movie(movie_id, movie_name);
}

void ShowMovie()
{
    string m_arr[100][2] = {};
    int record = 0;
    cout << "Show Movie " << endl;
    cout << "Movie_Id\tMovie Name" << endl;
    get_movie(m_arr, record);

    for (int row = 0; row < record; row++) {
        cout << m_arr[row][0] << "\t\t" << m_arr[row][1] << endl;
    }
}

// Manage Cinema
void ManageCinema()
{
    do
    {
        cout << "-------------------------" << endl;
        cout << "Manage Cinema" << endl;
        cout << "-------------------------" << endl;
        cout << " 1. Add Cinema" << endl;
        cout << " 2. Show Cinema" << endl;
        cout << " 0. Back" << endl;
        cout << "Please Input : ";
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            AddCinema();
            break;

        case 2:
            ShowCinema();
            break;
        
        default:
            if (Choice != 0)
            {
                cout << "Error!! Not in Choice" << endl;
            }
            break;
        }
        

    } while (Choice != 0 && !cleasChoice);  
    Choice = 999;
}

void AddCinema()
{
    cout << "Add Cinema " << endl;
    string cinema_id, cinema_name, seat;
    cout << "=======================" << endl;
    cout << "Please Input cinema_id : ";
    cin >> cinema_id;
    cout << "\nPlease Input cinema_name : ";
    cin >> cinema_name;
    cout << "\nPlease Input seat : ";
    cin >> seat;

    set_cinema(cinema_id, cinema_name, seat);
}

void ShowCinema()
{
    string c_arr[100][3] = {};
    int record = 0;
    cout << "Show Cinema " << endl;
    cout << "=======================" << endl;
    cout << "Cinema_Id\tCinema Name\tSeat" << endl;
    get_cinema(c_arr, record);

    for (int row = 0; row < record; row++) {
        cout << c_arr[row][0] << "\t\t" << c_arr[row][1] << "\t\t" << c_arr[row][2] << endl;
    }
}

// Manage Schedule
void ManageSchedule()
{
    do
    {
        cout << "-------------------------" << endl;
        cout << "Manage Schedule" << endl;
        cout << "-------------------------" << endl;
        cout << " 1. Add Schedule" << endl;
        cout << " 2. Delete Schedule" << endl;
        cout << " 3. Show Schedule" << endl;
        cout << " 0. Back" << endl;
        cout << "Please Input : ";
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            AddSchedule();
            break;

        case 2:
            DeleteSchedule();
            break;

        case 3:
            ShowSchedule();
            break;
        
        default:
            if (Choice != 0)
            {
                cout << "Error!! Not in Choice" << endl;
            }
            break;
        }
        

    } while (Choice != 0 && !cleasChoice);  
    Choice = 999;
}

void AddSchedule()
{
    string schedule_id, movie_id, date, s_time, cinema_id;
    cout << "Add Schedule " << endl;
    cout << "=======================" << endl;
    cout << "Please Input schedule_id : ";
    cin >> schedule_id;
    cout << "\nPlease Input movie_id : ";
    cin >> movie_id;
    cout << "\nPlease Input date(dd/mm/yy) : ";
    cin >> date;
    cout << "\nPlease Input time(hh:mm) : ";
    cin >> s_time;
    cout << "\nPlease Input cinema_id : ";
    cin >> cinema_id;

    set_schedule(schedule_id, movie_id, date, s_time, cinema_id);
}

void DeleteSchedule()
{
    string schedule_id;
    cout << "Delete Schedule " << endl;
    cout << "=======================" << endl;
    cout << "Please Input schedule_id : ";
    cin >> schedule_id;
    delete_record(schedule_id, "schedule.txt");
}

void ShowSchedule()
{
    string s_arr[100][5] = {};
    int record = 0;
    cout << "Show Schedule " << endl;
    cout << "=======================" << endl;
    cout << "Schedule ID\tMovie ID\tDate\t\tTime\tCinema ID" << endl;
    get_schedule(s_arr, record);

    for (int row = 0; row < record; row++) {
        cout << s_arr[row][0] << "\t\t" << s_arr[row][1] << "\t\t" << s_arr[row][2];
        cout << "\t" << s_arr[row][3] << "\t" << s_arr[row][4] << endl;
    }

    cout << "\n=======================" << endl;
}

// Manage Ticket
void ManageTicket()
{
    do
    {
        cout << "-------------------------" << endl;
        cout << "Manage Ticket" << endl;
        cout << "-------------------------" << endl;
        cout << " 1. Show Ticket" << endl;
        cout << " 2. Delete Ticket" << endl;
        cout << " 0. Back" << endl;
        cout << "Please Input : ";
        cin >> Choice;

        switch (Choice)
        {
        case 1:
            ShowTicket();
            break;

        case 2:
            DeleteTicket();
            break;
        
        default:
            if (Choice != 0)
            {
                cout << "Error!! Not in Choice" << endl;
            }
            break;
        }
        

    } while (Choice != 0 && !cleasChoice);  
    Choice = 999;
}

void ShowTicket()
{
    string t_arr[100][4] = {};
    int record = 0;
    cout << "Show Ticket " << endl;
    cout << "=======================" << endl;
    cout << "Ticket Id\tSchedule Id\tSeat\tPrice" << endl;
    get_ticket(t_arr, record);

    for (int row = 0; row < record; row++) {
        cout << t_arr[row][0] << "\t\t" << t_arr[row][1] << "\t\t" << t_arr[row][2] << "\t" << t_arr[row][3] << endl;
    }
}

void DeleteTicket()
{
    string ticket_id;
    cout << "Delete Ticket" << endl;
    cout << "=======================" << endl;
    cout << "Please Input ticket_id : ";
    cin >> ticket_id;
    delete_record(ticket_id, "ticket.txt");
}

void set_movie(string movie_id, string movie_name)
{
    string filename = "movie.txt";
    ofstream OutFile(filename.c_str(), ios_base::out | ios_base::app);

    if (OutFile.is_open())
    {
        OutFile << movie_id << " " << movie_name << endl;
        OutFile.close();
        cout << "Save successfully." << endl;
    }
    else
    {
        cout << "File could not be opened." << endl;
    }
}

void set_cinema(string cinema_id, string cinema_name, string seat)
{
    string filename = "cinema.txt";
    ofstream OutFile(filename.c_str(), ios_base::out | ios_base::app);

    if (OutFile.is_open())
    {
        OutFile << cinema_id << " " << cinema_name << " " << seat << endl;
        OutFile.close();
        cout << "Save successfully." << endl;
    }
    else
    {
        cout << "File could not be opened." << endl;
    }
}

void set_schedule(string schedule_id, string movie_id, string date, string s_time, string cinema_id)
{
    string filename = "schedule.txt";
    ofstream OutFile(filename.c_str(), ios_base::out | ios_base::app);

    if (OutFile.is_open())
    {
        OutFile << schedule_id << " " << movie_id << " " << date << " " << s_time << " " << cinema_id << endl;
        OutFile.close();
        cout << "Save successfully." << endl;
    }
    else
    {
        cout << "File could not be opened." << endl;
    }
}

void set_ticket(string ticket_id, string schedule_id, string seat, string price)
{
    string filename = "ticket.txt";
    ofstream OutFile(filename.c_str(), ios_base::out | ios_base::app);

    if (OutFile.is_open())
    {
        OutFile << ticket_id << " " << schedule_id << " " << seat << " " << price << endl;
        OutFile.close();
        cout << "Save successfully." << endl;
    }
    else
    {
        cout << "File could not be opened." << endl;
    }
}

void get_movie(string arr[][2], int &record)
{
    ifstream infile("movie.txt");
    if (!infile)
    {
        cout << "Error opening the file for reading." << endl;
    }
    else
    {
        string movie_id, movie_name;
        while (record < 100 && infile >> movie_id >> movie_name)
        {
            arr[record][0] = movie_id;
            arr[record][1] = movie_name;
            record++;
        }
        infile.close();
    }
}

void get_cinema(string arr[][3], int &record) {
    ifstream infile("cinema.txt");
    if (!infile)
    {
        cout << "Error opening the file for reading." << endl;
    }
    else
    {
        string cinema_id, cinema_name, seat;
        while (record < 100 && infile >> cinema_id >> cinema_name >> seat)
        {
            arr[record][0] = cinema_id;
            arr[record][1] = cinema_name;
            arr[record][2] = seat;
            record++;
        }
        infile.close();
    }
};

void get_schedule(string arr[][5], int &record) {
    ifstream infile("schedule.txt");
    if (!infile)
    {
        cout << "Error opening the file for reading." << endl;
    }
    else
    {
        string schedule_id, movie_id, date, s_time, cinema_id;
        while (record < 100 && infile >> schedule_id >> movie_id >> date >> s_time >> cinema_id)
        {
            arr[record][0] = schedule_id;
            arr[record][1] = movie_id;
            arr[record][2] = date;
            arr[record][3] = s_time;
            arr[record][4] = cinema_id;
            record++;
        }
        infile.close();
    }
};

void get_ticket(string arr[][4], int &record) {
    ifstream infile("ticket.txt");
    if (!infile)
    {
        cout << "Error opening the file for reading." << endl;
    }
    else
    {
        string ticket_id, schedule_id, seat, price;
        while (record < 100 && infile >> ticket_id >> schedule_id >> seat >> price)
        {
            arr[record][0] = ticket_id;
            arr[record][1] = schedule_id;
            arr[record][2] = seat;
            arr[record][3] = price;
            record++;
        }
        infile.close();
    }
};

void delete_record(string id, string fn)
{
    string filename = fn; 
    string textToDelete = id;

    ifstream inputFile(filename);
    ofstream tempFile("temp.txt"); // Create a temporary file

    if (!inputFile.is_open() || !tempFile.is_open())
    {
        cerr << "Error opening files." << endl;
    }
    else
    {
        string line;
        while (getline(inputFile, line))
        {
            // Check if the line starts with the text to delete
            if (line.find(textToDelete) != 0)
            {
                tempFile << line << endl; // Write the line to the temporary file
            }
        }

        inputFile.close();
        tempFile.close();
    }

    // Optionally, delete the original file and rename the temporary file
    if (remove(filename.c_str()) != 0)
    {
        cerr << "Error deleting the original file." << endl;
    }

    if (rename("temp.txt", filename.c_str()) != 0)
    {
        cerr << "Error renaming the temporary file." << endl;
    }

    cout << "Text deleted successfully." << endl;
}
