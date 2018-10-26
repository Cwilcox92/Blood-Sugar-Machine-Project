//Carlton Wilcox 
//COSC 2030
//Project_1
//10-26-18
//The comments help clarify any confusing parts as well as providing citation to borrowed code.




#include <iostream>
#include <string>
#include "List.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int Delta1();
int Delta2();
int in = 1;
int dayLimit = 0;
List Day1;
List Day2;
List Day3;
List Day4;
List Day5;
List Day6;
List Day7;
List Day8;
List Day9;
List Day10;
List Day11;
List Day12;
List Day13;
List Day14;
List Week1;
List Week2;
string input;

int main()
{
	dayLimit++;
	if (dayLimit == 1)
	{


		cout << "   \\\\\\\Blood Sugar Device//   " << endl;
		cout << "Enter the letter 'D' or the word 'Day' once finished entering data for the daily summary: " << endl;
		cout << "Enter the letter 'N' or the word 'Next' once finished entering data to increment to the next day: " << endl;
		cout << "Enter the letter 'W' or the word 'Week' once finished entering data for the weekly summary: " << "\n" << endl;
	}
		cout << endl<< "Enter the Data: " << "\n";
	
	do
	{
		cin >> input;
		if (input == "D" || input== "d" ||input== "day" || input=="Day")
		{
			if (dayLimit == 1)
			{
				Day1.deleteNode(0);
				cout << "This is the max for the Day: " << Day1.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day1.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day1.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day1.ValidCount() << "\n";
			}
			else if (dayLimit == 2)
			{
				Day2.deleteNode(0);
				cout << "This is the max for the Day: " << Day2.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day2.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day2.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day2.ValidCount() << "\n";
			}
			else if (dayLimit == 3)
			{
				Day3.deleteNode(0);
				cout << "This is the max for the Day: " << Day3.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day3.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day3.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day3.ValidCount() << "\n";
			}
			else if (dayLimit == 4)
			{
				Day4.deleteNode(0);
				cout << "This is the max for the Day: " << Day4.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day4.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day4.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day4.ValidCount() << "\n";
			}
			else if (dayLimit == 5)
			{
				Day5.deleteNode(0);
				cout << "This is the max for the Day: " << Day5.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day5.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day5.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day5.ValidCount() << "\n";
			}
			else if (dayLimit == 6)
			{
				Day6.deleteNode(0);
				cout << "This is the max for the Day: " << Day6.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day6.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day6.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day6.ValidCount() << "\n";
			}
			else if (dayLimit == 7)
			{
				Day7.deleteNode(0);
				cout << "This is the max for the Day: " << Day7.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day7.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day7.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day7.ValidCount() << "\n";
			}
			else if (dayLimit == 8)
			{
				Day8.deleteNode(0);
				cout << "This is the max for the Day: " << Day8.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day8.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day8.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day8.ValidCount() << "\n";
			}
			else if (dayLimit == 9)
			{
				Day9.deleteNode(0);
				cout << "This is the max for the Day: " << Day9.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day9.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day9.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day9.ValidCount() << "\n";
			}
			else if (dayLimit == 10)
			{
				Day10.deleteNode(0);
				cout << "This is the max for the Day: " << Day10.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day10.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day10.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day10.ValidCount() << "\n";
			}
			else if (dayLimit == 11)
			{
				Day11.deleteNode(0);
				cout << "This is the max for the Day: " << Day11.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day11.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day11.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day11.ValidCount() << "\n";
			}
			else if (dayLimit == 12)
			{
				Day12.deleteNode(0);
				cout << "This is the max for the Day: " << Day12.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day12.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day12.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day12.ValidCount() << "\n";
			}
			else if (dayLimit == 13)
			{
				Day13.deleteNode(0);
				cout << "This is the max for the Day: " << Day13.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day13.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day13.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day13.ValidCount() << "\n";
			}
			else if (dayLimit == 14)
			{
				Day14.deleteNode(0);
				cout << "This is the max for the Day: " << Day14.MaxNum() << "\n";
				cout << "This is the min for the Day: " << Day14.MinNum() << "\n";
				cout << "This is the sum for the Day: " << Day14.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Day14.ValidCount() << "\n";
			}
		}
		else if (input == "W" || input == "Week" || input == "w" || input == "week")
		{
			if (dayLimit <= 7)
			{
				cout << "This is the max for the Week: " << Week1.MaxNum() << "\n";
				cout << "This is the min for the Week: " << Week1.MinNum() << "\n";
				cout << "This is the sum for the Week: " << Week1.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Week1.ValidCount() << "\n";
				cout << "Day " << Delta1() << " saw the biggest change from the prior day." << "\n";
			}
			
			else
			{
				cout << "This is the max for the Week2: " << Week2.MaxNum() << "\n";
				cout << "This is the min for the Week2: " << Week2.MinNum() << "\n";
				cout << "This is the sum for the Week2: " << Week2.Sum() << "\n";
				cout << "This is the count of VALID inputs: " << Week2.ValidCount() << "\n";
				cout << "Day " << Delta2() << " saw the biggest change from the prior day." << "\n";
			}
		}
		else if (input == "N" || input == "n" || input == "next" || input == "Next")
		{  
			cout << "A new day has been created.\n";
			break;
		}
		else
		{

			in = stoi(input);
			if (dayLimit == 1)
			{
				Day1.addNode(in);
				Week1.addNode(in);
			}
			else if (dayLimit == 2)
			{
				Day2.addNode(in);
				Week1.addNode(in);
			}
			else if (dayLimit == 3)
			{
				Day3.addNode(in);
				Week1.addNode(in);
			}
			else if (dayLimit == 4)
			{
				Day4.addNode(in);
				Week1.addNode(in);
			}
			else if (dayLimit == 5)
			{
				Day5.addNode(in);
				Week1.addNode(in);
			}
			else if (dayLimit == 6)
			{
				Day6.addNode(in);
				Week1.addNode(in);
			}
			else if (dayLimit == 7)
			{
				Day7.addNode(in);
				Week1.addNode(in);
			}
			else if (dayLimit == 8)
			{
				Day8.addNode(in);
				Week2.addNode(in);
			}
			else if (dayLimit == 9)
			{
				Day9.addNode(in);
				Week2.addNode(in);
			}
			else if (dayLimit == 10)
			{
				Day10.addNode(in);
				Week2.addNode(in);
			}
			else if (dayLimit == 11)
			{
				Day11.addNode(in);
				Week2.addNode(in);
			}
			else if (dayLimit == 12)
			{
				Day12.addNode(in);
				Week2.addNode(in);
			}
			else if (dayLimit == 13)
			{
				Day13.addNode(in);
				Week2.addNode(in);
			}
			else if (dayLimit == 14)
			{
				Day14.addNode(in);
				Week2.addNode(in);
			}
		}
	} while (1);

		if (dayLimit != 14)
		{
			main();
		}
			
	system("pause");
return 0;
}
	

