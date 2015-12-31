#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("Video synth");
	ofSetWindowShape(1280, 720);
	ofSetFrameRate(60);
	ofBackground(ofColor::white);

	gui.setup("Parameters", "settings.xml");

	gui.add(countX.setup("countX", 50, 0, 200));
	gui.add(stepX.setup("stepX", 20, 0, 200));
	gui.add(twistX.setup("twistX", 5, -45, 45));

	gui.loadFromFile("settings.xml");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();
	
	ofPushMatrix();
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	stripePattern();
	ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::stripePattern() {
	ofSetColor(ofColor::black);
	ofSetLineWidth(3.0);
	ofNoFill();
	for (int i = -countX; i <= countX; i++)
	{
		ofPushMatrix();
		ofTranslate(i * stepX, 0);
		ofRotate(i * twistX);
		ofScale(6, 6);
		ofTriangle(0, 0, -50, 100, 50, 100);
		ofPopMatrix();
	}
}

//--------------------------------------------------------------
void ofApp::exit() {
	gui.saveToFile("settings.xml");
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
