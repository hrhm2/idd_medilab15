//
//  RandomWalker.h
//  RandomWalkre
//
//  Created by labメンバー on 2015/04/28.
//
//

#pragma once
#include "ofMain.h"

class RandomWalker {
public:
    RandomWalker();
    void update();
    void draw();
    
    ofVec2f position;
    
};