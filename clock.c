#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep() on Linux/Unix

int main()
{
    int hour = 0, min = 0, sec = 0; // Initialize to 0
    
    while (1)
    {
        system("cls"); // Clears the console screen (Linux/Unix-specific)
        
        printf(" %02d : %02d : %02d\n", hour, min, sec); // Print time in HH:MM:SS format
        
        fflush(stdout); // Flush output buffer to display the time immediately
        
        sec++; // Increment seconds
        
        // Handle rollover for seconds, minutes, and hours
        if (sec == 60)
        {
            min += 1;
            sec = 0;
        }
        if (min == 60)
        {
            hour += 1;
            min = 0;
        }
        if (hour == 24)
        {
            hour = 0; // Reset to 0 after 24 hours
        }
        
        sleep(1); // Pause for 1 second
    }
    
    return 0;
}
