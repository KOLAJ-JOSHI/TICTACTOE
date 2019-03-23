/*
-> display the 3 x 3 matrix as 1 2 3
                               4 5 6    (display function)
                               7 8 9

-> place X or O according  to their turn as input   (input function )

-> Chantge the  player turn using playerchange function

-> Check for win or draw through win function
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

char table[3][3]={'1','2','3','4','5','6','7','8','9'};

char player='X';

int n;

void display()
{
    system("cls");
    cout<<"\n\tT I C T A C T O E\n\n";
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"\t"<<table[i][j];
        }
        cout<<endl;
    }
}
void input()
{
    int a;
    cout<<endl<<player<<"'s turn. Enter the number\n";
    cin>>a;
        if (a==1)
        {
            if (table[0][0]=='1')
                table[0][0]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }

        else if (a==2)
        {
            if (table[0][1]=='2')
                table[0][1]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }
        else if (a==3)
        {
            if (table[0][2]=='3')
                table[0][2]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }

        else if (a==4)
        {
            if (table[1][0]=='4')
                table[1][0]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }
        else if (a==5)
        {
            if (table[1][1]=='5')
                table[1][1]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }
        else if (a==6)
        {
            if (table[1][2]=='6')
                table[1][2]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }

        else if (a==7)
        {
            if (table[2][0]=='7')
                table[2][0]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }
        else if (a==8)
        {
            if (table[2][1]=='8')
                table[2][1]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }
        else if (a==9)
        {
            if (table[2][2]=='9')
                table[2][2]=player;
            else
            {
                cout<<"\n\t\t Number is already occupied";
                input();
            }
        }
}

void playerchange()
{
    if (player=='X')
        player='O';
    else
        player='X';
}
char win()
{
    if (table[0][0]=='X' && table[0][1]=='X' && table[0][2]=='X')
        return 'X';
    if (table[1][0]=='X' && table[1][1]=='X' && table[1][2]=='X')
        return 'X';
    if (table[2][0]=='X' && table[2][1]=='X' && table[2][2]=='X')
        return 'X';
    if (table[0][0]=='X' && table[1][0]=='X' && table[2][0]=='X')
        return 'X';
    if (table[0][1]=='X' && table[1][1]=='X' && table[2][1]=='X')
        return 'X';
    if (table[0][2]=='X' && table[1][2]=='X' && table[2][2]=='X')
        return 'X';
    if (table[0][0]=='X' && table[1][1]=='X' && table[2][2]=='X')
        return 'X';
    if (table[2][0]=='X' && table[1][1]=='X' && table[0][2]=='X')
        return 'X';

    if (table[0][0]=='O' && table[0][1]=='O' && table[0][2]=='O')
        return 'O';
    if (table[1][0]=='O' && table[1][1]=='O' && table[1][2]=='O')
        return 'O';
    if (table[2][0]=='O' && table[2][1]=='O' && table[2][2]=='O')
        return 'O';
    if (table[0][0]=='O' && table[1][0]=='O' && table[2][0]=='O')
        return 'O';
    if (table[0][1]=='O' && table[1][1]=='O' && table[2][1]=='O')
        return 'O';
    if (table[0][2]=='O' && table[1][2]=='O' && table[2][2]=='O')
        return 'O';
    if (table[0][0]=='O' && table[1][1]=='O' && table[2][2]=='O')
        return 'O';
    if (table[2][0]=='O' && table[1][1]=='O' && table[0][2]=='O')
        return 'O';

    return '/';

}
int main ()
{
    display();
    while (1)
    {
        n++;
        input();
        display();

        if (win()=='X')
        {
            cout<<"\n\t\tX wins!\n";
            break;
        }
        else if (win()=='O')
        {
            cout<<"\n\t\tO wins\n";
            break;
        }
        else if (win()=='/' && n==9)
        {
            cout<<"\n\t\tIt's a draw \n";
            break;
        }
        playerchange();
    }
    system("pause");
    return 0;
}
