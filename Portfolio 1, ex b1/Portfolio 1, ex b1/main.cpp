#include <iostream> 
#include <string> 
#include <sstream> 

using namespace std; 

int main() 
{ 
	//set up input string 
	string input="bot pick ball"; 
	//initalise input stream string
	stringstream currentstring(input); 
	int count=-1; 
	string word[10];
	//Repeatedly put words in string array 
	while (currentstring.good())
	{
		count=count+1; 
		currentstring >> word[count]; 
	} 
	return 0; 
}