#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUESTIONS 3
#define MAX_QUESTION_LENGTH 100
#define MAX_ANSWER_LENGTH 50

typedef struct {
    char question[MAX_QUESTION_LENGTH];
    char options[4][MAX_ANSWER_LENGTH];
    int correct_option;
} QuizQuestion;

void initializeQuestions(QuizQuestion questions[]) {
    strcpy(questions[0].question, "WHO WAS THE FIRST PRESIDENT OF INDIA?");
    strcpy(questions[0].options[0], "A. DR.Rajendra prasad");
    strcpy(questions[0].options[1], "B. Draupadi murmu");
    strcpy(questions[0].options[2], "C. Zakir hussain ");
    strcpy(questions[0].options[3], "D. V.v.giri");
    questions[0].correct_option = 0;

    strcpy(questions[1].question, "WHAT COLOUR SYMOBOLISES PEACE?");
    strcpy(questions[1].options[0], "A. white ");
    strcpy(questions[1].options[1], "B. Yellow");
    strcpy(questions[1].options[2], "C. pink");
    strcpy(questions[1].options[3], "D. Orange");
    questions[1].correct_option = 0;

    strcpy(questions[2].question, "NANTIONAL EDUCATION DAY IS?");
    strcpy(questions[2].options[0], "A. November 12th ");
    strcpy(questions[2].options[1], "B. November 11th");
    strcpy(questions[2].options[2], "C. November 10th");
    strcpy(questions[2].options[3], "D. November 14th");
    questions[2].correct_option = 1;
}

int main() {
    QuizQuestion questions[MAX_QUESTIONS];
    int score = 0;

    initializeQuestions(questions);

    printf("Welcome to the Online Quiz Game!\n");
    printf("Answer the following questions:\n\n");

    for (int i = 0; i < MAX_QUESTIONS; ++i) {
        printf("Question %d: %s\n", i + 1, questions[i].question);
        printf("%s\n%s\n%s\n%s\n", questions[i].options[0], questions[i].options[1],
               questions[i].options[2], questions[i].options[3]);

        int user_answer;
        printf("Your answer (enter the option number): ");
        scanf("%d", &user_answer);

        if (user_answer - 1 == questions[i].correct_option) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong!\n\n");
        }
    }

    printf("Quiz completed! Your score is: %d out of %d\n", score, MAX_QUESTIONS);

    return 0;
}

