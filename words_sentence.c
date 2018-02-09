    /*

     * C Program to Count Number of Words in a given Text Or Sentence

     */

    #include <stdio.h>

    void main()

    {

        char s[200];

        int count = 0, i;

        printf("enter the string\n");

        scanf("%[^\n]s", s);    // '[^\n]s' means take the string untill you encounter a new line or the user press enter

        for (i = 0;s[i] != '\0';i++) //'\0' refers to the end of a string

        {
            if (s[i] == ' ')
            {
                count++;
            }
        }

        printf("number of words in given string are: %d\n", count + 1);

    }