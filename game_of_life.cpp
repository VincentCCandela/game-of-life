#include<iostream>
#include<iomanip>

using namespace std;

bool checker(int r, int c, int orginial[r][c], int orginial[r][c], int cl);

int main()
{
    int row = 20, column = 20, grid[row][column], temp_grid[row][column];
    bool cell;
    
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            checker(r,c,cl,orginial[r][c]),orginial[r][c]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << grid[i][j];
        }
    }

    return 0;
}

bool checker(int r, int c, int orginial[r][c], int temp[r][c], int cl)
{
    original[i][j]

    if(cl == true)
    {
        if(number of neighbors is 2 or 3)
        {
             return true;
        }
        else
        {
             return false;
        }
                
        }
    else
    {
        if(number of neighbors is exactly 3)
        {
            return true;
        }
        else
        {
                    return false;
        }
    }
}