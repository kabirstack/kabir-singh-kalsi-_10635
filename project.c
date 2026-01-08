#include <stdio.h>

int main()
{
    int totalSeconds;
    int hours, minutes, seconds;
    int counter = 0;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    /* ---------- Using FOR Loop ---------- */
    printf("\n--- Using FOR Loop ---\n");

    for(int i = 0; i < 1; i++)
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        counter++;   // increment counter
    }

    printf("Hours   : %d\n", hours);
    printf("Minutes : %d\n", minutes);
    printf("Seconds : %d\n", seconds);
    printf("FOR Loop Counter : %d\n", counter);

    /* Reset counter */
    counter = 0;

    /* ---------- Using WHILE Loop ---------- */
    printf("\n--- Using WHILE Loop ---\n");

    int i = 0;
    while(i < 1)
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        counter++;   // increment counter
        i++;
    }

    printf("Hours   : %d\n", hours);
    printf("Minutes : %d\n", minutes);
    printf("Seconds : %d\n", seconds);
    printf("WHILE Loop Counter : %d\n", counter);

    /* Comparison */
    printf("\n--- Comparison ---\n");
    printf("Results from FOR loop and WHILE loop are same.\n");

    return 0;
}

#ifdef _WIN32
#include <windows.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    return main();
}
#endif