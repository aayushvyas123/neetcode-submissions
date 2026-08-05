class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed)  {      
        vector<pair<int,int>> cars;
        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i], speed[i]});
        }

        stack<double> st;
        sort(cars.begin(), cars.end());
        for(int i = cars.size()-1; i >= 0; i--){
            int position = cars[i].first;
            int speed = cars[i].second;

            double time = (double)(target - position) / speed;
            if(st.size() == 0){
                st.push(time);
            }else if(st.size() > 0 && st.top() < time){
                st.push(time);
            }
            else{
                continue;
            }

        }
        return st.size();
    }
};
