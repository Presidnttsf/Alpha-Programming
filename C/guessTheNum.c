    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>



    int main()
    {
        // unsigned int seed = (unsigned int)time(NULL);
        // printf("Seed value: %u\n", seed);
          srand(time(NULL)); //time is always changing
        // srand(10); if give constant value it will not change generated value
        int generatedVal =  (rand()%5)+1;
        // printf("e%dnumber\n", generatedVal);
        int userInput;
        int count = 1;
        while(count <= 3){
                    printf("Guess the number from 1 to 5: ");
        scanf("%d", &userInput);
        if(userInput <= 0 || userInput > 5){
            printf("Enter number btwn 1 to 5 only!\n");
            break;
        };
        if(userInput == generatedVal){
            printf("You win\n");
            return 0;
        
        }else if(count == 2){
            
            printf("wrong guess and this is your final chance.\n");
            
        }else{
            printf("%s%d chances are left.\n", "wrong guess\n",3-count);
        }
            
        
            count++;
        }
        printf("you lost the game.");

        return 0;
    }
