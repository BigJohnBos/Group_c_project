// CC & BB & CP & MW final c project

#include <stdio.h>

//CC
void forward(void){
    char yes;
    char no;
    printf("You walk forward onto the path. It brings you deeper into the forest\n");
    printf("^You found a large stick on the path!^\n");
    printf("^Would you like to keep it?^\n");
    scanf("%s", &yes, &no);

    return 0; 
}



//CP
void right(void){
    

printf("while you are walking you trip on a rock and are injured\n");
printf("while you limp you see a big bear\n");



return 0;

}
    
//mw
void left(void){
path_decision[10];
printf("You walk left on the path\n");
printf("You see a house in the distance\n");
printf("Do you go to the house or stay on the path?\n");
scanf("%s", path_decision);


    return 0;
}
    










//BB
int main(void){
    char path
    int bob = 1;
    char decision[10];
    char name[30];
    printf("What is your name?\n");
    scanf("%s\n", name);
    printf("Welcome %s, to the forest! \n", name);
    printf("You wake up on a path in the middle of an unfamiliar forest\n");
    printf("You don't know how you got there but you see three paths in front of you, Forward, Left, or Right.\n");
    printf("Which way would you like to go?\n"); //CC
    scanf("%s\n", decision);
    while(bob == 1){
        if(decision == "Forward"){
            forward();
            bob = 0;
        }else if(decision == "Left"){
            left();
            bob = 0;
        }else if(decision == "Right"){
            right();
            bob = 0;
        }else{
            printf("Type a valid answer\n")
        }


    }
    
    return 0;
}