#define PI 3.14159265
class Solution {
public:
    
    double getAngle(int ydiff,int xdiff){
        return atan2(ydiff,xdiff)*180/PI;
    }
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
        int maxi=0;
        int ans=0;
        
        vector<double>vec;
        int collide=0;
        
       for(auto p : points){
            if(p[0] == location[0] && p[1] == location[1]){
                //these are points with same location as yours
                collide += 1;
            }else {
                int dx = p[0] - location[0];
                int dy = p[1] - location[1];
                double angle = atan2(dy,dx); // gives inverse tangent in radians for a coordinate
                //convert to degrees
                double angle1 = angle * (180) / PI;
                if(angle1<0){
                    angle1+=360;
                }
               vec.push_back(angle1);
            }
        }
        
        sort(vec.begin(),vec.end());
        
        int i=0;
        int j=0;
        int n=vec.size();
        
        for(int i=0;i<n;i++){
            vec.push_back(vec[i]+360);
        }
        
        while(j<vec.size()){
            
             
                while(vec[j]-vec[i]>angle){
                    i++;
                }
          
            maxi=max(maxi,j-i+1);
            j++;
        }
        
        maxi+=collide;
        
        return maxi;
    }
};