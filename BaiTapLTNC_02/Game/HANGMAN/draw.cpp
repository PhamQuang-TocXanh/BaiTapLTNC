#include"draw.h"

using namespace std;

const string getNextHangman(){
    const static string figure[] = {
    "   ------------+    \n"
    "   |    /           \n"
    "   |    O           \n"
    "   |   /|\\         \n"
    "   |   / \\         \n"
    "   |                \n"
    " -----      \n" ,
    "   ------------+     \n"
    "   |     |           \n"
    "   |     O           \n"
    "   |    /|\\         \n"
    "   |    / \\         \n"
    "   |        \n"
    " -----      \n",
    "   ------------+     \n"
    "   |      \\         \n"
    "   |      O          \n"
    "   |     /|\\        \n"
    "   |     / \\        \n"
    "   |      \n"
    " -----    \n",
    "   ------------+     \n"
    "   |     |           \n"
    "   |     O           \n"
    "   |    /|\\         \n"
    "   |    / \\         \n"
    "   |        \n"
    " -----      \n",
    };
    const int NUMBER_OF_FIGURES = sizeof(figure)/sizeof(string);
    static int currentFigure = 0;
    return figure[(currentFigure++)%NUMBER_OF_FIGURES];
}
const string getNextDancingman()
{
    const static string Figure[] = {
    "     O     \n"
    "    /|\\   \n"
    "    | |    \n",
    "     O     \n"
    "    /|\\   \n"
    "    / \\   \n",
    "   __O__   \n"
    "     |     \n"
    "    / \\   \n",
    "    \\O/   \n"
    "     |     \n"
    "    / \\   \n",
    "   __O__   \n"
    "     |     \n"
    "    / \\   \n",
    "     O     \n"
    "    /|\\   \n"
    "    / \\   \n" ,
    "    O      \n"
    "    /|\\   \n"
    "    / \\   \n" ,
    "     O     \n"
    "    /|\\   \n"
    "    / \\   \n" ,
    "      O    \n"
    "    /|\\   \n"
    "    / \\   \n" ,
    "     O     \n"
    "    /|\\   \n"
    "    / \\   \n" ,
    };
    const int NUMBER_OF_fIGURES = sizeof(Figure)/sizeof(string);
    static int currentfigure = 0;
    return Figure[(currentfigure++)%NUMBER_OF_fIGURES];
}

string randomWord(const string path){
    vector<string> word;
    int count=0;
    ifstream inF(path.c_str());
    if(inF.is_open()){
        while(!inF.eof()){
            string s;
            inF >> s; word.push_back(s); count++;
        }
    }else{
		cout << "Unable to open file!" << endl;
	}
	inF.close();
	if(word.size()<=0){
		cout << "File is empty!" << endl; return "";
	}
    return toLowerCase (word[rand()%count]);
}/////////////////////////////
char getPlayerGuess(){
	cout << "Enter your guess: ";
    char c; cin >> c;
	c = tolower(c);
	return c;
}/////////////////////////////
string updateWord(string hiden,string word, char c){
    for (int i=0;i<word.size();i++){
        if(word[i]==c){
            hiden[i]=c;
        }
    }
    return hiden;
}/////////////////////////////
void renderGame(string guessedWord, int badGuess){
    cout << figure[badGuess] ;
    cout << "Number of wrong guess: " << badGuess << endl
         << "Hiden word: " << guessedWord << endl;
}/////////////////////////////
bool contains(string word, char c){
	return (word.find_first_of(c) != string::npos);
}/////////////////////////////
void diplayResult(bool lost, string word){
    while(true){
        for(int i=0;i<30;i++) cout <<endl;
        if(lost){
            //cout << figure[7];
            cout << "You lost! "<<endl
                << "The secret word is: " << word <<endl;
        }else{
            cout << "Congratuation!!! You won\n"
                << "The secret word is: " << word <<endl;
        }
        cout << (lost ? getNextHangman() : getNextDancingman());
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}/////////////////////////////
void playGame(){
    string secretWord = randomWord(file);
    string hidenWord = string(secretWord.size(), '-');
    int badCountGuess=0 ;
    do{
        renderGame(hidenWord, badCountGuess);
        char guess = getPlayerGuess();
        if(contains(secretWord, guess)){
            hidenWord = updateWord(hidenWord, secretWord, guess);
        }else badCountGuess++;
    }while(badCountGuess<maxBadGuess && hidenWord!=secretWord);
    diplayResult(badCountGuess==7 , secretWord);
}/////////////////////////////
string toLowerCase(const string& s){
	string res = s;
	int sz = s.size();
	for(int i=0;i<sz;i++){
		res[i] = tolower(s[i]);
	}
	return res;
}

