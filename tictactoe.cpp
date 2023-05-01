#include<iostream>
using namespace std;

char square[10]= {'0','1','2','3','4','5','6','7','8','9'};

int check_win()
{
	if(square[1] == square[2] && square[2] == square[3])
	{
		return 1;
	}
	else if(square[4] == square[5] && square[5] == square[6])
	{
		return 1;
	}
	else if(square[7] == square[8] && square[8] == square[9])
	{
		return 1;
	}

	else if(square[1] == square[4] && square[4] == square[7])
	{
		return 1;
	}
	else if(square[2] == square[5] && square[5] == square[8])
	{
		return 1;
	}
	else if(square[3] == square[6] && square[6] == square[9])
	{
		return 1;
	}
	else if(square[1] == square[5] && square[5] == square[9])
	{
		return 1;
	}
	else if(square[3] == square[5] && square[5] == square[7])
	{
		return 1;
	}

	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
	{
		return 0;
	}

	else
	{
		return -1;
	}
}

void board()
{
	cout<<"     |     |     "<<endl;
	cout<<"  "<<square[1]<<"  |  "<<square[2]<<"  |  "<<square[3]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<square[4]<<"  |  "<<square[5]<<"  |  "<<square[6]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<square[7]<<"  |  "<<square[8]<<"  |  "<<square[9]<<"  "<<endl;
	cout<<"     |     |     "<<endl;
}

void resetboard()
{
	square[1]='1';
	square[2]='2';
	square[3]='3';
	square[4]='4';
	square[5]='5';
	square[6]='6';
	square[7]='7';
	square[8]='8';
	square[9]='9';

}

int main()
{
	cout<<"Welcome to the TicTacToe game"<<endl<<endl;
	int user_choice=0;
	int player=1;
	int i;
	char playerchoice='0';
	int playernum=0;
	int playerwin=0;
	char mark='0';
	for(int i=0;i>-1;i++)
	{
		cout<<"Enter 1 to play , or enter 2 to exit.";
		cin>>user_choice;
		if(user_choice==1)
		{
			cout<<endl<<"Player 1 plays with X, Player 2 plays with O"<<endl<<endl;
			do
			{
				cout<<endl;
				board();
				if(player%2==1)
				{
					mark='X';
					playernum=1;
				}
				else if(player%2==0)
				{
					mark='O';
					playernum=2;
				}
				cout<<"Player "<<playernum<<"'s turn, Please enter a number from the board above"<<endl;
				cin>>playerchoice;
				if(playerchoice == '1' && square[1] == '1')
				{
					square[1]=mark;
					player++;
				}
				else if(playerchoice == '2' && square[2] == '2')
				{
					square[2]=mark;
					player++;
				}
				else if(playerchoice == '3' && square[3] == '3')
				{
					square[3]=mark;
					player++;
				}
				else if(playerchoice == '4' && square[4]=='4')
				{
					square[4]=mark;
					player++;
				}
				else if(playerchoice == '5' && square[5]=='5')
				{
					square[5]=mark;
					player++;
				}
				else if(playerchoice == '6' && square[6]=='6')
				{
					square[6]=mark;
					player++;
				}
				else if(playerchoice == '7' && square[7]=='7')
				{
					square[7]=mark;
					player++;
				}
				else if(playerchoice == '8' && square[8]=='8')
				{
					square[8]=mark;
					player++;
				}
				else if(playerchoice== '9' && square[9]=='9')
				{
					square[9]=mark;
					player++;
				}
				else
				{
					cout<<"invalid move"<<endl;
				}
				i=check_win();
			}
			while(i==-1);
			board();
			if(player%2==1)
			{
				playerwin=2;
			}
			else
			{
				playerwin=1;
			}
			if(i==1)
			{
				cout<<"Player "<<playerwin<<" wins"<<endl<<endl;
				resetboard();
			}
			else
			{
				cout<<"The game is draw"<<endl<<endl;
				resetboard();
			}
		}
		else if (user_choice==2)
		{
			cout<<"Thanks for trying the game"<<endl<<endl;
			break;
		}
		else
		{
			cout<<"Please enter a valid choice"<<endl<<endl;
		}
	}
	return 0;
}
