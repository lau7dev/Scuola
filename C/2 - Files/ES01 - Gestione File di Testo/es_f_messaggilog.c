/**
 * @file es_f_messaggilog.c
 * 
 * L'obiettivo di questo esercizio è creare un programma in linguaggio C che permetta di scrivere messaggi di log su un file di log. 
 * Questi messaggi di log possono contenere informazioni importanti sul funzionamento di un'applicazione o di un sistema
 * e sono spesso utilizzati per scopi di debugging, tracciatura, monitoraggio o registrazione di eventi rilevanti.
 * 
 * @author Lorenzo Tarragoni
 * @date 28/10/24
 */

typedef struct
{
    int tm_year;
    int tm_mon;
    int tm_mday;
    int tm_hour;
    int tm_min;
    int tm_sec;
} tm;

typedef struct
{
    tm ore;
} time_t;


#include <stdio.h>

int main()
{
    char *NomeFile = "TestFiles/log.txt";
    FILE *logFile  = fopen(NomeFile, "a");
}

void writeLog(FILE *logFile, const char *message)
{
    time_t currentTime;
    tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
            localTime->tm_hour, localTime->tm_min, localTime->tm_sec, message);
}