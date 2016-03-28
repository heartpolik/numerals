#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


void readVocabulary()
{
    FILE* voc = fopen("D:\\Projects\\clion\\numerals\\vocabulary.txt","r+");

    FILE* text = fopen("D:\\Projects\\clion\\numerals\\text.txt","r+");

    FILE* rez = fopen("D:\\Projects\\clion\\numerals\\rezult.txt","a+");

    FILE* analytics = fopen("D:\\Projects\\clion\\numerals\\analytics.txt","w+");

    char word[255];
    int number = 0;
    int cntr = 0;
    char temp[255];

    while (fscanf(voc, "%s", &word) != EOF)
    {
        if (atoi(word))
        {
            fprintf(analytics,"%i by %i times \n",number,cntr);
            number = atoi(word);
            cntr=0;
            printf("%s ",temp );
            continue;
        };
        while (fscanf(text,"%s",&temp)!=EOF)
        {
            if (!strcmp(temp,word))
            {
                ++cntr;
            };
        };
        freopen("D:\\Projects\\clion\\numerals\\text.txt","r+",text);
    };

    fclose(voc);
    fclose(text);
    fclose(rez);
    fclose(analytics);
}




int main() {

    readVocabulary();
    getchar();
    return 0;
}