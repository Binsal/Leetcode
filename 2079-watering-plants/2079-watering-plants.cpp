class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int cpt=capacity;

        for(int i=0;i<plants.size();i++){
            
            if(cpt<=0 || plants[i]>cpt){
                steps+=2*(i+1)-1;
                cpt=capacity;
                cpt-=plants[i];
            }
            
            else{
                cpt-=plants[i];
                steps++;
            }            
      
            cout<<steps<<endl;
        }
        
        return steps;
    }
};