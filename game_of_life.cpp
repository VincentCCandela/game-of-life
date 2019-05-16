#include<iostream>
#include<iomanip>

using namespace std;

<<<<<<< HEAD
const int row = 20, column = 20; //size of grid
int checker(int r, int c, char orginial[row][column]); //creates function to check cell is if alive or dead (true or false)
void changer(int r, int c, char grid[][column], char temp_grid[][column]);
=======
int full_checker(int r, int c, int orginial[row][column]); //creates function to check cell is if alive or dead (true or false)
bool full_checker(int r, int c, int orginial[row][column]); //creates function to check cell is if alive or dead (true or false)
void changer(int r, int c, int original[row][column]); //creates function to change grid values
const int row = 20, column = 20; //size of grid
>>>>>>> bfee452532fd783e48e67e8637d4cebb48322461

int main()
{
    int x_coordinate, y_coordinate; //input for desired coordinates of cells
<<<<<<< HEAD
    char response, response2, grid[row][column], temp_grid[row][column]; //creates grid, response1, and reponse2
=======
    char response, reponse2, grid[row][column]; //creates grid, response1, and reponse2
>>>>>>> bfee452532fd783e48e67e8637d4cebb48322461

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
            cout << setw(4) << grid[i][j]; //outputs grid
        }
    }

<<<<<<< HEAD
    cout << "Do you want to enter a live cell into the grid? (y/n) ";
    cin >> response;
=======
    cout << "Do you want to play?";
    cin >> response2;

    while(toupper(response2) == 'Y') //while answer is yes, program will coninue running(days)
    {
        cout << "Do you want to enter a live cell into the grid? (y/n) "; //asks if you want to add cell
        cin >> response;
>>>>>>> bfee452532fd783e48e67e8637d4cebb48322461

    do{
        while (toupper(response) == 'Y') //when response is yes, will let you selct where you want new cell
        {
<<<<<<< HEAD
            cout << "Enter the x coordinate of the cell: ";
=======
            cout << "Enter the x coordinate of the cell: "; //input for x coordinate
>>>>>>> bfee452532fd783e48e67e8637d4cebb48322461
            cin >> x_coordinate;

            cout << "Enter the y coordinate of the cell: "; //input for y coordinate
            cin >> y_coordinate;

            grid[x_coordinate][y_coordinate] = 'X'; //marks where new cell is

            for(int i = 0; i < row; ++i)
            {
                for(int j = 0; j < column; ++j)
                {
                    cout << setw(4) << grid[i][j]; //outputs updated grid
                    temp_grid[i][j] = grid[i][j];
                }
            }

            cout << "Do you want to enter another live cell into the grid? (y/n) ";
            cin >> response;
        }

<<<<<<< HEAD
        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < column; ++j)
            {
                changer(i,j,grid,temp_grid); //calls changer function for grid
            }
        }

        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < column; ++j)
            {
                grid[i][j] = temp_grid[i][j];            
                cout << setw(4) << grid[i][j]; //outputs updated grid
            }
        }
=======
            for(int i = 0; i < row; ++i)
            {
                for(int j = 0; j < column; ++j)
                {
                   changer(r,c,original[r][c]); //calls changer function for grid
                }
            }

        cout << "Do you want to go to the next day?";
        cin >> response2;
    }
>>>>>>> bfee452532fd783e48e67e8637d4cebb48322461

        cout << "Do you want to go to the next day? (y/n)";
        cin >> response2;
        
    } while(toupper(response2) == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}

<<<<<<< HEAD
int checker(int r, int c, char original[][column]){
=======
int full_checker(int r, int c, int original[][column])
{
>>>>>>> bfee452532fd783e48e67e8637d4cebb48322461
    int counter;
    if(r == 0 && c == 0)
    {
        if(original[r][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c + 1] == 'X')
        {
            ++counter;
        }
    }
    else if(r == 19 && c == 0)
    {
        if(original[r - 1][c] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r][c + 1] == 'X')
        {
            ++counter;
        }
    }
    else if(r == 19 && c == 19)
    {
        if(original[r][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c] == 'X')
        {
            ++counter;
        }
    }
    else if(r == 0 && c == 19)
    {
        if(original[r][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c] == 'X')
        {
            ++counter;
        }
    }
    else if(r == 0)
    {
        if(original[r + 1][c] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r][c - 1] == 'X')
        {
            ++counter;
        }
    }
    else if(r == 19)
    {
        if(original[r - 1][c] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r][c - 1] == 'X')
        {
            ++counter;
        }
    }
    else if(c == 0)
    {
        if(original[r][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c] == 'X')
        {
            ++counter;
        }
    }
    else if(c == 19)
    {
        if(original[r][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c] == 'X')
        {
            ++counter;
        }
    }
    else
    {    
        if(original[r - 1][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c] == 'X')
        {
            ++counter;
        }
        if(original[r - 1][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r][c + 1] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c - 1] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c] == 'X')
        {
            ++counter;
        }
        if(original[r + 1][c + 1] == 'X')
        {
            ++counter;
        }

        if(counter  == 3)
        {
            return 3;
        }
        else if(counter == 2)
        {
            return 2;
        }
        else if (counter > 3)
        {
            return 4;
        }
        else
        {
            return 1;
        }
    }
}

void changer(int r, int c, char array[][column], char temp_array[][column])
{
    if(array[r][c] == 'O' && (checker(r,c,array) == 3 || checker(r,c,array) == 2 ) //sets all true values to cell(live)
    {
        temp_grid[r][c] = 'X';
    }
    else if(array[r][c] == 'X' && (checker(r,c,array) == 4 || checker(r,c,array) == 1) ) //sets all false values to showing no cell(dead)
    {
        temp_grid[r][c] = 'O';
    }
} //hi vincent

//cout << "I am GAr";