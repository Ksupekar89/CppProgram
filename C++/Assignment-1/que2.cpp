//Write a C program to print all natural numbers in reverse (from n to 1). -Using while loop
#include<iostream>

using namespace std;

int main(){


    int n;

    cout << "Enter the Number of N."<< endl;
    cin >> n;

int i=n;

 cout << "The Number is  :"<< endl;

  while(i>=1){

    cout << i <<endl;

    i--;
  }


    return 0;
}