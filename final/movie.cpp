#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void set_movie(string movie_id, string movie_name);
void get_movie(string arr[][2], int &record);

void set_cinema(string cinema_id, string cinema_name, string seat);
void get_cinema(string arr[][3], int &record);

void set_schedule(string schedule_id, string movie_id, string date, string s_time, string cinema_id);
void get_schedule(string arr[][5], int &record);

void set_ticket(string ticket_id, string schedule_id, string seat);
void get_ticket(string arr[][3], int &record);

void delete_record(string id, string fn);

int main()
{
    string movie_arr[100][2];
    int record = 0;
    // set_movie("t1", "ticket-1");
    // delete_movie("t1", "movie.txt");
    // get_movie(movie_arr, record);

    return 0;
}

void set_movie(string movie_id, string movie_name)
{
    string filename = "movie.txt";
    ofstream OutFile(filename.c_str(), ios_base::out | ios_base::app);

    if (OutFile.is_open())
    {
        OutFile << movie_id << " " << movie_name << endl;
        OutFile.close();
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
    }
    else
    {
        cout << "File could not be opened." << endl;
    }
}

void set_ticket(string ticket_id, string schedule_id, string seat)
{
    string filename = "ticket.txt";
    ofstream OutFile(filename.c_str(), ios_base::out | ios_base::app);

    if (OutFile.is_open())
    {
        OutFile << ticket_id << " " << schedule_id << " " << seat << endl;
        OutFile.close();
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

void get_ticket(string arr[][3], int &record) {
    ifstream infile("ticket.txt");
    if (!infile)
    {
        cout << "Error opening the file for reading." << endl;
    }
    else
    {
        string ticket_id, schedule_id, seat;
        while (record < 100 && infile >> ticket_id >> schedule_id >> seat)
        {
            arr[record][0] = ticket_id;
            arr[record][1] = schedule_id;
            arr[record][2] = seat;
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
