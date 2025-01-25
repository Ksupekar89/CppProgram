//Write a C program to print all even numbers between 1 to 100. - usingWhile loop

#include<iostream>

using namespace std;

int main(){

   int n;

    cout << "Enter the Number of N."<< endl;
    cin >> n;



 cout << "The Number is  :"<< endl;
 int i=2;

    while(i <=n){

        
        if(i % 2 ==0){

            printf("%d \n",i);


        } 

        i++;

    }
    return 0;
}