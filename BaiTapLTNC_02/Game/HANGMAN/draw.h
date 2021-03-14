#pragma once
#include<thread>
#include<chrono>
#include<vector>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<cstring>

const std::string file = "in.txt";
const int maxBadGuess = 7;
const std::string figure[]={
	"-------------   \n"
	" |              \n"
	" |              \n"
	" |              \n"
	" |              \n"
	" |              \n"
	" |              \n"
	"***             \n",
	"-------------   \n"
	" |        |     \n"
	" |              \n"
	" |              \n"
	" |              \n"
	" |              \n"
	" |              \n"
	"***             \n",
	"-------------   \n"
	" |        |     \n"
	" |        0     \n"
	" |              \n"
	" |              \n"
	" |              \n"
	" |              \n"
	"***             \n",
	"-------------   \n"
	" |        |     \n"
	" |        0     \n"
	" |        |     \n"
	" |              \n"
	" |              \n"
	" |              \n"
	"***             \n",
	"-------------   \n"
	" |        |     \n"
	" |        0     \n"
	" |       /|     \n"
	" |              \n"
	" |              \n"
	" |              \n"
	"***             \n",
	"-------------   \n"
	" |        |     \n"
	" |        0     \n"
	" |       /|\\   \n"
	" |              \n"
	" |              \n"
	" |              \n"
	"***             \n",
	"-------------   \n"
	" |        |     \n"
	" |        0     \n"
	" |       /|\\   \n"
	" |       /      \n"
	" |              \n"
	" |              \n"
	"***             \n",
	"-------------   \n"
	" |        |     \n"
	" |        0     \n"
	" |       /|\\   \n"
	" |       / \\   \n"
	" |              \n"
	" |              \n"
	"***             \n"
};
std::string randomWord();
char getPlayerGuess();
std::string updateWord(std::string hiden,std::string word, char c);
void renderGame(std::string guessedWord, int badGuess);
bool contains(std::string word, char c);
void diplayResult(bool lost, std::string word);
void playGame();
std::string toLowerCase(const std::string& s);

