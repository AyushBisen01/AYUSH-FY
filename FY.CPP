#include <iostream> //input and output header file
#include <string.h> //header file to use string opertion like copy,compare,length etc.
using namespace std; //after this no need to write std::cout or std::cin in every line.

int main() 
{
    char A; 
    char source[20];   // Declaration of string
cout<<"enter the string"<<endl; //calling to enter a input
cin>> source;   // storing input
int n;  // n for storing string length

int flage=0; //for checking non-repeated charter is found or not 
n=strlen(source); //strlen (strimg_name) is a function of string to find the length of string. i store the length of string in n so that it would be easier to decied how many time the loop need to run.
for(int i=0;i<n;i++) 
{
    A=source[i]; // storing the character of string of i position/index  in A.
int count=0; //for checking repeating element/character in string
    for(int j=0;j<n;j++)
    {
        if(i!=j && A==source[j]) // checking the condition for repeating charater. I compare here the charater of A with the source[j] 
        {
            count++;
            break;
        }
    }
    if(count==0) //IF THE count is not equal to zero then charcter is repeted.
    {
         cout << "The first non-repeating character is: " << source[i] << endl;
         flage=1;
         break;
    }
}
if(flage==0) //if flage is not equal to zero then non-repeating character is found
{
    cout << "All characters repeat in the string." << endl;
}
    return 0;
}