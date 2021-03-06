#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);
int itc_countWords(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_slice_str(string str, int start, int ending);
long itc_len(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
double itc_pow(long long num, long long n);
long long itc_abs(long long num);
string itc_DecToBin(string str);
string itc_decToBase(int num, int base);

#endif // MIDDLE_STR_H_INCLUDED
