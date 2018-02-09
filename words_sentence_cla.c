    /*

     * C Program to Count the Total Number of Words in the Sentence 

     * using Command Line Argument

     */

    #include <stdio.h>
     

    int main(int argc, char *argv[])

    {
        int i = 0;     

        /* If no sentence is given in the command line */

        if (argc == 1)
        {
            printf("\nNo sentence given on command line\n");
            return;
        }
        else
        {
            printf("\nThe words in the sentence are:\n");
            /*

             * From argv[1] to argv[argc -1] calculate the number of arguments

             */
        //argc refers to the number command line arguments
        //argv[] refers an array of strings of the command line arguments or representing the command line args

        for (i = 1;i < argc;i++)
        {
            printf("\n%s", argv[i]);
        }

        printf("\n\nTotal number of words: ");

        printf(" %d\n\n", argc-1);

        }

    }