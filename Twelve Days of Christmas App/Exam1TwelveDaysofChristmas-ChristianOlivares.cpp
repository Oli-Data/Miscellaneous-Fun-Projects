#include <iostream>
#include <iomanip>
using namespace std;

bool question();

int main(){

do{
int daysChristmas,verse,result;

    int i = 1;
 for (int i = 1; i<= 12; i++){

 result = i*1;
 verse = result;
 daysChristmas = result;

switch(daysChristmas){
case 1: cout << "On the first day of Christmas\n" << endl;
break;
case 2: cout << "\nOn the second day of Christmas\n" << endl;
break;
case 3: cout << "\nOn the third day of Christmas\n" << endl;
break;
case 4: cout << "\nOn the fourth day of Christmas\n" << endl;
break;
case 5: cout << "\nOn the fifth day of Christmas\n" << endl;
break;
case 6: cout << "\nOn the sixth day of Christmas\n"<< endl;
break;
case 7: cout << "\nOn the seventh day of Christmas\n" << endl;
break;
case 8: cout << "\nOn the eighth day of Christmas\n" << endl;
break;
case 9: cout << "\nOn the ninth day of Christmas\n" << endl;
break;
case 10: cout << "\nOn the tenth day of Christmas\n" << endl;
break;
case 11: cout << "\nOn the eleventh day of Christmas\n" << endl;
break;
case 12: cout << "\nOn the twelfth day of Christmas\n" << endl;
break;
}

switch(verse){
case 1: cout << "my true love sent to me: "
		"\n\nA Partridge in a Pear Tree" << endl;
break;
case 2: cout << "my true love sent to me: "
		"\n\nTwo Turtle Doves "
		"\n\nand a Partridge in a Pear Tree" << endl;
break;
case 3: cout << "my true love sent to me:"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree" << endl;
break;
case 4: cout << "my true love sent to me:"
		"\n\nFour Calling Birds*"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree" << endl;
break;
case 5: cout << "my true love sent to me:"
		"\n\nFive Golden Rings"
		"\n\nFour Calling Birds"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree" << endl;
break;
case 6: cout << "my true love sent to me:"
		"\n\nSix Geese a Laying"
		"\n\nFive Golden Rings"
		"\n\nFour Calling Birds"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree"<< endl;
break;
case 7: cout << "my true love sent to me:"
		"\n\nSeven Swans a Swimming"
		"\n\nSix Geese a Laying"
		"\n\nFive Golden Rings"
		"\n\nFour Calling Birds"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree" << endl;
break;
case 8: cout << "my true love sent to me:"
		"\n\nEight Maids a Milking"
		"\n\nSeven Swans a Swimming"
		"\n\nSix Geese a Laying"
		"\n\nFive Golden Rings"
		"\n\nFour Calling Birds"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree" << endl;
break;
case 9: cout << "my true love sent to me:"
		"\n\nNine Ladies Dancing\n\nEight Maids a Milking"
		"\n\nSeven Swans a Swimming"
		"\n\nSix Geese a Laying"
		"\n\nFive Golden Rings"
		"\n\nFour Calling Birds"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree" << endl;
break;
case 10: cout << "my true love sent to me:"
		"\n\nTen Lords a Leaping\n\nNine Ladies Dancing"
		"\n\nEight Maids a Milking\n\nSeven Swans a Swimming"
		"\n\nSix Geese a Laying\n\nFive Golden Rings"
		"\n\nFour Calling Birds\n\nThree French Hens"
		"\n\nTwo Turtle Doves\n\nand a Partridge in a Pear Tree" << endl;
break;
case 11: cout << "my true love sent to me:"
		"\n\nEleven Pipers Piping"
		"\n\nTen Lords a Leaping"
		"\n\nNine Ladies Dancing"
		"\n\nEight Maids a Milking"
		"\n\nSeven Swans a Swimming"
		"\n\nSix Geese a Laying"
		"\n\nFive Golden Rings"
		"\n\nFour Calling Birds"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree" << endl;
break;
case 12: cout << "my true love sent to me:"
		"\n\n12 Drummers Drumming\n\nEleven Pipers Piping"
		"\n\nTen Lords a Leaping"
		"\n\nNine Ladies Dancing"
		"\n\nEight Maids a Milking"
		"\n\nSeven Swans a Swimming"
		"\n\nSix Geese a Laying"
		"\n\nFive Golden Rings"
		"\n\nFour Calling Birds"
		"\n\nThree French Hens"
		"\n\nTwo Turtle Doves"
		"\n\nand a Partridge in a Pear Tree" << endl;

}
}
} while (question());
	return(0);
}

bool question(){
string userResponse;
cout << "\nWould like to run again (y or n): ";
cin >> userResponse;
cout << endl;

if(userResponse == "Yes" || userResponse == "yes" || userResponse == "y" || userResponse == "Y"){ return(true);
}
  else{ return(false);
    }
return(0);
}
