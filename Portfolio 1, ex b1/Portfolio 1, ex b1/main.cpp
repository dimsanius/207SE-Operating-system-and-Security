#include <iostream> 
#include <string> 
#include <sstream> 

using namespace std; 

int main() 
{ 
	cout << "Enter string to analyze: ";
	//set up input string 
	string input = "Nao recognise car"; 

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
	int counter = 0;
	//Repeatedly put words in string array 
	for (int i = 0; currentstring.good(); i++)
	{
		counter++;
		currentstring >> word[i];
		cout << word[i] << endl;
	}
	

	for (int i = 0; i < sizeof(PersonWords); i++)
		if (word[0] == PersonWords[i] && counter == 3)
			for (int j = 0; j < sizeof(BehaviourWords); j++)
				if (word[1] == BehaviourWords[i])
					for (int z = 0; z < sizeof(ObjectWords); z++)
						if (word[2] == ObjectWords[i])
						{
							cout << "Follows first rule." << endl;
							system("PAUSE");
							return 0;
						}
							


	system("PAUSE");
	return 0; 
}