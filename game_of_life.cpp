#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int row = 20, column = 20
    int x_coordinate, y_coordinate;
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