#include <iostream>
using namespace std;
using std::cin;
using std::cout;



int return_minutes(string time1, string time2, string morning_afternoon1, string morning_afternoon2)
{
    int total_minutes;
    //convert time1 to minutes
    //hours to minutes
    int time1_hours_0 = time1[0] - '0';
    int time1_hours_1 = time1[1] - '0';


    int time1_hours = time1_hours_0 * 10 + time1_hours_1;


    int time2_hours_0 = time2[0] - '0';
    int time2_hours_1 = time2[1] - '0';

    int time2_hours = time2_hours_0 * 10 + time2_hours_1;


    //if cross am to pm or pm to am
    if (morning_afternoon1 != morning_afternoon2)
    {
        time1_hours = 12 - time1_hours;
        cout << time1_hours << endl;
    }

    //minutes to minutes
    int time1_minutes_0 = time1[3] - '0';
    int time1_minutes_1 = time1[4] - '0';

    int time1_minutes = time1_minutes_0 * 10 + time1_minutes_1;

    //convert time2 to minutes
    //hours to minutes
    int time2_minutes_0 = time2[3] - '0';
    int time2_minutes_1 = time2[4] - '0';

    int time2_minutes = time2_minutes_0 * 10 + time2_minutes_1;


    int time1_total_minutes = time1_hours * 60 + time1_minutes;
    int time2_total_minutes = time2_hours * 60 + time2_minutes;

    //read seconds
    int time1_seconds_0 = time1[6] - '0';
    int time1_seconds_1 = time1[7] - '0';

    int time1_seconds = time1_seconds_0 * 10 + time1_seconds_1;

    int time2_seconds_0 = time2[6] - '0';
    int time2_seconds_1 = time2[7] - '0';

    int time2_seconds = time2_seconds_0 * 10 + time2_seconds_1;

    //if cross am to pm or pm to am
    if (morning_afternoon1 != morning_afternoon2)
    {
        total_minutes = time2_total_minutes + time1_total_minutes;

        if( time1_seconds > time2_seconds)
        {
            total_minutes = total_minutes - 1;
        }

        return total_minutes;
    }

    //if cross day to night or night to day
    if (time1_total_minutes > time2_total_minutes)
    {
        time2_total_minutes = time2_total_minutes + 24 * 60;
        
    }
    
    total_minutes = time2_total_minutes - time1_total_minutes;
    if( time1_seconds > time2_seconds)
        {
            total_minutes = total_minutes - 1;
        }

    return total_minutes;
}


int main(void)
{
    //2 var for 2 times
    string time1, time2, morning_afternoon1, morning_afternoon2;

    cin >> time1;
    cin >> morning_afternoon1;
    cin >> time2;
    cin >> morning_afternoon2;

    cout << return_minutes(time1, time2, morning_afternoon1, morning_afternoon2) << endl;





    return 0;
}