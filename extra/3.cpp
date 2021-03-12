// C implementation of digital clock 
#include <stdio.h> 
//#include <time.h> 
#include <iostream>
#include <ctime>
//#include <iomanip>

std::string month[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
std::string day[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
 
// driver code 
int main() 
{ 
	time_t s, val = 1; 
	struct tm* current_time; 
    time_t timer;
    tm * time;
    const int BASE_YEAR = 1900;
 

	// time in seconds 
	s = time(NULL); 
    int i;
	// to get current time 
	current_time = localtime(&s); 
    //printf("enter ur pre\n");
    printf("1:for showing date\n");
    printf("2:for showing time in min.\n");
    printf("3:for showing time in sec.\n");
	scanf("%d",&i);
    // print time in minutes, 
	// hours and seconds 
    switch(i)
    {
    case 1:
    std::time(&timer);
    time = localtime(&timer);
    std::cout << "Current date " << day[time->tm_wday] << " "
              << month[time->tm_mon] << " " << time->tm_mday
              << " " << (time->tm_year + BASE_YEAR);
    break;

    case 3:  

	printf("%02d:%02d:%02d\n", 
		current_time->tm_hour/12, 
		current_time->tm_min, 
		current_time->tm_sec); 
    break;

    case 2:
    printf("%02d:%02d", 
		current_time->tm_hour/12, 
		current_time->tm_min); 
    break;
    }
	return 0; 
} 
