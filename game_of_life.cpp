#include<iostream>
#include<iomanip>

using namespace std;

bool checker(int r, int c, int orginial[r][c], int temp[r][c], int cl);

int main()
{
    const int row = 20, column = 20
    int x_coordinate, y_coordinate;
    int cell;
    char response, grid[row][column], temp_grid[row][column];

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            grid[i][j] = 'O';
            temp_grid[i][j] = grid[i][j];
        }
    }

    cout << "Do you want to enter a live cell into the grid? (y/n) ";
    cin >> response;

    while (toupper(response) == 'Y')
    {
        cout << "Enter the x coordinate of the cell: "
        cin >> x_coordinate;

        cout << "Enter the y coordinate of the cell: "
        cin >> y_coordiante;

        grid[x_coordinate][  20 - y_coordinate ] = 'X'

        cout << "Do you want to enter another live cell into the grid? (y/n) ";
        cin >> response;
    }

    return 0;
}

bool checker(int r, int c, int orginial[r][c], int temp[r][c], int cl)
{
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


original[i][j-1] , original[i][j+1], original[i-1][j-1], original[i-1][j], original[i-1][j+1], original[i+1][j-1], original[i+1][j], original[i+1][j+1]