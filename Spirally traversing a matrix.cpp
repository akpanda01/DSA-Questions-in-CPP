//Spirally traversing a matrix

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        int m = mat.size();
        int n = mat[0].size();

        int srow = 0 , erow = m-1 , scol = 0 , ecol = n-1;
        vector<int> ans;

        while(scol<=ecol && srow<=erow){
            //top
            for(int j =scol;j<=ecol;j++){
                ans.push_back(mat[srow][j]);
            }

            //right
            for(int i =srow +1; i<=erow;i++){
                ans.push_back(mat[i][ecol]);
            }

            //bottom
            for(int j =ecol - 1;j>=scol;j--){
                if(srow == erow) break;
                ans.push_back(mat[erow][j]);
            }

            //left
            for(int i =erow -1; i>=srow+1;i--){
                if(scol == ecol) break;
                ans.push_back(mat[i][scol]);
            }

            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;
    }
};


  //Time Complexity - O(m*n)