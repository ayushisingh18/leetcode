//FIND THE HIGHEST ALTITUDE
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude=0;
        int highest_altitude=0;
        for(int i=0;i<gain.size();i++)
        {
            altitude=altitude+gain[i];
            highest_altitude=max(highest_altitude,altitude);
        }
        return highest_altitude;
    }
};
