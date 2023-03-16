class Solution {
public:
    
    
    bool IsSafe(vector<vector<char>> &board,int i,int j,char val){
       int row = i - i%3, column = j - j%3;
    for(int x=0; x<9; x++) if(board[x][j] == val) return false;
    for(int y=0; y<9; y++) if(board[i][y] == val) return false;
    for(int x=0; x<3; x++)
    for(int y=0; y<3; y++)
        if(board[row+x][column+y] == val) return false;
    return true;
    
    } 
    
    void solveSudoku(vector<vector<char>>& board) {
        
       solve(board);
    }
   bool solve(vector<vector<char>>&board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){//traverse all indexes in board
            
            if(board[i][j]=='.'){   //when a place is not filled 
                
                for(char c='1';c<='9';c++){  //we check for every char between 1 to 9 
                    
                    if(IsSafe(board,i,j,c)){  //which is safe to place
                        
                        board[i][j]=c;        //we place that char
                        
                        if(solve(board)==true){  //since we need only one solution so we return //when we get our first true
                            return true;
                        }
                        else{
                            board[i][j]='.';
                        }
                    }
                }
                return false;//if we can not place a 'c'between 1 to 9 at the given place then 
            }
        }
    }
    return true;//when we have traversed all places and we have solved the sudoko
}

};