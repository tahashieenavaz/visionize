#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>

#include "helpers.h"

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
    VideoCapture cap(resource("video.mp4"));
    Mat frame;
    while(true) {
        cap.read(frame);
        imshow("Image", frame);
        waitKey(1);
    }
}
