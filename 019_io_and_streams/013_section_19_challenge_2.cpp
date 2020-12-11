/*
  I/O and Streams - Section 19 Challenge 2

    Automated Grader:
    - Write a program that reads a file named "responses.txt" thata contains the
      answer key for a quiz as well as student responses for the quiz

    - The answer key is the first item in the file
    
      student1 name
      student1 responses
      student2 name
      student2 responses

    - Here is the sample file

      ABCDE // this is the answer key
      Frank
      ABCDE
      Larry
      ABCAC
      Moe

    - You should read the file and display each students name and score (#
      correct out of 5)
    - at the end, the class average should be displayed
    - You may assume the data in the file is properly formatted
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

void grade_students( std::string file_name );

int main(void){
  std::string file_name { "./grading.txt" };
  grade_students(file_name);

  return 0;
}

void grade_students( std::string file_name ){
  std::ifstream in_file;
  std::string line;
  std::string name;
  std::string key {};
  unsigned int grade_score;
  unsigned int grade_sum = 0;
  float grade_avg = 0.0;

  in_file.open( file_name );

  if ( !in_file.is_open() ){
    std::cerr << "Error opening file\n";
  } else {
    size_t idx = 0;

    std::cout << std::setw(15) << std::left;
    std::cout << "Student" << "Score";
    std::cout << std::setfill('-') << std::setw(21);
    std::cout << "\n" << "\n";
    
    while ( !in_file.eof() ){
      if ( idx == 0 ){
        in_file >> line;
        key = line;
        // std::cout << "\nKey: " << key << "\n";
      }

      // line ctx is the score
      if ( idx > 0 && in_file >> name >> line ){
        size_t grade_check_idx = 0;
        grade_score = 0; // reset the score
        for ( char grade : line ){
          if ( grade == key[grade_check_idx] ){
            grade_score++;
          }

          // std::cout << "GRADE: " << grade << " - ";
          grade_check_idx++;
        }

        grade_sum += grade_score;

        // std::cout << name << "\n" << line << ", score: " << grade_score << "\n";
        std::cout 
        << std::setfill(' ') << std::setw(10) 
        << std::left << name 
        << std::setw(10) << std::right 
        << grade_score << "\n";
      }
      
      idx++;
    }

    std::cout << std::setfill('-') << std::setw(21);
    std::cout << "\n";

    // use the idx as denominator
    // maybe static cast numerator and set precision
    grade_avg = static_cast<float>(grade_sum) / (idx - 1);
    std::cout << std::setfill(' ');
    std::cout 
    << std::setw(5)
    << std::left
    << "Average grade"
    << std::setw(7)
    << std::right
    << std::setprecision(2) << grade_avg << "\n";
  }

  in_file.close();
}