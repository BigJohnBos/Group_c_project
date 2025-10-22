// CC & BB & CP & MW final c project

#include <stdio.h>
#include <string.h>

char invintory[213][1000] = {"Pocket knife", "Cell Phone"};
//CC
int forward(void){
    char answer[20];
    printf("You walk forward onto the path. It brings you deeper into the forest\n");
    printf("You found a large stick on the path!\n");
    printf("Would you like to keep it? it might be helpful later\n");
    scanf("%s", &answer);

    if(strcmp(answer, "Yes")==0){
        strcpy( invintory[1], "stick");
        printf("[stick] Has been added to your inventory^^\n");
    }else if(strcmp(answer, "No")==0){
        printf("You leave the stick on the trail.\n");
    }else{
        printf("Dude, yes or no please.\n");
    }

    printf("You continue down the path. Afrer a few minutes you see the edge of a town! Excidedly you keep start running to the town, maybe you can get some help there!\n");
    printf("On your way you skid too a stop and see a large intricite treehouse. It seems a tad bit old, but quite intresting. Do you stop and go inside the treehouse? or keep walking? (hint: type treehouse or continue :3) \n");

    if(strcmp(answer, "Treehouse")==0){
        printf("You look between the path and the treehouse before inevitibly going inside the treehouse.\n");
        printf("Inside is shockingly spacious. You spend a while in the treehouse stealing some of the small snacks you think aren't important. After a while you decide to get out and go back on the path.\n")
    }else if(strcmp(answer, "Continue")==0){
        printf("placeholder chat")
    }
    
    return 0; 
}



//CP


int right(void){

    char answer[50];
    printf("while you are walking you trip on a rock and are injured\n");
    printf("while you limp you see a big bear\n");
    printf("are you going to fight it?\n");
    scanf("%s", answer);
    int joe = 1;
    while(joe == 1){
        if (strcmp(answer, "yes")==0){
            printf("you punch the bear!! but the bear goes for your leg and you die\n");
            joe= 0;
        }else if (strcmp(answer, "no")==0){
            printf("you keep walking! and make it out\n");
            joe = 0;
        }else{
            printf("type a valid answer \n");
    }
    }
    

return 0;

}
    
//mw
int left(void){
char path_decision[10];
char path-decision2[10];
printf("You walk left on the path\n");
printf("You see a house in the distance\n");
printf("Do you go to the house or stay on the path?\n");
scanf("%s", &path_decision);

if (strcmp(path_decision, "stay")==0){
    printf("a bear came and ate you ");
}else if (strcmp(path_decision, "go")==0){
    printf("you go to the house do you stay inside it or go take the car");
    scanf("%s", &path_decision2);
}else printf("Enter stay or go ");

    if (strcmp(path_decision, "stay")==0){
        printf("the house explodes you die\n");
    }else if (strcmp(path_decision, "go")==0){
        printf("you drive back to your house you win ");
    }else printf("Enter stay or go");





    return 0;
}
    



//BB
int main(void){
    int bob = 1;
    char decision[10];
    char name[30];
    char invintory[213][1000];
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("Welcome %s, to the forest! \n", name);
    printf("You wake up on a path in the middle of an unfamiliar forest\n");
    printf("In you invintory you have:\n");
    for(int i = 0; i < 3; i++){
        printf("%s", invintory[i]);
    }
    printf("You don't know how you got there but you see three paths in front of you, Forward, Left, or Right.\n");

    while(bob == 1){
        
        printf("Which way would you like to go? Or phone.\n");
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
        
        }else if(strcmp(decision, "Phone")==0){
            printf("You check your phone, you don't have service." )
        }else{
            printf("Type a valid answer\n");
        }


    }
    
    return 0;
}