int Delta1()
{
	int biggerNum = 0;

	if (Day2.ValidCount() - Day1.ValidCount() > biggerNum)
	{
		biggerNum = Day2.ValidCount() - Day1.ValidCount();
		
	}
	 if (Day3.ValidCount() - Day2.ValidCount() > biggerNum)
	{
		biggerNum = Day3.ValidCount() - Day2.ValidCount();
		
	}
	 if (Day4.ValidCount() - Day3.ValidCount() > biggerNum)
	{
		biggerNum = Day4.ValidCount() - Day3.ValidCount();
		
	}
	 if (Day5.ValidCount() - Day4.ValidCount() > biggerNum)
	 {
		 biggerNum = Day5.ValidCount() - Day4.ValidCount();
		
	 }
	 if (Day6.ValidCount() - Day5.ValidCount() > biggerNum)
	{
		biggerNum = Day6.ValidCount() - Day5.ValidCount();
		
	}
    if (Day7.ValidCount() - Day6.ValidCount() > biggerNum)
	{
		biggerNum = Day7.ValidCount() - Day6.ValidCount();
		
	}
	return biggerNum;
	
} 

int Delta2()
{
	int biggerNum1 = 0;

	if (Day8.ValidCount() - Day7.ValidCount() > biggerNum1)
	{
		biggerNum1 = Day8.ValidCount() - Day7.ValidCount();
	}
    if (Day9.ValidCount() - Day8.ValidCount() > biggerNum1)
	{
		biggerNum1 = Day9.ValidCount() - Day8.ValidCount();
	}
    if (Day10.ValidCount() - Day9.ValidCount() > biggerNum1)
	{
		biggerNum1 = Day10.ValidCount() - Day9.ValidCount();
	}
    if (Day11.ValidCount() - Day10.ValidCount() > biggerNum1)
	{
		biggerNum1 = Day11.ValidCount() - Day10.ValidCount();
	}
    if (Day12.ValidCount() - Day11.ValidCount() > biggerNum1)
	{
		biggerNum1 = Day12.ValidCount() - Day11.ValidCount();
	}
	 if (Day13.ValidCount() - Day12.ValidCount() > biggerNum1)
	{
		biggerNum1 = Day13.ValidCount() - Day12.ValidCount();
	}
	 if (Day14.ValidCount() - Day13.ValidCount() > biggerNum1)
	{
		biggerNum1 = Day14.ValidCount() - Day13.ValidCount();
	}

	return biggerNum1;
}