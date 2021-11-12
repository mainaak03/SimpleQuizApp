#include <bits/stdc++.h>
using namespace std;

struct question {
    string Question;
    string option1;
    string option2;
    string option3;
    int correct;
};

void askQuestion(question q, int *ptr) {
    int ans;
    cout <<q.Question <<endl;
    cout <<q.option1 <<endl;
    cout <<q.option2 <<endl;
    cout <<q.option3 <<endl;
    cout << "Choose 1-3: ";
    cin >>ans;
    if (ans == q.correct) {cout <<"Correct!" <<endl; *ptr+=1;}
    else {cout <<"Incorrect!" <<endl;}
    cout <<endl;
}

int main() {
    question q1, q2, q3, q4, q5;
    q1.Question = "What is the smallest country?";
    q1.option1 = "1. USA";
    q1.option2 = "2. India";
    q1.option3 = "3. Vatican City";
    q1.correct = 3;

    q2.Question = "What is the biggest animal?";
    q2.option1 = "1. Elephant";
    q2.option2 = "2. Blue Whale";
    q2.option3 = "3. Great White Shark";
    q2.correct = 2;

    q3.Question = "What is the largest planet?";
    q3.option1 = "1. Earth";
    q3.option2 = "2. Mercury";
    q3.option3 = "3. Jupiter";
    q3.correct = 3;

    q4.Question = "What is the highest mountain?";
    q4.option1 = "1. Mount Everest";
    q4.option2 = "2. Kanchenjungha";
    q4.option3 = "3. Mount K2";
    q4.correct = 1;

    q5.Question = "Who is the current president of USA?";
    q5.option1 = "1. Barrack Obama";
    q5.option2 = "2. Joe Biden";
    q5.option3 = "3. Donald Trump";
    q5.correct = 2;

    int points=0;
    int *ptr = &points;
    askQuestion(q1, ptr);
    askQuestion(q2, ptr);
    askQuestion(q3, ptr);
    askQuestion(q4, ptr);
    askQuestion(q5, ptr);
    cout <<"**************" <<endl <<"points : " <<points <<endl <<"**************" <<endl;
    
    system("pause");
}
