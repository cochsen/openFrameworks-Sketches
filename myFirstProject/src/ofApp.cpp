#include "ofApp.h"

int myCircleX;									// declare variables
int myCircleY;

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);							// Set framerate

	myCircleX = 300;							// initialize variables
	myCircleY = 200;
}

//--------------------------------------------------------------
void ofApp::update(){
	myCircleX += 4;								// increment x coordinate
	if (myCircleX > 1024)						// check bounds of display
	{
		myCircleX = 300;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255, 0, 255);					// set color
	ofDrawCircle(myCircleX, myCircleY, 60);		// draw circle at (x,y), radius 60

	ofSetColor(0, 255, 255);
	ofDrawCircle(500, 500, 100);

	ofDrawBitmapString(ofToString(ofGetFrameRate()) + " fps", 10, 15);	// show framerate
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
