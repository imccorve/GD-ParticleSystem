//
//  Particle.hpp
//  Particle_System
//
//  Created by Imoni McCorvey on 9/20/18.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle{
public:
    ofVec2f acceleration;
    ofVec2f velocity;
//    float velocity = 1.0;
    ofVec2f position;
    ofColor color;
    vector<ofColor> colors = {
        ofColor(218,223,230),
        ofColor(159,130,196),
        ofColor(206,194,209),
        ofColor(186,155,196),
        ofColor(161,176,209),
        ofColor(153,131,163),
        ofColor(123,132,201),
        ofColor(100,121,161),
        ofColor(82,127,199),
        ofColor(123,136,156)
                };
    int lifetime;
    void setup(ofVec2f pos);
    void draw();
    void update();
    bool isDead();
    void reset(ofVec2f pos);
private:
    float velocity_boundx = 4;
    float velocity_boundy = 3;
    float RandomNumber(float Min, float Max);
};
#endif /* Particle_hpp */
