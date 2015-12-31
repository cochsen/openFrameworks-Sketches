#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("Video synth");
	ofSetWindowShape(1280, 720);
	ofSetFrameRate(60);
	ofBackground(ofColor::white);

	// Number of primitives, distance between, helical twist of primitives along x axis
	gui.setup("Parameters", "settings.xml");
	gui.add(countX.setup("countX", 50, 0, 200));
	gui.add(stepX.setup("stepX", 20, 0, 200));
	gui.add(twistX.setup("twistX", 5, -45, 45));
	
	// Control scale, rotation of all primitives and set background of window
	globalGroup.setup("Global");
	globalGroup.add(Scale.setup("Scale", 1, 0.0, 1));
	globalGroup.add(Rotate.setup("Rotate", 0, -180, 180));
	globalGroup.add(Background.setup("Background", 255, 0, 255));
	gui.add(&globalGroup);

	// Control individual primitives (triangles) translation, rotation, size, color, opacity,
	// shape fill. type switches between square and triangle primitives.
	primGroup.setup("Primitive");
	primGroup.add(shiftY.setup("shiftY", 0.0, -1000.0, 1000.0));
	primGroup.add(rotate.setup("rotate", 0.0, -180.0, 180.0));
	primGroup.add(size.setup("size",
		ofVec2f(6, 6),
		ofVec2f(0, 0),
		ofVec2f(20, 20)));
	primGroup.add(color.setup("color",
		ofColor::black,
		ofColor(0, 0, 0, 0),
		ofColor::white));
	primGroup.add(filled.setup("filled", false));
	primGroup.add(type.setup("type", false));
	gui.add(&primGroup);

	gui.loadFromFile("settings.xml");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(Background);
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
		float Scl = pow(Scale, 4.0f);
		ofScale(Scl, Scl);
		ofRotate(Rotate);
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
