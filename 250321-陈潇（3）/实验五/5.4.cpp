#include<iostream>
using namespace std;
class Student 
{
private:
	int id;
	int score;
public:
	Student(int i, int s) : id(i), score(s) {}
	void maxScore(Student stuarr[])
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 4-i; j++)
			{
				if (stuarr[j].score < stuarr[j + 1].score)
				{
					Student temp = stuarr[j];
					stuarr[j] = stuarr[j + 1];
					stuarr[j + 1] = temp;
				}
			}
		}
		cout << "The highest score is " << stuarr[0].score << ", Student ID: " << stuarr[0].id << endl;
	}
	
	

};
int main()
{
	Student stuarr[5] = { Student(1, 85), Student(2, 90), Student(3, 78),Student(4, 98),Student(5, 48) };
	stuarr[0].maxScore(stuarr);
	return 0;
}