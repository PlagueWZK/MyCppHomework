#include <iostream>

class Student {
public:
    Student(int n, float s) : num(n), score(s) {}

    void change(int n, float s) const {};

    void display() const { std::cout << num << " " << score << std::endl; }

private:
    int num;
    float score;
};

int main() {
    const Student stud(105, 95.5);
    stud.change(101,80.5);
    stud.display();
    return 0;
}
