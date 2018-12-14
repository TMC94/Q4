#include <stdio.h>
#include <stdlib.h>

void writeToFile(void);
void readFile(void);

int main()
{


    writeToFile();
    readFile();
    return 0;
}

void writeToFile()
{

    FILE *pFile; // Attempt to open the file with write capacity.
    pFile = fopen("C:\\Taylor\\random.txt", "w");

    if ( pFile == NULL )
    {
        printf("Unable to open/write file.");
    }
    else
    {
        printf("Enter float 1: ");
        int num;
        scanf("%d", &num);
        printf("Enter float 2: ");
        int h;
        scanf("%d", &h);

        fprintf(pFile, "%d, %d", num, h);
        fclose(pFile);

    }
}

readFile()
{
    int num; // Store contents of file.
    int h;

    FILE *ptrFile;
    ptrFile = fopen("C:\\Taylor\\random.txt", "r");

    if ( ptrFile == NULL )
    {
        printf("Unable to open/read file.");
    }
    else
    {
        fscanf(ptrFile, "%d", &num, &h);
        printf("Wrote to file: %d, %d", num, h);

        fclose(ptrFile);

    }

}
