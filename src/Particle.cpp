//
//  Particle.cpp
//  Particle_System
//
//  Created by Imoni McCorvey on 9/20/18.
//

#include "Particle.hpp"

void Particle::setup(ofVec2f pos){
    ofEnableAlphaBlending();
//    this->velocity.set((rand() % 3 + (-1)),-(rand() % (2 + 0)));
    this->velocity.set(RandomNumber(-velocity_boundx, velocity_boundx), RandomNumber(-velocity_boundy, velocity_boundy));
    this->position = pos;
//    this->position.set(ofGetWidth()/2,ofGetHeight()/2);
    lifetime = 255;
    this->acceleration.set(0.0,0.1);
    
    color = colors[ofRandom(colors.size())];
}
void Particle::draw(){
//    ofTranslate(ofGetWidth()/2 , ofGetHeight()/2);
//    ofSetColor(160, 260, 200, lifetime);
    ofSetColor(color, lifetime);
    ofFill();
    ofDrawCircle(position, 10);
}
void Particle::update(){
    velocity = velocity + acceleration;
    position = position + velocity;
    lifetime = lifetime - 2;
}
bool Particle::isDead(){
    return lifetime <= 0 ? true : false;
}
void Particle::reset(ofVec2f pos){
    this->position = pos;
    this->velocity.set(RandomNumber(-velocity_boundx, velocity_boundx),RandomNumber(-velocity_boundy, velocity_boundy));
    lifetime = 255;
}
float Particle::RandomNumber(float Min, float Max)
{
    return ((float(rand()) / float(RAND_MAX)) * (Max - Min)) + Min;
}
