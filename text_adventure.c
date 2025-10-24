// CC & BB & CP & MW final c project

#include <stdio.h>
#include <string.h>

char invintory[213][1000] = {"Pocket knife", "Cell Phone"};
//CC
int forward(void){
    char answer[20]; 
    int rv = 1;
    printf("You walk forward onto the path. It brings you deeper into the forest\n");
    printf("You found a stick on the path!\n");
    printf("Would you like to keep it?\n");
    printf("(Hint: start your answer with a capitol)");
   
    while(rv==1){
         scanf("%s", &answer);
        if(strcmp(answer, "Yes")==0){
            strcpy( invintory[1], "stick");
            printf("[stick] Has been added to your inventory^^\n");
            rv=0;
         }else if(strcmp(answer, "No")==0){
            printf("You leave the stick on the trail.\n");
            rv=0;
        }else{
             printf("Dude, yes or no please.\n");
            }
    }
    printf("You continue down the path. After a few minutes you see the edge of a town! Excidedly you keep start running to the town, maybe you can get some help there!\n");
    printf("On your way you skid too a stop and see a large intricite treehouse. It seems a tad bit old, but quite intresting. Do you stop and go inside the treehouse? or keep walking?\n");
    printf("(hint: type treehouse or continue :3) \n");

    while(rv== 0){
        scanf("%s", &answer);
           if(strcmp(answer, "Treehouse")==0){
                printf("You look between the path and the treehouse before inevitibly going inside the treehouse.\n");
                printf("Inside is shockingly spacious. You spend a while in the treehouse stealing some of the small snacks you think aren't important.\n");
                printf(" After a while you decide to get out and go back on the path.");
                printf("You go back down the path walking away from the treehouse and back too the town.\n");
            rv=2;
        }   else if(strcmp(answer, "Continue")==0){
                printf("You go back down the path walking away from the treehouse and back too the town.\n");
            rv=2;
        }   else{
                printf("You need valid answers buddy\n");
    };

    }
 
    printf("Once you get to the town you see a small cafe, they have a sign saying 'Free Wifi'. You could go inside use your phone, or you could keep walking and try to figure out where you are. Which do you do?\n");
    printf("(hint, say Cafe or Struggle)");
    while(rv==2){
        scanf("%s", &answer);
        if(strcmp(answer, "Cafe")==0){
            printf("You walk into the cafe and your phone connects to the wifi\n");
            printf("Your phone unlocks and you find out you are in a small town a few states away. You call your mom to come pick you up\n");
            printf("Your mom has been worried sick, she comes to get you and bring you home,\n");
            printf("she had filed a missing persons report for you, apperently you had been gone for a while.\n");
            printf("You will be questioned once you get home. For now, you close your eyes and go to sleep\n");
            printf("[ENDING 1/8]");
            rv=0;
        }else if(strcmp(answer, "Struggle")==0){
            printf("You turn away and continue walking down the street\n");
            printf("Once you get deeper into town you find a small police station. Looking around and then down at yourself you decide to go in\n");
            printf("Once inside you tell them you think you are a missing person and everything you could remember, which wasn't much.\n");
            printf("They find you in their databases and spend a while questioning you. It's exhusting but at least you are safe now. they will figure out what happened.\n");
            printf("[ENDING 2/8]");
            rv=0;
        }else{
            printf("You should know this by now dude\n");
        }
    }
    return 0; 
}



//CP

int alive(void){
    printf("once you get out your ankle starts to hurt, you take a break and lay down\n");
    printf("when you are laying down you look over and see a path apear\n");
    printf(" are you going to follow the path?\n");
    int jim = 1;
    char pig[50];
    while(jim == 1){
        scanf("%s", &pig);
        if (strcmp(pig, "yes")==0){
            printf("you make it out of the forest!\n");
            jim= 0;
        }else if (strcmp(pig, "no")==0){
            printf("you never make it out of the forest\n");
            printf("GAME OVER");
            jim = 0;
        }else{
            printf("type a valid answer \n");
    }
}
}
int right(void){
    
    char answer[50];
    printf("while you are walking in the forest and you trip on a rock and are injured\n");
    printf("while you limp you see a big bear\n");
    printf("are you going to fight it?\n");
    scanf("%s", answer);
    int joe = 1;
    while(joe == 1){
        if (strcmp(answer, "yes")==0){
            printf("you punch the bear!! but the bear goes for your leg\\n");
            printf("[ENDING 3/8]")/*CP did this part, bb helped her with most*/;
            joe= 0;
        }else if (strcmp(answer, "no")==0){
            printf("you keep walking!\n");
            joe = 0;
    
            alive();
        }else{
            printf("type a valid answer \n");
    }
        
    }
    

return 0;

}

//mw
int go(void){
        int ss=1;
        char path_decision2[10];
        while(ss=1){
        scanf("%s", &path_decision2);
            if (strcmp(path_decision2, "stay")==0){
                printf("the house explodes you die\n");
            }else if (strcmp(path_decision2, "go")==0){
                printf("you drive back to your house you win yay\n");
            printf("ending 6");
                ss=0;
            }else{printf("enter stay or go");}
                ss=0;
    return 0;

}
}
    
//mw
int left(void){
char path_decision[10];
char path_decision2[10];
int s=1;
int ss=1;
printf("You walk left on the path\n");
printf("You see a house in the distance\n");
printf("Do you go to the house or stay on the path? type stay or go\n");
scanf("%s", &path_decision);



    while(s==1){
            if (strcmp(path_decision, "stay")==0){
            printf("A bear came and ate you\n");
            printf("ending 5");
            s=0;
        }else if (strcmp(path_decision, "go")==0){
            printf("You go to the house\n");
            go();
            s=0;
        }else{printf("Enter stay or go\n");
        } 
    }
 
    

}



    
//BB
int main(void){
    int bob = 1;
    char decision[10];
    char name[30];
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("Welcome %s, to the forest! \n", name);
    printf("You wake up on a path in the middle of an unfamiliar forest\n");
    printf("In you invintory you have:\n");
    for(int i = 0; i < 3; i++){
        printf("%s\n", invintory[i]);
    }
    printf("You don't know how you got there but you see three paths in front of you, Forward, Left, or Right.\n");

    while(bob == 1){
        
        printf("Which way would you like to go? Or check your phone.\n");
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
            printf("You check your phone, you don't have service.\n" );
        }else{
            printf("Type a valid answer, make sure you start with a capitol\n");
        }


    }
    
    return 0;
}