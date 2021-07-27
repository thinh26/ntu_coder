#include <iostream>
#define n 9
using namespace std;

int grid[n][n];

bool isPresentInCol(int col, int num)
{
	for(int row=0;row<n;row++)
		if (grid[row][col]==num)
			return true;
	return false;
}

bool isPresentInRow(int row, int num)
{
	for(int col=0;col<n;col++)
		if(grid[row][col]==num)
			return true;
	return false;
}

bool isPresentInBox(int boxStartRow, int boxStartCol, int num)
{
	for(int row=0;row<3;row++)
		for(int col=0;col<3;col++)
			if(grid[row+boxStartRow][col+boxStartCol] == num)
				return true;
	return false;
}

void sudokuGrid()
{
	int row,col;
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			if (col==3 || col ==6)
				cout << " | ";
			cout << grid[row][col] << " ";
		}
		if (row==2 || row==5)
		{
			cout << endl;
			int i;
			for(i=0;i<n;i++)
				cout << "---";
		}
		cout <<endl;
	}
}

bool findEmptyPlace(int &row, int &col)
{
	for(row=0;row<n;row++)
		for(col=0;col<n;col++)
			if(grid[row][col] == 0)
				return true;
	return false;
}

bool isValidPlace(int row, int col, int num)
{
	return !isPresentInRow(row,num) && !isPresentInCol(col,num) && !isPresentInBox(row - row%3 , col - col%3, num);
}

bool solveSudoku()
{
	int row,col;
	if (!findEmptyPlace(row,col))
		return true;
	for(int num = 1; num <= 9; num++)
	{
		if(isValidPlace(row,col,num))
		{
			grid[row][col] = num;
			if(solveSudoku())
				return true;
			grid[row][col] = 0;
		}
	}
	return false;
}
int main()
{
	cout << "Enter grid:\n";
	int row,col;
	for(row=0;row<n;row++)
		for(col=0;col<n;col++)
			cin >> grid[row][col];
	cout << "\nThe answer is: \n";
	if (solveSudoku() == true)
		sudokuGrid();
	else
		cout << "No solution exists";
}