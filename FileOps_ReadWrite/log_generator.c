#include <stdio.h>
#include <time.h>

int main() {
    FILE *logFile = fopen("system_log.txt", "a");
    time_t now;
    time(&now);
    
    if(logFile) {
        fprintf(logFile, "[%s] System boot initialized\n", ctime(&now));
        fclose(logFile);
        printf("Log entry created 📝\n");
    }
    return 0;
}