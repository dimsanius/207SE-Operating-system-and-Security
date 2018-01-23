#include <iostream> 
#include <string> 
#include <sstream> 

using namespace std; 

int main() 
{ 
	cout << "Enter string to analyze: ";
	//set up input string 
	string input = "I recognise above"; 

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
	int counter = 0;
	//Repeatedly put words in string array 
	for (int i = 0; currentstring.good(); i++)
	{
		counter++;
		currentstring >> word[i];
		cout << word[i] << endl;
	}
	
	//agent behaviour behaviour object
	for (int i = 0; i < sizeof(PersonWords) / sizeof(string); i++)
		if (word[0] == PersonWords[i] && counter == 4)
				for (int j = 0; j < sizeof(BehaviourWords) / sizeof(string); j++)
				if (word[1] == BehaviourWords[i])
									for (int z = 0; z < sizeof(BehaviourWords) / sizeof(string); z++)
						if (word[2] == BehaviourWords[i])
							for (int y = 0; y < sizeof(ObjectWords) / sizeof(string); y++)
								if (word[3] == ObjectWords[i])
								{
									cout << "Follows first rule." << endl;
									system("PAUSE");
									return 0;
								}

	//agent behaviour object
	for (int i = 0; i < sizeof(PersonWords) / sizeof(string); i++)
		if (word[0] == PersonWords[i] && counter == 3)
			for (int j = 0; j < sizeof(BehaviourWords)/sizeof(string); j++)
				if (word[1] == BehaviourWords[i])
					for (int z = 0; z < sizeof(ObjectWords) / sizeof(string); z++)
						if (word[2] == ObjectWords[i])
						{
							cout << "Follows second rule." << endl;
							system("PAUSE");
							return 0;
						}
						
	//agent action texture object
	for (int i = 0; i < sizeof(PersonWords) / sizeof(string); i++)
		if (word[0] == PersonWords[i] && counter == 4)
			for (int j = 0; j < sizeof(BehaviourWords) / sizeof(string); j++)
				if (word[1] == BehaviourWords[i])
					for (int z = 0; z < sizeof(TextureWords) / sizeof(string); z++)
						if (word[2] == TextureWords[i])
							for (int y = 0; y < sizeof(ObjectWords) / sizeof(string); y++)
								if (word[3] == ObjectWords[i])
								{
									cout << "Follows third rule." << endl;
									system("PAUSE");
									return 0;
								}

	//agent action position
	for (int i = 0; i < sizeof(PersonWords) / sizeof(string); i++)
		if (word[0] == PersonWords[i] && counter == 3)
			for (int j = 0; j < sizeof(BehaviourWords) / sizeof(string); j++)
				if (word[1] == BehaviourWords[i])
					for (int z = 0; z < sizeof(PositionWords) / sizeof(string); z++)
						if (word[2] == PositionWords[i])
						{
							cout << "Follows fourth rule." << endl;
							system("PAUSE");
							return 0;
						}

	//pronoun action object
	for (int i = 0; i < sizeof(PronounWords) / sizeof(string); i++)
		if (word[0] == PronounWords[i] && counter == 3)
			for (int j = 0; j < sizeof(BehaviourWords) / sizeof(string); j++)
				if (word[1] == BehaviourWords[i])
					for (int z = 0; z < sizeof(ObjectWords) / sizeof(string); z++)
						if (word[2] == ObjectWords[i])
						{
							cout << "Follows fifth rule." << endl;
							system("PAUSE");
							return 0;
						}

	//pronoun action position
	for (int i = 0; i < sizeof(PronounWords) / sizeof(string); i++)
		if (word[0] == PronounWords[i] && counter == 3)
			for (int j = 0; j < sizeof(BehaviourWords) / sizeof(string); j++)
				if (word[1] == BehaviourWords[i])
					for (int z = 0; z < sizeof(PositionWords) / sizeof(string); z++)
						if (word[2] == PositionWords[i])
						{
							cout << "Follows sixth rule." << endl;
							system("PAUSE");
							return 0;
						}

	system("PAUSE");
	return 0; 
}