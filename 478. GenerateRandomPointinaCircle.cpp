#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double x;
    
        y = y_center;
        r = radius;
    }
    vector<double> randPoint() {
        double rad = (double)rand(); 
        rad = sqrt(rad) * r;
        double teta = (double)rand();
        teta *= 360.0;
        return {x+rad*cos(teta),y+rad*sin(teta)}; 
    }
};
