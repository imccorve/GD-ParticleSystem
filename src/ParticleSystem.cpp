//
//  ParticleSystem.cpp
//  Particle_System
//
//  Created by Imoni McCorvey on 9/20/18.
//

#include "ParticleSystem.hpp"

void ParticleSystem::setup(float posx,float posy){
    numParticle = 120;
    position.x = posx;
    position.y = posy;
    // get origin/position of emitter
        
}
Particle* ParticleSystem::addParticle(){
    Particle* newParticle = new Particle();
    particles.push_back(newParticle);
    newParticle->setup(position);
    return newParticle;
}
void ParticleSystem::draw(){
    if (particles.size() <= numParticle){
        addParticle();
    }
    for(int i = 0; i <= particles.size()-1; i++){
        Particle* p = particles[i];
        p->draw();
    }
}
void ParticleSystem::update(){
    position.x = (float)ofGetMouseX();
    position.y = (float)ofGetMouseY();
//    for(int i = this->particles.size()-1; i >= 0; i--){
//    for(int i = 0; i <= numParticle-1; i++){
    for(int i = 0; i < particles.size(); i++){

//        if(i >= particles.size()){
//            Particle* newParticle = new Particle();
//                particles.push_back(newParticle);
//            newParticle->setup(position);
////            particles[i] = newParticle;
//        }
        Particle* p = particles[i];
        p->update();
        if(p->isDead()){
            p->reset(position);
//            particles.erase(particles.begin() + i);
        }

        
    }
}
