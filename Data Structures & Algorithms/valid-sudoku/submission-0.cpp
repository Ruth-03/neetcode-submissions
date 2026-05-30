class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      for ( int i=0; i<3; i++ ){
        for (int j=0; j<3; j++){
                   set<char>s;  
            for(int a=0; a<3; a++){
               for( int b=0;b<3; b++){
                  if (board[3*i+a][3*j+b] == '.') continue;
                if(!s.insert(board[3*i+a][3*j+b]).second) return false;
                s.insert(board[3*i+a][3*j+b]);
               }
            }
            
         }
      }

for( int i=0;i<9;i++){
   set<char>v;
   for(int j=0;j<9;j++){
      if (board[i][j] == '.') continue;
      if(!v.insert(board[i][j]).second) return false;
            v.insert(board[i][j]);
   }
}

 for( int j=0;j<9;j++){
   set<char>v;
   for(int i=0;i<9;i++){
      if (board[i][j] == '.') continue;
      if(!v.insert(board[i][j]).second) return false;
            v.insert(board[i][j]);
   }  

}
      
 return true;
        
    
}
    };