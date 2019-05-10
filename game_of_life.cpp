#include<iostream>
#include<iomanip>

using namespace std;

bool full_checker(int r, int c, int orginial[r][c]); //creates function to check cell is if alive or dead (true or false)
void changer(int r, int c, int original[r][c]); //creates function to change grid values
const int row = 20, column = 20; //size of grid

int main()
{
    int x_coordinate, y_coordinate; //input for desired coordinates of cells
    char response, grid[row][column], temp_grid[row][column]; //creates grid and the backup grid

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            grid[i][j] = 'O'; //fills grid with '0's
            temp_grid[i][j] = grid[i][j]; //sets value of temporary grid to original grid
        }
    }

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            cout << setw(4) << grid[i][j]; //outputs grid
        }
    }


    cout << "Do you want to enter a live cell into the grid? (y/n) ";
    cin >> response;

    while (toupper(response) == 'Y') //when response is yes, will let you selct where you want new cell
    {
        cout << "Enter the x coordinate of the cell: ";
        cin >> x_coordinate;

        cout << "Enter the y coordinate of the cell: ";
        cin >> y_coordinate;

        grid[x_coordinate][y_coordinate] = 'X'; //marks where new cell is

        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < column; ++j)
            {
                cout << setw(4) << grid[i][j]; //outputs updated grid
            }
        }

        cout << "Do you want to enter another live cell into the grid? (y/n) ";
        cin >> response;
    }

    

    return 0;
}

bool full_checker(int r, int c, int orginial[r][c])
{
    int temp[r][c], counter;
    
    if(r == 0 && c == 0=){
        if(original[r][c + 1] == 'X'){
            ++counter;
        }
        if(original[r + 1][c] == 'X'){
            ++counter;
        }
        if(original[r + 1][c + 1] == 'X'){
            ++counter;
        }
    }
    else if(r == 19 && c == 0){
        if(original[r - 1][c] == 'X'){
            ++counter;
        }
        if(original[r - 1][c + 1] == 'X'){
            ++counter;
        }
        if(original[r][c + 1] == 'X'){
            ++counter;
        }
    }
    else if(r == 19 && c == 19){
        if(original[r][c - 1] == 'X'){
            ++counter;
        }
        if(original[r - 1][c - 1] == 'X'){
            ++counter;
        }
        if(original[r - 1][c] == 'X'){
            ++counter;
        }
    }
    else if(r == 0 && c == 19){
        if(original[r][c - 1] == 'X'){
            ++counter;
        }
        if(original[r + 1][c - 1] == 'X'){
            ++counter;
        }
        if(original[r + 1][c] == 'X'){
            ++counter;
        }
    }

    else{    
        if(original[r - 1][c - 1] == 'X'){
            ++counter;
        }
        if(original[r - 1][c] == 'X'){
            ++counter;
        }
        if(original[r - 1][c + 1] == 'X'){
            ++counter;
        }
        if(original[r][c - 1] == 'X'){
            ++counter;
        }
        if(original[r][c + 1] == 'X'){
            ++counter;
        }
        if(original[r + 1][c - 1] == 'X'){
            ++counter;
        }
        if(original[r + 1][c] == 'X'){
            ++counter;
        }
        if(original[r + 1][c + 1] == 'X'){
            ++counter;
        }
    }

    if(counter > 3 || counter < 2){
        return false;
    }
    else{
        return true;
    }    
}
    void changer(int r, int c, int original[r][c])
    {

    }