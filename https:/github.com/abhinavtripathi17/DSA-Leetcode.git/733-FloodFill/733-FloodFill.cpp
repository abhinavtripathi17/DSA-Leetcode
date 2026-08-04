// Last updated: 8/4/2026, 7:13:21 PM
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();

        int startColor = image[sr][sc];
        image[sr][sc] = color;

        int drow[] = {-1 , 0 , 1 , 0};
        int dcol[] = {0 , 1 , 0 , -1};
        if(startColor == color) return image;

        queue<pair<int , int>>q;
        q.push({sr , sc});

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0 ; i < 4 ; i++){
                int r = drow[i] + row;
                int c = dcol[i] + col;

                if(r >= 0 && c >= 0 && r < n && c < m && image[r][c] == startColor){
                    q.push({r , c});
                    image[r][c] = color;
                }
            }
        }

        return image;
    }
};