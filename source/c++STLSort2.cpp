#include <iostream>
#include <algorithm>

using namespace std;

class Student {
	public:
		string name;
		int score;
		Student(string name, int score) {
			this->name = name;
			this->score = score;
		}
		
		// 정렬 기준은 '점수가 낮은 순서'
		bool operator <(Student &student) {
			return this->score < student.score;
		}
};

int main(void) {
	Student students[] = {
		Student("상 고 이 ", 90),
		Student("김 길 동 ", 93),
		Student("박 길 동 ", 97),
		Student("홍 길 동 ", 87),
		Student("최 길 동 ", 92)
	};
	
	sort(students, students + 5);
	
	for (int i=0; i<5; i++) {
		cout << students[i].name << ' ';
	} 
}
