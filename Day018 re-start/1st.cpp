//Minute Time Difference




// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     //covert into minutes
//     string timepoints={"23:59","00:00"};
//     for(int i=0;i<timepoints.size();i++){
//         int minutes;
//         string curr= {timepoints[i]};
//         int hours = stoi(curr.substr(0,2));
//         int min = stoi(curr.substr(3,2));
//         int totalminutes = hours*60+min;
//         minutes.push_back(totalminutes);
//     }
//     //Step-02 Sort
//     sort(minutes.begin(),minutes.end());
    
//     //Difference btw 
//     int mini = INT_MAX;
//     int n = minutes.size();
//     for(int i=0;i<n;i++){
//         int diffe = minutes[i+1]-minutes[i];
//         mini(mini,diffe);
//     }
//     int lastdiffe = (minutes[0]+1440) - minutes[n-1];
//     return mini;
// }
