//30/1/26
//aes
//Determine if a triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;

double vlue(double &tall1, double &tall2, double &tall3)//input the vlu
{
	cin>>tall1>>tall2>>tall3;
}



double check(double tall1 ,double tall2 ,double tall3)  //check if it is triangle use [exit(0)] to end app
{
	if (tall1>=0&&tall2>=0&&tall3>=0)
		{
			cout<<"is triangle";
		}
	else
	{
		cout<<"is not a tringle";
		exit(0);
	}
}


double type(double tall1 ,double tall2 ,double tall3)//know type of triangle
{
	if(tall1==tall2==tall3)
		{
			cout<<"is a Equilateral";
			}	
	else if(tall3==tall1||tall3==tall2||tall2==tall1)
		{
			cout<<"ia a Isosceles";
		}
	else
		{
			cout<<"is a Scalene";
			}	
}

int main()//work app
{
//massge for uoser
cout<<"enter your triangle vlue"<<endl;
	double num1,num2,num3;
//ask value funcson to come
	vlue(num1,num2,num3);
//do output for chekc funcson
	cout<<check(num1,num2,num3)<<endl;
//do output for type funcson
	cout<<"your triangle type ";
	cout<<type(num1,num2,num3);
return 0;
}

