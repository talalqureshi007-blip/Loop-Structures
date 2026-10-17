#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, count=0;
	cout<<"Enter a number: ";
	cin>>n;
	if(n==0)
	{
		count=1;
	}
	else
	{
		while(n!=0)
		{
			n=n/100;
			count++;
		}
	}
	cout<<"Digits ="<<count;
	return 0;
}
