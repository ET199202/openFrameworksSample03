#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0); // �w�i�F�̐ݒ�
	ofEnableAlphaBlending(); // �����x���g�p�\��
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float x; // ��ʂ�x���W�̒��S�_
	float y; // ��ʂ�y���W�̒��S�_
	float w; // �����`�̕�
	float h; // �����`�̍���
	int i; // for���J�E���^�ϐ�

	w = ofGetWidth() / 30.0 + 1; // �����`�̕����w��
	h = ofGetHeight() / 20.0 + 1; // �����`�̍������w��
	x = 0; // x���W��0��
	y = ofGetHeight() / 2 - h / 2; // y���W����ʂ̏㉺�̒��S��

	// 30��J��Ԃ�
	for (i = 0; i < 30; i ++) {
		ofSetColor(31, 127, 255/30 * i, 127); // �h��̐F��ω�������
		x = ofGetWidth() / 30.0 * i; // x���W��ɓ��Ԋu�ɔz�u
		ofRect(x, y, w, h); // �����`��`��
	}
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
