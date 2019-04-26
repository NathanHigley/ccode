//switch_2d.cpp
//compile g++ ifelse_2d.cpp

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		string word = "aeiou";
		int val = 0;
		int m[8][8] = {
			{0,1,2,3,4,0,0,0} ,
			{1,0,0,0,0,0,0,0} ,
			{2,0,0,0,0,0,0,0} ,
			{3,0,0,0,0,0,0,0} ,
			{4,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0}
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
				switch ( val ) {
				case 1:
					word = "aaa";
					break;
				case 2:
					word = "eee";
					break;
				case 3:
					word = "iii";
					break;
				default:
					word = "000";
					break;
				}
				cout<<word;
			}//end c
			cout<<"\n";
		}//end r
	return 0;
}
