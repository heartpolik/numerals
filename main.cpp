#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


void readVocabulary()
{
    FILE* voc;
    voc = fopen("D:\\Projects\\clion\\numerals\\vocabulary.txt","r+");

    FILE* text;
    text = fopen("D:\\Projects\\clion\\numerals\\text.txt","r+");

    char word[255];
    int number = 0;

    while(fscanf(voc, "%s", &word)!=EOF)
    {
        if(atoi(word))
        {
            number=atoi(word);
            continue;
        };

        printf("%s -> %i\n", word,number);
    };


}




int main() {
    cout << "Hello, World!" << endl;
    readVocabulary();
    getchar();
    return 0;
}