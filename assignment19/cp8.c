/*Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
 word1 = “the”, word2 = “fox”, OUTPUT : 2 )*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i = 0, w1 = -1, w2 = -1, min = 10000, temp = 0;
    char words[10][20];
    char word1[20];
    char word2[20];
    printf("Enter 10 words.\n");
    for (i = 0; i < 10; i++)
    {
        gets(words[i]);
    }
    printf("Enter word 1.\n");
    scanf("%s", word1);
    printf("Enter word 2.\n");
    scanf("%s", word2);

    for (i = 0; i < 10; i++)
    {
        if (strcmp(words[i], word1) == 0)
        {
            w1 = i;
        }
        if (strcmp(words[i], word2) == 0)
        {
            w2 = i;
        }
        if (w1 != -1 && w2 != -1)
        {
            temp = abs(w1 - w2);
            if (temp < min)
            {
                min = temp;
            }
        }
    }
    printf("Distance = %d", min - 1);
    return 0;
}