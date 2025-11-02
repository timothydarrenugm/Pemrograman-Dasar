//Timothy Darren_556068

#include <iostream>
#include <string> 

struct studentType {
    std::string studentFName; 
    std::string studentLName;
    int testScore;
    char grade;
};

studentType Student[20];

void clearline() {
    std::cout << "\033[A\033[2K";
    std::flush(std::cout);
}

void read_data(int i) {
    int a = i + 1;
    std::cout << "List Number : " << a << "\n" << "Input Student First Name : ";
    std::cin >> Student[i].studentFName;
    std::cout << "Input Student Last Name : ";
    std::cin >> Student[i].studentLName;
    std::cout << "Input Student Test Score : ";
    std::cin >> Student[i].testScore;
    clearline();
    clearline();
    clearline();
    clearline();
}

void Assign_grade() {
    for (int i = 0; i < 20; i++) {
        if (Student[i].testScore <= 100 && Student[i].testScore > 89 ) {
            Student[i].grade = 'A';
        }
        else if (Student[i].testScore <= 89 && Student[i].testScore > 79 ) {
            Student[i].grade = 'B';
        }
        else if (Student[i].testScore <= 79 && Student[i].testScore > 69 ) {
            Student[i].grade = 'C';
        }
        else if (Student[i].testScore <= 69 && Student[i].testScore > 59 ) {
            Student[i].grade = 'D';
        }
        else if (Student[i].testScore <= 59 && Student[i].testScore > 0 ) {
            Student[i].grade = 'E';
        }
        else
        Student[i].grade = '-';
    }
}

void OutData() {
    std::cout << "The List of Student in Class A" << std::endl;
    for (int i=0; i < 20; i++) {
        int a = i + 1;
        std::cout << a << ". " << Student[i].studentLName << ", " << Student[i].studentFName << "\t" << "Test Score : " << Student[i].testScore << "\t" << "Grade : " << Student[i].grade << std::endl;
    }
    std::cout << std::endl;
}

int top3,top2,top1;

void HighestScore() {
    int a = 0;
    int b,c,d;

    for (int i = 0 ; i < 20; i++) {
        if (Student[i].testScore > a) {
            a = Student[i].testScore;
            top3 = top2;
            top2 = top1;
            top1 = i;
        }    
    }
}

void nameHighScore() {
    std::cout << "The top three student is\n";
    std::cout << Student[top1].studentLName << ", " << Student[top1].studentFName << "\t Score : " << Student[top1].testScore << "\n";
    std::cout << Student[top2].studentLName << ", " << Student[top2].studentFName << "\t Score : " << Student[top2].testScore << "\n";
    std::cout << Student[top3].studentLName << ", " << Student[top3].studentFName << "\t Score : " << Student[top3].testScore;
}

int main() {
    for (int i=0; i < 20; i++) {
    read_data(i);
    }
    Assign_grade();
    OutData();
    HighestScore();
    nameHighScore();

    return 0;
}