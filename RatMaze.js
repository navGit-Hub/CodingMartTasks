
let N;


function printSolution(sol)
{
	for (let i = 0; i < N; i++) {
	  let temp="";
			for (let j = 0; j < N; j++)
				temp+=sol[i][j]+" ";
				console.log(temp)
        			
		}
	
}


function isSafe(maze,x,y)
{
	
		return (x >= 0 && x < N && y >= 0
				&& y < N && maze[x][y] == 1);
}


function solveMaze(maze)
{
	let sol = new Array(N);
	for(let i=0;i<N;i++)
	{
		sol[i]=new Array(N);
		for(let j=0;j<N;j++)
		{
			sol[i][j]=0;
		}
	}

		if (!solveMazeUtil(maze, 0, 0, sol) ) {
			console.log("Solution doesn't exist");
			return false;
		}

		printSolution(sol);
		return true;
}

function solveMazeUtil(maze,x,y,sol)
{
	
		if (x == N - 1 && y == N - 1
			&& maze[x][y] == 1) {
			sol[x][y] = 1;
			return true;
		}

		
		if (isSafe(maze, x, y) == true) {
			
			if (sol[x][y] == 1)
				return false;
			
			
			sol[x][y] = 1;

			
			if (solveMazeUtil(maze, x + 1, y, sol)||
			solveMazeUtil(maze, x, y + 1, sol) ||
			solveMazeUtil(maze, x - 1, y, sol)||
			solveMazeUtil(maze, x, y - 1, sol))
				return true;


			sol[x][y] = 0;
			return false;
		}

		return false;
}

let maze=[[ 1, 1, 0, 0 ],
						[ 0, 1, 0, 1 ],
						[ 0, 1, 0, 0 ],
						[ 1, 1, 1, 1] ];
N = maze.length;
solveMaze(maze);


// This code is contributed by avanitrachhadiya2155