#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  /*
    if(expr1){
      if(expr2) {
        statement1;
      } else {
        statement2;
      }
    } else {
      statementElse;
    }

    - If the expresson is 'true' then execute statement1 
    - If the expression is 'false' then execute statement2 

    Example:

    if(score > 90){
      if(score > 95){
        cout << "A+";
      } else {
        cout << "A";
      }
    } else {
      cout << "Sorry, No A";
    }
  */ 

  int score {};
  cout << "Enter your score on the exam: " << endl << "> ";
  string score_s {"Your score: "};

  cin >> score;
  char letter_grade {'A'};
  // execute the grade block if score is within range
  if(score >= 0 && score <= 100){
    if(score >= 90){
      if (score >= 95){
        letter_grade = "A+";
        cout << score_s << letter_grade << endl;
      } else {
        letter_grade = "A";
        cout << score_s << letter_grade << endl;
      }
    } else if(score < 90 && score >= 80){
      if(score >= 85){
        letter_grade = "B+";
        cout << score_s << letter_grade << endl;
      } else {
        letter_grade = "B";
        cout << score_s << letter_grade << endl;
      }
    } else if(score < 80 && score >= 70){
      if(score >= 75){
        letter_grade = "C+";
        cout << score_s << letter_grade << endl;
      } else {
        letter_grade = "C";
        cout << score_s << letter_grade << endl;
      }
    } else if(score < 70 && score >= 60){
      if(score >= 65){
        letter_grade = "D+";
        cout << score_s << letter_grade << endl;
      } else {
        letter_grade = "D";
        cout << score_s << letter_grade << endl;
      }
    } else {
      cout << "Sorry sweaty, you failed :/" << endl;
    }
  } else {
    cout << "Sorry, " << score << " is not in range." << endl;
  }

  return 0;
}