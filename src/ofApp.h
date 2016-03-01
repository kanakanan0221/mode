#pragma once

#include "ofMain.h"

#include "ofxLeapMotion2.h"
//#include"Particle.hpp"


class ofApp : public ofBaseApp{
private:
    ofTrueTypeFont font;
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    void exit();
    
    ofxLeapMotion leap;
    vector <ofxLeapMotionSimpleHand> simpleHands;
    
    ofEasyCam cam;
    
    vector<ofVec3f> fingerPos;
    vector<ofPoint> handPos;
    ofImage manbo;
    
  
//    ofImage manbo;
    
//    vector <Particle> particles;
//    ofImage img;
    
//    int mode;
      //    vector <Particle> particles;
    //    ofImage img;
    
    int mode;
    ofImage end;
};