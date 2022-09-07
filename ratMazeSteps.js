
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
				&& y < N && maze[x][y]!==0);
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
	
		if (x == N - 1 && y == N - 1) {
			sol[x][y] = 1;
			return true;
		}

		
		if (isSafe(maze, x, y) == true) {
			
			if (sol[x][y] == 1)
				return false;
			
			
			sol[x][y] = 1;

			
for(let i=1;i<=maze[x][y] && i<N;i++)
{
  			if (solveMazeUtil(maze, x + i, y, sol)||
			solveMazeUtil(maze, x, y + i, sol))
				return true;
}


			sol[x][y] = 0;
			return false;
		}

		return false;
}

  let maze = [[2, 1, 0, 0],
                        [3, 0, 0, 1],
                        [0, 1, 0, 1],
                        [0, 0, 0, 1]];
                        N=maze.length;
   
        solveMaze(maze);


// This code is contributed by avanitrachhadiya2155