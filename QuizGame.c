#include<stdio.h>
int main(){
    char Quitions[5][500] = {
    "What is the capital of Morocco?",
    "How many days are in a week?",
    "Which planet do we live on?",
    "What is 5 + 3?",
    "Which animal is known as the King of the Jungle?"
};

char Options[5][500] = {
    "A) Rabat B) Casablanca C) Marrakech D) Tangier",
    "A) 5 B) 6 C) 7 D) 8",
    "A) Mars B) Earth C) Venus D) Jupiter",
    "A) 6 B) 7 C) 8 D) 9",
    "A) Tiger B) Elephant C) Lion D) Wolf"
};
char Answers[5] = {'A', 'C', 'B', 'C', 'C'};
int totalquestions=sizeof(Quitions)/sizeof(Quitions[0]);
char guess;
char scoore=0;
printf("welcom to the quiz game :");
    for(int i=0;i<totalquestions;i++){
        printf("%s\n",Quitions[i]);
        printf("\n%s\n",Options[i]);
        printf("enter your answer :");
        scanf(" %c",&guess);
        if(guess==Answers[i]){
            printf("CORRECT!!\n");
            scoore++;
        }
        else{
            printf("WRONG!!!\n");
        }
    }
    printf("%d",scoore);
    
}