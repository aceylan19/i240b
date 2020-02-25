#include <iostream>
#include <fstream>

#include <algorithm>
#include <map>
#include <string>

using namespace std;
bool countwords(char* argv[],int MAX_OUT, int MIN_WORD, int MAX_WORD){
	ifstream FILE(argv[4]);

	int OUT;
        map<std::string, unsigned int> WORDS_AMOUNTS;
	std::string current_word;

        while (FILE >> current_word) {
		std::string temporary_word;
		for(char& C : temporary_word) {
			if('A'<=C && C<='Z') {
				C+=32;}
			if('a'<=C && C<='z') {
				C=C;}
			else {
				current_word.erase(std::remove(current_word.begin(), current_word.end(),C), current_word.end());}
		}
		if(current_word.length() >= MIN_WORD){
			if(current_word.length() <= MAX_WORD){       
 				if (!(WORDS_AMOUNTS.find(current_word) == WORDS_AMOUNTS.end())){
					WORDS_AMOUNTS[current_word]+=1;}
        			else {
					OUT+=1;
					WORDS_AMOUNTS[current_word] = 1;}
			}
		}
        }

	if ( MAX_OUT < OUT ) { printf("Too many words.\n"); return 0; }
        

        map<std::string, unsigned int>::iterator counter;
        for (counter = WORDS_AMOUNTS.begin(); counter != WORDS_AMOUNTS.end(); counter++) cout << counter->first <<": "<< counter->second << "\n";
	return 0;
}


int main(int argc, char* argv[]){
	ifstream FILE(argv[4]);

	if (!FILE) {
		printf("No file given.\n");
	}

	std::string MAX_OUT_STR = argv[1];
	std::string MIN_WORD_STR = argv[2];
	std::string MAX_WORD_STR = argv[3];

	size_t MAX_OUT_SIZE,MIN_WORD_SIZE,MAX_WORD_SIZE;

	int MAX_OUT = std::stoi(argv[1],&MAX_OUT_SIZE);
	int MIN_WORD = std::stoi(argv[2],&MIN_WORD_SIZE);
	int MAX_WORD = std::stoi(argv[3],&MAX_WORD_SIZE);
	
	if (MAX_OUT_SIZE!=MAX_OUT_STR.length()) {
		cout<<"Bad integer value "<< MAX_OUT_STR <<" for MAX_N_OUT"<<endl;
		return 0;
	}
	if (MIN_WORD_SIZE!=MIN_WORD_STR.length()) {
		cout<<"Bad integer value "<< MIN_WORD_STR <<" for MAX_N_OUT"<<endl;
		return 0;
	}
	if (MAX_WORD_SIZE!=MAX_WORD_STR.length()) {
		cout<<"Bad integer value "<< MAX_WORD_STR <<" for MAX_N_OUT"<<endl;
		return 0;
	}
	if (MIN_WORD > MAX_WORD) {
		cout<<"MIN_WORD_LEN value: "<< MIN_WORD_STR <<" > MAX_WORD_LEN value: " << MAX_WORD_STR <<endl;
		return 0;
	}

	countwords(argv, MAX_OUT, MIN_WORD, MAX_WORD);
	return 0;
}
