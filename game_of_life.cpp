#include<iostream>
#include<iomanip>

using namespace std;

const int row = 20, column = 20; //size of grid
int full_checker(int r, int c, int orginial[row][column]); //creates function to check cell is if alive or dead (true or false)
void changer(int r, int c, int original[row][column]); //creates function to change grid values

int main()
{
    int x_coordinate, y_coordinate; //input for desired coordinates of cells
    char response, reponse2, grid[row][column], temp_grid[row][column]; //creates grid, response1, and reponse2

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            grid[i][j] = 'O'; //fills grid with '0's
        }
    }

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            cout << setw(4) << grid[i][j]; //outputs the grid
        }
    }

    cout << "Do you want to enter a live cell into the grid? (y/n) ";
    cin >> response2;

    while(toupper(response2) == 'Y')
    {
        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < column; ++j)
            {
                changer(r,c,original[r][c]); //calls changer function for grid
            }
        }

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

        cout << "Do you want to go to the next day?";
        cin >> response2;
    }

    cout << endl;

    cout << "Thanks for playing!" << endl;

    return 0;
}

int full_checker(int r, int c, int original[][column]){
    int counter;
    if(r == 0 && c == 0){
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
    else if(r == 0){
        if(original[r + 1][c] == 'X'){
            ++counter;
        }
        if(original[r + 1][c - 1] == 'X'){
            ++counter;
        }
        if(original[r + 1][c + 1] == 'X'){
            ++counter;
        }
        if(original[r][c + 1] == 'X'){
            ++counter;
        }
        if(original[r][c - 1] == 'X'){
            ++counter;
        }
    }
    else if(r == 19){
        if(original[r - 1][c] == 'X'){
            ++counter;
        }
        if(original[r - 1][c + 1] == 'X'){
            ++counter;
        }
        if(original[r - 1][c - 1] == 'X'){
            ++counter;
        }
        if(original[r][c + 1] == 'X'){
            ++counter;
        }
        if(original[r][c - 1] == 'X'){
            ++counter;
        }
    }
    else if(c == 0){
        if(original[r][c + 1] == 'X'){
            ++counter;
        }
        if(original[r - 1][c + 1] == 'X'){
            ++counter;
        }
        if(original[r + 1][c + 1] == 'X'){
            ++counter;
        }
        if(original[r - 1][c] == 'X'){
            ++counter;
        }
        if(original[r + 1][c] == 'X'){
            ++counter;
        }
    }
    else if(c == 19){
        if(original[r][c - 1] == 'X'){
            ++counter;
        }
        if(original[r - 1][c - 1] == 'X'){
            ++counter;
        }
        if(original[r + 1][c - 1] == 'X'){
            ++counter;
        }
        if(original[r - 1][c] == 'X'){
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

        if(counter  == 3){
            return 3;
        }
        else if(counter == 2) {
            return 2;
        }
        else if (couter > 3){
            return 4;
        }
        else{
            return 1;
        }
    }
}

void changer(int r, int c, char grid[][column], char temp_array[][column])
{
    if(grid[r][c] == 'O' && ( checker(r,c,grid) == 3 || checker(r,c,grid) == 2 )
    {
        temp_array[r][c] = 'X';
    }
    else if(grid[r][c] == 'X' && (checker(r,c,grid) == 4 || checker(r,c,grid) == 1) ) //sets all false values to showing no cell(dead)
    {
        temp_array[r][c] = 'O';
    }
}