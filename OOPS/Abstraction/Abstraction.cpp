#include <iostream>
using namespace std;
class MediaPlayer {
    // Use pure virtual functions to resemble interfaces
    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void stop() = 0;
};
class AudioPlayer : MediaPlayer {
public:
    void play() override {
        cout << "Audio is playing." << endl;
    }
    void pause() override {
        cout << "Audio is paused." << endl;
    }
    void stop() override {
        cout << "Audio is stopped." << endl;
    }
};
class VideoPlayer : MediaPlayer {
public:
    void play() override {
        cout << "Audio & video is playing." << endl;
    }
    void pause() override {
        cout << "Audio & video is paused." << endl;
    }
    void stop() override {
        cout << "Audio & video is stopped." << endl;
    }
};
int main() {
    AudioPlayer audioPlayer;
    VideoPlayer videoPlayer;
    audioPlayer.play();
    audioPlayer.pause();
    audioPlayer.stop();
    videoPlayer.play();
    videoPlayer.pause();
    videoPlayer.stop();
    return 0;
}
