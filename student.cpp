#include <iostream>
using namespace std;
int main()
{
	int mark;
	
		cout<<"Enter student's mark: ";

		cin>>mark;

		if(mark <=24 && mark >= 0) 
		{
			cout<<"Student grade is F";
		}
		else if (mark <= 29 && mark >= 25)
		{
			cout<<"Student grade is E";
		}
		else if (mark <= 44 && mark >= 30)
		{
			cout<<"Student grade is D";			
		}
		else if (mark <= 49 && mark >= 45)
		{
			cout<<"Student grade is D+";
		}
		else if (mark <= 64 && mark >= 50)
		{
			cout<<"Student grade is C";			
		}
		else if (mark <= 69 && mark >= 65)
		{
			cout<<"Student grade is C+";			
		}
		else if (mark <= 74 && mark >= 70)
		{
			cout<<"Student grade is B";			
		}
		else if (mark <= 79 && mark >= 75)
		{
			cout<<"Student grade is B+";			
		}
		else
		{
			cout<<"Student grade is A";			
		}
		
return 0;

}
