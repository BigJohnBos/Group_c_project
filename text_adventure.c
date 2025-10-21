// CC & BB & CP & MW final c project

#include <stdio.h>
#include <string.h>
//CC
int forward(void){
    char answer[5];
    printf("You walk forward onto the path. It brings you deeper into the forest\n");
    printf("You found a large stick on the path!\n");
    printf("Would you like to keep it? it might be helpful later\n");
    scanf("%s", &answer);

    if(strcmp(answer, "Yes")==0){
        printf("[stick] Has been added tp your inventory^^");
    }else if(strcmp(answer, "No")==0){
        printf("You leave the stick on the trail.");
    }else{
        printf("Dude, yes or no please.");
    }

    
    return 0; 
}



//CP
int right(void){
    

printf("while you are walking you trip on a rock and are injured\n");
printf("while you limp you see a big bear\n");



return 0;

}
    
//mw
int left(void){
char path_decision[10];
printf("You walk left on the path\n");
printf("You see a house in the distance\n");
printf("Do you go to the house or stay on the path?\n");
scanf("%s", &path_decision);

if (strcmp(path_decision, "stay")==0){
    printf("a bear came and ate you");
}else if (strcmp(path_decision, "go")==0){
    printf("you go to the house and see a  ");
}




    return 0;
}
    










//BB
int main(void){
    int bob = 1;
    char decision[10];
    char name[30];
    char invintory[213][1000] = {"Pocket Knife", "Mirror"};
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("Welcome %s, to the forest! \n", name);
    printf("You wake up on a path in the middle of an unfamiliar forest\n");
    printf("In your pocket you have %s", invintory);
    printf("You don't know how you got there but you see three paths in front of you, Forward, Left, or Right.\n");

    while(bob == 1){
        
        printf("Which way would you like to go?\n");
        scanf("%s", decision);
        if(strcmp(decision, "Forward")==0){
            forward();
            bob = 0;
        }else if(strcmp(decision, "Left")==0){
            left();
            bob = 0;
        }else if(strcmp(decision,"Right")==0){
            right();
            bob = 0;
        }else{
            printf("Type a valid answer\n");
        }


    }
    
    return 0;
}