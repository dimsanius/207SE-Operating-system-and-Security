#include <iostream> 
#include <string> 
#include <sstream> 

using namespace std; 

int main() 
{ 
	cout << "Enter string to analyze: ";
	//set up input string 
	string input = "bot pick ball"; 

	//initalise input stream string
	stringstream currentstring(input);
	
	string word[10] = {};

	//predefined vocabulary
	string PersonWords[] = { "Nao", "Shila" };
	string BehaviourWords[] = {"recognise", "detect", "avoid", "replace"};
	string PositionWords[] = { "above", "below", "left", "right" };
	string PronounWords[] = { "I", "you", "they" };
	string ObjectWords[] = { "car", "person", "dog", "diamond" };
	string TextureWords[] = { "smooth", "dimpled", "rough" };
	bool followsTheRule = true;
	//Repeatedly put words in string array 
	for (int i = 0; currentstring.good() && followsTheRule; i++)
	{
		currentstring >> word[i];
		cout << word[i] << endl;
	}
	cout << currentstring.seekp();
	//if(word[0] == PersonWords[i])
	//for(int i = 0; i < word->length; i++)
	system("PAUSE");
	return 0; 
}