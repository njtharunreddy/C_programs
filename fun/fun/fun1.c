#include<stdio.h>
struct emp
{
	int id;
	float sal;
	char dept;
};
struct emp s1;
void assign()
{
	s1.id=123;
	s1.sal=4567.8f;
	s1.dept='w';
}
void display()
{
	printf("id is %d\n",s1.id);
	printf("sal is %f\n",s1.sal);
	printf("dept is %c\n",s1.dept);

}

int main()
{
struct emp s1;
assign();
dsiplay();
s1.id=23;
s1.sal=234.5f;
s1.dept='d';
display();
}