//
//  ParticleSystem.hpp
//  Particle_System
//
//  Created by Imoni McCorvey on 9/20/18.
//

#ifndef ParticleSystem_hpp
#define ParticleSystem_hpp

#include <stdio.h>
#include "Particle.hpp"
#include <vector>

class ParticleSystem{
public:
    void setup(float posx,float posy);
    Particle* addParticle();
    void draw();
    void update();
    vector<Particle*> particles;
    int numParticle;
    ofVec2f position;

};
#endif /* ParticleSystem_hpp */
